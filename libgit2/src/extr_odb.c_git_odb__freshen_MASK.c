
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;

int FUNC_3(git_odb *VAR_0, const git_oid *VAR_1)
{
 FUNC_0(VAR_0 && VAR_1);

 if (FUNC_2(VAR_0, VAR_1, 0))
  return 1;

 if (!FUNC_1(VAR_0))
  return FUNC_2(VAR_0, VAR_1, 1);


 return 0;
}
