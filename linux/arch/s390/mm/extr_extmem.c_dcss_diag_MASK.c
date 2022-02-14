
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(int *VAR_1, void *VAR_2,
           unsigned long *VAR_3, unsigned long *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = (unsigned long) VAR_2;
 VAR_6 = (unsigned long) *VAR_1;

 FUNC_0(VAR_0);
 asm volatile(
  "	diag	%0,%1,0x64\n"
  "	ipm	%2\n"
  "	srl	%2,28\n"
  : "+d" (VAR_5), "+d" (VAR_6), "=d" (VAR_7) : : "cc");
 *VAR_3 = VAR_5;
 *VAR_4 = VAR_6;
 return VAR_7;
}
