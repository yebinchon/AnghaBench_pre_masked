
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 const char *VAR_1 = "Debug\nthis/is/deep\npatterned*/dir\n";

 VAR_0 = FUNC_2("empty_standard_repo");

 FUNC_1(FUNC_3(VAR_0, VAR_1));

 FUNC_0("Debug");
 FUNC_0("and/Debug");
 FUNC_0("really/Debug/this/file");
 FUNC_0("Debug/what/I/say");

 FUNC_4("and/NoDebug");
 FUNC_4("NoDebug/this");
 FUNC_4("please/NoDebug/this");

 FUNC_0("this/is/deep");

 FUNC_4("and/this/is/deep");
 FUNC_0("this/is/deep/too");

 FUNC_4("but/this/is/deep/and/ignored");

 FUNC_4("this/is/not/deep");
 FUNC_4("is/this/not/as/deep");
 FUNC_4("this/is/deepish");
 FUNC_4("xthis/is/deep");
}
