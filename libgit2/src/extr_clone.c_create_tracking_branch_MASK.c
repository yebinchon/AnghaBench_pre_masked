
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,int const*,char const*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_3(
 git_reference **VAR_1,
 git_repository *VAR_2,
 const git_oid *VAR_3,
 const char *VAR_4,
 const char *VAR_5)
{
 int VAR_6;

 if ((VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) < 0)
  return VAR_6;

 return FUNC_2(
  VAR_2,
  VAR_4,
  VAR_0,
  FUNC_1(*VAR_1));
}
