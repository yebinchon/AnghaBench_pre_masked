
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int const*,int ) ;
 int FUNC_7 (int **,int *,int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int **,int *,int ,int ,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_12(git_repository *VAR_4, const git_oid *VAR_5, const char *VAR_6)
{
 int VAR_7;
 git_buf VAR_8 = VAR_0;
 git_object *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 git_reference *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

 FUNC_0(VAR_4 && VAR_5);

 if ((VAR_7 = FUNC_11(&VAR_12, VAR_4, VAR_1)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_6(&VAR_9, VAR_4, VAR_5, VAR_2)) < 0)
  goto cleanup;

 if ((VAR_7 = FUNC_7(&VAR_10, VAR_9, VAR_3)) < 0)
  goto cleanup;

 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_8(FUNC_5(VAR_10));

 if ((VAR_7 = FUNC_1(&VAR_8, VAR_12, VAR_6)) < 0)
  goto cleanup;

 VAR_7 = FUNC_9(&VAR_11, VAR_4, VAR_1, FUNC_5(VAR_10), 1, FUNC_2(&VAR_8));

cleanup:
 FUNC_3(&VAR_8);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 FUNC_10(VAR_12);
 FUNC_10(VAR_11);
 return VAR_7;
}
