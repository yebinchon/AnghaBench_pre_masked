
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int **,int *,int *,int const**,size_t) ;

__attribute__((used)) static int FUNC_4(
 git_annotated_commit **VAR_1,
 git_annotated_commit **VAR_2,
 git_repository *VAR_3,
 git_reference *VAR_4,
 const git_annotated_commit **VAR_5,
 size_t VAR_6)
{
 git_annotated_commit *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 *VAR_1 = ((void*)0);
 *VAR_2 = ((void*)0);

 if ((VAR_9 = FUNC_1(&VAR_8, VAR_3, VAR_4)) < 0)
  goto done;

 if ((VAR_9 = FUNC_3(&VAR_7, VAR_3, VAR_8, VAR_5, VAR_6)) < 0) {
  if (VAR_9 != VAR_0)
   goto done;

  FUNC_2();
  VAR_9 = 0;
 }

 *VAR_1 = VAR_7;
 *VAR_2 = VAR_8;

done:
 if (VAR_9 < 0) {
  FUNC_0(VAR_7);
  FUNC_0(VAR_8);
 }

 return VAR_9;
}
