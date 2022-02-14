
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

 FUNC_5("one.txt");
 FUNC_5("two.bar");

 FUNC_1(FUNC_3(VAR_0, "*.nomatch\n"));

 FUNC_5("one.txt");
 FUNC_5("two.bar");

 FUNC_1(FUNC_3(VAR_0, "*.txt\n"));

 FUNC_0("one.txt");
 FUNC_5("two.bar");

 FUNC_1(FUNC_3(VAR_0, "*.bar\n"));

 FUNC_0("one.txt");
 FUNC_0("two.bar");

 FUNC_1(FUNC_4(VAR_0));

 FUNC_5("one.txt");
 FUNC_5("two.bar");

 FUNC_1(FUNC_3(
  VAR_0, "multiple\n*.rules\n# comment line\n*.bar\n"));

 FUNC_5("one.txt");
 FUNC_0("two.bar");
}
