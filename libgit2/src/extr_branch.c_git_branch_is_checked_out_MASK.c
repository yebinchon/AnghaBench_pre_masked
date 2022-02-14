
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int *,int ,int,void*) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(const git_reference *VAR_2)
{
 git_repository *VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2))
  return 0;

 VAR_3 = FUNC_2(VAR_2);

 if (FUNC_4(VAR_3))
  VAR_4 |= VAR_0;

 return FUNC_3(VAR_3, VAR_1, VAR_4, (void *) VAR_2) == 1;
}
