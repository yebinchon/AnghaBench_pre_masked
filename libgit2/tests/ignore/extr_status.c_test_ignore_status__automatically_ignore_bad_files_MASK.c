
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

void FUNC_6(void)
{
 VAR_0 = FUNC_2("empty_standard_repo");

 FUNC_0(".git");
 FUNC_0("this/file/.");
 FUNC_0("path/../funky");
 FUNC_5("path/whatever.c");

 FUNC_1(FUNC_3(VAR_0, "*.c\n"));

 FUNC_0(".git");
 FUNC_0("this/file/.");
 FUNC_0("path/../funky");
 FUNC_0("path/whatever.c");

 FUNC_1(FUNC_4(VAR_0));

 FUNC_0(".git");
 FUNC_0("this/file/.");
 FUNC_0("path/../funky");
 FUNC_5("path/whatever.c");
}
