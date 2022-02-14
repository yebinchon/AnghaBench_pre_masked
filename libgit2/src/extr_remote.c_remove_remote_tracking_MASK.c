
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_refspec ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t) ;
 int FUNC_2 (int **,int *,char const*) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*) ;

__attribute__((used)) static int FUNC_5(git_repository *VAR_0, const char *VAR_1)
{
 git_remote *VAR_2;
 int VAR_3;
 size_t VAR_4, VAR_5;


 if ((VAR_3 = FUNC_2(&VAR_2, VAR_0, VAR_1)) < 0)
  return VAR_3;

 VAR_5 = FUNC_3(VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  const git_refspec *VAR_6 = FUNC_1(VAR_2, VAR_4);


  if (VAR_6 == ((void*)0))
   continue;

  if ((VAR_3 = FUNC_4(VAR_0, VAR_6)) < 0)
   break;
 }

 FUNC_0(VAR_2);
 return VAR_3;
}
