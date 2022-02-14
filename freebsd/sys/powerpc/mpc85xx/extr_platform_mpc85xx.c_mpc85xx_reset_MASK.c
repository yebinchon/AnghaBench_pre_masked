
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(platform_t VAR_5)
{






 FUNC_0(VAR_2, 2);

 FUNC_2(FUNC_1() & ~VAR_3);


 FUNC_3(VAR_4, VAR_0 | VAR_1);
 __asm __volatile("isync");


 FUNC_2(FUNC_1() | VAR_3);

 FUNC_4("Reset failed...\n");
 while (1)
  ;
}
