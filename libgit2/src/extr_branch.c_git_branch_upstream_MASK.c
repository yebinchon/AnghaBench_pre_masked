
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

int FUNC_6(
 git_reference **VAR_1,
 const git_reference *VAR_2)
{
 int VAR_3;
 git_buf VAR_4 = VAR_0;

 if ((VAR_3 = FUNC_0(&VAR_4,
  FUNC_5(VAR_2), FUNC_4(VAR_2))) < 0)
   return VAR_3;

 VAR_3 = FUNC_3(
  VAR_1,
  FUNC_5(VAR_2),
  FUNC_1(&VAR_4));

 FUNC_2(&VAR_4);
 return VAR_3;
}
