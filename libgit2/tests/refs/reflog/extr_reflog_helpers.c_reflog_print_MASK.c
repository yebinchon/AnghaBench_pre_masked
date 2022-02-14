
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char) ;
 int * FUNC_4 (int *,size_t) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char const*) ;
 int FUNC_8 (int *,int const*) ;
 int VAR_1 ;

void FUNC_9(git_repository *VAR_2, const char *VAR_3)
{
 git_reflog *VAR_4;
 size_t VAR_5;
 git_buf VAR_6 = VAR_0;

 FUNC_7(&VAR_4, VAR_2, VAR_3);

 for (VAR_5 = 0; VAR_5 < FUNC_5(VAR_4); VAR_5++) {
  const git_reflog_entry *VAR_7 = FUNC_4(VAR_4, VAR_5);
  FUNC_8(&VAR_6, VAR_7);
  FUNC_3(&VAR_6, '\n');
 }

 FUNC_0(VAR_1, "%s", FUNC_1(&VAR_6));
 FUNC_2(&VAR_6);
 FUNC_6(VAR_4);
}
