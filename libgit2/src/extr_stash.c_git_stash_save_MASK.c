
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,int *,int const*,int ,int *) ;
 int FUNC_2 (int **,int *,int const*,int ,int *,int) ;
 int FUNC_3 (int *,int *,int const*,int ,int *,int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int *,char const*) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int **,int *,int *) ;
 int FUNC_15 (int *,int *,int ) ;

int FUNC_16(
 git_oid *VAR_4,
 git_repository *VAR_5,
 const git_signature *VAR_6,
 const char *VAR_7,
 uint32_t VAR_8)
{
 git_index *VAR_9 = ((void*)0);
 git_commit *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 git_buf VAR_13 = VAR_0;
 int VAR_14;

 FUNC_0(VAR_4 && VAR_5 && VAR_6);

 if ((VAR_14 = FUNC_10(VAR_5, "stash save")) < 0)
  return VAR_14;

 if ((VAR_14 = FUNC_14(&VAR_10, &VAR_13, VAR_5)) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_4(VAR_5, VAR_8)) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_11(&VAR_9, VAR_5)) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_1(&VAR_11, VAR_5, VAR_9, VAR_6,
      FUNC_5(&VAR_13), VAR_10)) < 0)
  goto cleanup;

 if ((VAR_8 & (VAR_2 | VAR_1)) &&
     (VAR_14 = FUNC_2(&VAR_12, VAR_5, VAR_6,
          FUNC_5(&VAR_13), VAR_11, VAR_8)) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_12(&VAR_13, VAR_7)) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_3(VAR_4, VAR_5, VAR_6, FUNC_5(&VAR_13),
         VAR_11, VAR_10, VAR_12)) < 0)
  goto cleanup;

 FUNC_7(&VAR_13);

 if ((VAR_14 = FUNC_15(VAR_4, VAR_5, FUNC_5(&VAR_13))) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_13(VAR_5, (VAR_8 & VAR_3) ? VAR_11 : VAR_10,
          VAR_8)) < 0)
  goto cleanup;

cleanup:

 FUNC_6(&VAR_13);
 FUNC_8(VAR_11);
 FUNC_8(VAR_10);
 FUNC_8(VAR_12);
 FUNC_9(VAR_9);

 return VAR_14;
}
