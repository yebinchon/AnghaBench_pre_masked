
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*,int const*,int *,int,int *,char const*,int const*,int *) ;

int FUNC_4(
 git_reference **VAR_0,
 git_repository *VAR_1,
 const char *VAR_2,
 const git_oid *VAR_3,
 int VAR_4,
 const git_oid *VAR_5,
 const char *VAR_6)

{
 int VAR_7;
 git_signature *VAR_8 = ((void*)0);

 FUNC_0(VAR_3);

 if ((VAR_7 = FUNC_1(&VAR_8, VAR_1)) < 0)
  return VAR_7;

 VAR_7 = FUNC_3(
  VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), VAR_4, VAR_8, VAR_6, VAR_5, ((void*)0));

 FUNC_2(VAR_8);
 return VAR_7;
}
