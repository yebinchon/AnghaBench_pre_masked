
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int * VAR_1 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{




 if (!FUNC_2(VAR_2, "UTF-8") &&
     !FUNC_2(VAR_2, "c.utf8") &&
     !FUNC_2(VAR_2, "en_US.UTF-8"))
  FUNC_1();

 if (VAR_0 == 1)
  FUNC_0("Expected locale to be switched to multibyte");
}
