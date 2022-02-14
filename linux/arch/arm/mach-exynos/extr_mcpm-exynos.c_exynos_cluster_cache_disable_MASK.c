
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 if (FUNC_3() == VAR_0) {




  asm volatile(
  "mcr	p15, 1, %0, c15, c0, 3\n\t"
  "isb\n\t"
  "dsb"
  : : "r" (0x400));
 }


 FUNC_1(VAR_1);





 FUNC_0(FUNC_2());
}
