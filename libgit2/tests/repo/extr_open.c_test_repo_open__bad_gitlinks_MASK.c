
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int *,int ) ;
 int FUNC_5 (int **,char*,int ,int *) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(void)
{
 git_repository *VAR_1;
 static const char *VAR_2[] = {
  "garbage\n", "gitdir", "gitdir:\n", "gitdir: foobar",
  "gitdir: ../invalid", "gitdir: ../invalid2",
  "gitdir: ../attr/.git with extra stuff",
  ((void*)0)
 };
 const char **VAR_3;

 FUNC_2("attr");

 FUNC_1(FUNC_7("invalid", 0777));
 FUNC_1(FUNC_3("invalid2/.git", 0777));

 for (VAR_3 = VAR_2; *VAR_3 != ((void*)0); VAR_3++) {
  FUNC_6("alternate", *VAR_3);
  FUNC_0(FUNC_5(&VAR_1, "alternate", 0, ((void*)0)));
 }

 FUNC_4("invalid", ((void*)0), VAR_0);
 FUNC_4("invalid2", ((void*)0), VAR_0);
}
