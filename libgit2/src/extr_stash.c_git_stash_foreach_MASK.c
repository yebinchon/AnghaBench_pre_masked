
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* git_stash_cb ) (size_t,int ,int ,void*) ;
typedef int git_repository ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int ) ;
 int * FUNC_4 (int *,size_t) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int ) ;

int FUNC_10(
 git_repository *VAR_2,
 git_stash_cb VAR_3,
 void *VAR_4)
{
 git_reference *VAR_5;
 git_reflog *VAR_6 = ((void*)0);
 int VAR_7;
 size_t VAR_8, VAR_9;
 const git_reflog_entry *VAR_10;

 VAR_7 = FUNC_3(&VAR_5, VAR_2, VAR_1);
 if (VAR_7 == VAR_0) {
  FUNC_0();
  return 0;
 }
 if (VAR_7 < 0)
  goto cleanup;

 if ((VAR_7 = FUNC_9(&VAR_6, VAR_2, VAR_1)) < 0)
  goto cleanup;

 VAR_9 = FUNC_7(VAR_6);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_10 = FUNC_4(VAR_6, VAR_8);

  VAR_7 = VAR_3(VAR_8,
   FUNC_6(VAR_10),
   FUNC_5(VAR_10),
   VAR_4);

  if (VAR_7) {
   FUNC_1(VAR_7);
   break;
  }
 }

cleanup:
 FUNC_2(VAR_5);
 FUNC_8(VAR_6);
 return VAR_7;
}
