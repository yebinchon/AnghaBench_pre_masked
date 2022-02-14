
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,int const) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void FUNC_2(unsigned long VAR_0, unsigned long VAR_1)
{
 asm volatile("ptesync": : :"memory");






 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_0, 128);
  FUNC_1(VAR_0);
  break;
 case 129:
  FUNC_0(VAR_0, 129);
  break;
 case 130:
 default:
  FUNC_0(VAR_0, 130);
  FUNC_1(VAR_0);
 }
 asm volatile("eieio; tlbsync; ptesync": : :"memory");
}
