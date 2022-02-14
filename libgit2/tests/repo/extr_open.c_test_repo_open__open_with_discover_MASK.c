
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char const*,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*) ;

void FUNC_10(void)
{
 static const char *VAR_0[] = {
  "attr", "attr/", "attr/.git", "attr/.git/",
  "attr/sub", "attr/sub/", "attr/sub/sub", "attr/sub/sub/",
  ((void*)0)
 };
 git_repository *VAR_1;
 const char **VAR_2;

 FUNC_2("attr");
 FUNC_3(FUNC_9("attr/.gitted", "attr/.git"));

 for (VAR_2 = VAR_0; *VAR_2 != ((void*)0); VAR_2++) {
  FUNC_3(FUNC_6(&VAR_1, *VAR_2, 0, ((void*)0)));
  FUNC_0(FUNC_4(FUNC_7(VAR_1), "attr/.git/") == 0);
  FUNC_0(FUNC_4(FUNC_8(VAR_1), "attr/") == 0);
  FUNC_5(VAR_1);
 }

 FUNC_1("attr");
}
