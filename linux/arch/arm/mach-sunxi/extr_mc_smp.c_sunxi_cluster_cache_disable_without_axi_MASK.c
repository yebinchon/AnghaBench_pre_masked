
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 if (FUNC_2() == VAR_0) {




  asm volatile(
  "mcr	p15, 1, %0, c15, c0, 3\n"
  "isb\n"
  "dsb"
  : : "r" (0x400));
 }


 FUNC_3(VAR_1);





 FUNC_0(FUNC_1());
}
