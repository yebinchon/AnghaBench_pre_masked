
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(VAR_1, VAR_3 << 16);
 if (FUNC_0(VAR_0)) {
  asm volatile(
   "li	%0,0\n"
   "tlbsx.	0,%1\n"
   "bne	1f\n"
   "li	%0,1\n"
   "1:\n"
   : "=&r"(VAR_4) : "r"(VAR_2));
 } else {
  asm volatile(
   "tlbsx	0,%1\n"
   "mfspr	%0,0x271\n"
   "srwi	%0,%0,31\n"
   : "=&r"(VAR_4) : "r"(VAR_2));
 }

 return VAR_4;
}
