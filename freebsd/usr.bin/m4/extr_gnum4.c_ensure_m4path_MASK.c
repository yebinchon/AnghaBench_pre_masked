
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char**,char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{
 static int VAR_1 = 0;
 char *VAR_2;
 char *VAR_3;
 char *VAR_4;

 if (VAR_1)
  return;
 VAR_1 = VAR_0;
 VAR_2 = FUNC_2("M4PATH");
 if (!VAR_2)
  return;

 VAR_2 = FUNC_4(VAR_2);
 for (VAR_3 = VAR_2;
     (VAR_4 = FUNC_3(&VAR_3, ":")) != ((void*)0);)
     FUNC_0(VAR_4);
 FUNC_1(VAR_2);
}
