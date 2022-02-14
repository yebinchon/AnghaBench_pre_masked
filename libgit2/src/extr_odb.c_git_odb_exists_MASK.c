
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;


 int FUNC_0 (int) ;
 int * FUNC_1 (int ,int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int) ;

int FUNC_7(git_odb *VAR_0, const git_oid *VAR_1)
{
 git_odb_object *VAR_2;

 FUNC_0(VAR_0 && VAR_1);

 if (FUNC_4(VAR_1))
  return 0;

 if ((VAR_2 = FUNC_1(FUNC_5(VAR_0), VAR_1)) != ((void*)0)) {
  FUNC_2(VAR_2);
  return 1;
 }

 if (FUNC_6(VAR_0, VAR_1, 0))
  return 1;

 if (!FUNC_3(VAR_0))
  return FUNC_6(VAR_0, VAR_1, 1);


 return 0;
}
