
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int const git_oid ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *,int const*,int const*) ;
 int FUNC_1 (int const*,int const*) ;

int FUNC_2(git_repository *VAR_1, const git_oid *VAR_2, const git_oid *VAR_3)
{
 git_oid VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2, VAR_3))
  return 0;

 VAR_5 = FUNC_0(&VAR_4, VAR_1, VAR_2, VAR_3);

 if (VAR_5 == VAR_0)
  return 0;

 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(&VAR_4, VAR_3);
}
