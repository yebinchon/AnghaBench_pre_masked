
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (char const**,int *,int,char*,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_3 = FUNC_4("attr_index");
 const char *VAR_4;


 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "sub/sub/README.md", "bar"));
 FUNC_2(VAR_4, "1234");

 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "sub/sub/README.txt", "another"));
 FUNC_2(VAR_4, "one");

 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "sub/sub/README.txt", "again"));
 FUNC_1(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "sub/sub/README.txt", "beep"));
 FUNC_2(VAR_4, "10");


 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "sub/sub/README.md", "bar"));
 FUNC_2(VAR_4, "1337");

 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "sub/sub/README.txt", "another"));
 FUNC_2(VAR_4, "one");

 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "sub/sub/README.txt", "again"));
 FUNC_1(FUNC_0(VAR_4));

 FUNC_3(FUNC_5(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "sub/sub/README.txt", "beep"));
 FUNC_2(VAR_4, "5");
}
