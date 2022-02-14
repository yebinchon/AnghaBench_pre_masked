
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 const int VAR_8 = 0;



 if (FUNC_0()) {

  FUNC_1(VAR_0, VAR_3, ~0);
  FUNC_1(VAR_0, VAR_1, ~0);
  FUNC_1(VAR_6, VAR_2, ~0);


  FUNC_2(VAR_7, VAR_5);

 } else {

  FUNC_2(VAR_7, VAR_4);
 }


 asm("mcr p15, 0, %0, c7, c0, 4" : : "r" (VAR_8) : "memory", "cc");

 FUNC_2(VAR_7, VAR_4);
}
