
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (char const**,int *,int,char*,char*) ;
 int FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_repository *VAR_3 = FUNC_5("attr_index");
 const char *VAR_4;

 FUNC_2(!FUNC_7(VAR_3));


 FUNC_4(FUNC_6(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "README.md", "bar"));
 FUNC_2(FUNC_0(VAR_4));

 FUNC_4(FUNC_6(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "README.md", "blargh"));
 FUNC_3(VAR_4, "goop");

 FUNC_4(FUNC_6(
  &VAR_4, VAR_3, VAR_2 | VAR_0,
  "README.txt", "foo"));
 FUNC_2(FUNC_0(VAR_4));


 FUNC_4(FUNC_6(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "README.md", "bar"));
 FUNC_2(FUNC_1(VAR_4));

 FUNC_4(FUNC_6(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "README.md", "blargh"));
 FUNC_3(VAR_4, "garble");

 FUNC_4(FUNC_6(
  &VAR_4, VAR_3, VAR_2 | VAR_1,
  "README.txt", "foo"));
 FUNC_2(FUNC_1(VAR_4));
}
