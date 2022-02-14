
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int ,int *,int,char const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
 git_oid *VAR_1,
 git_repository *VAR_2,
 const char *VAR_3)
{
 git_reference *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_2, VAR_0)) < 0)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_4, VAR_2, VAR_0, VAR_1, 1, VAR_3);

 FUNC_2(VAR_4);

 return VAR_5;
}
