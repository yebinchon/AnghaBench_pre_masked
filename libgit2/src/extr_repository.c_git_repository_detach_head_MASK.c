
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int **,int *,int ,int ,int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int *) ;

int FUNC_13(git_repository* VAR_3)
{
 git_reference *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 git_object *VAR_7 = ((void*)0);
 git_buf VAR_8 = VAR_0;
 int VAR_9;

 FUNC_0(VAR_3);

 if ((VAR_9 = FUNC_10(&VAR_6, VAR_3, VAR_1)) < 0)
  return VAR_9;

 if ((VAR_9 = FUNC_12(&VAR_4, VAR_3)) < 0)
  goto cleanup;

 if ((VAR_9 = FUNC_6(&VAR_7, VAR_3, FUNC_11(VAR_4), VAR_2)) < 0)
  goto cleanup;

 if ((VAR_9 = FUNC_1(&VAR_8, VAR_6, FUNC_7(FUNC_5(VAR_7)))) < 0)
  goto cleanup;

 VAR_9 = FUNC_8(&VAR_5, VAR_3, VAR_1, FUNC_11(VAR_4),
   1, FUNC_2(&VAR_8));

cleanup:
 FUNC_3(&VAR_8);
 FUNC_4(VAR_7);
 FUNC_9(VAR_4);
 FUNC_9(VAR_5);
 FUNC_9(VAR_6);
 return VAR_9;
}
