
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_oid ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (int *,int *,int *,char*,char const*,int ,int) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*,int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;

int FUNC_7(
 git_oid *VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 int VAR_4;
 git_buf VAR_5 = VAR_0;
 const char *VAR_6, *VAR_7;

 if ((VAR_4 = FUNC_4(&VAR_5, VAR_3, ((void*)0))) < 0) {
  FUNC_3(&VAR_5);
  return VAR_4;
 }

 VAR_7 = FUNC_2(&VAR_5);
 VAR_6 = FUNC_5(VAR_2);

 if (VAR_6 && !FUNC_0(VAR_7, VAR_6))
  VAR_7 += FUNC_6(VAR_6);

 VAR_4 = FUNC_1(
  VAR_1, ((void*)0), VAR_2, FUNC_2(&VAR_5), VAR_7, 0, 1);

 FUNC_3(&VAR_5);
 return VAR_4;
}
