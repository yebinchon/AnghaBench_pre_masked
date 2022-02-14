
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_odb ;
typedef int git_commit_parent_callback ;
struct TYPE_5__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int git_array_oid_t ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int const*,int const*,char const*,char const*,int const*,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int ,int ) ;
 int FUNC_6 (int *,int *,char const*,int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,char const*,int) ;
 int * FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int **,int *) ;
 int FUNC_11 (int *,int *,int const*,int ,void*,int const*,int) ;

__attribute__((used)) static int FUNC_12(
 git_oid *VAR_4,
 git_repository *VAR_5,
 const char *VAR_6,
 const git_signature *VAR_7,
 const git_signature *VAR_8,
 const char *VAR_9,
 const char *VAR_10,
 const git_oid *VAR_11,
 git_commit_parent_callback VAR_12,
 void *VAR_13,
 bool VAR_14)
{
 int VAR_15;
 git_odb *VAR_16;
 git_reference *VAR_17 = ((void*)0);
 git_buf VAR_18 = VAR_1;
 const git_oid *VAR_19 = ((void*)0);
 git_array_oid_t VAR_20 = VAR_0;

 if (VAR_6) {
  VAR_15 = FUNC_8(&VAR_17, VAR_5, VAR_6, 10);
  if (VAR_15 < 0 && VAR_15 != VAR_2)
   return VAR_15;
 }
 FUNC_3();

 if (VAR_17)
  VAR_19 = FUNC_9(VAR_17);

 if ((VAR_15 = FUNC_11(&VAR_20, VAR_5, VAR_11, VAR_12, VAR_13, VAR_19, VAR_14)) < 0)
  goto cleanup;

 VAR_15 = FUNC_2(&VAR_18, VAR_7, VAR_8,
  VAR_9, VAR_10, VAR_11,
  &VAR_20);

 if (VAR_15 < 0)
  goto cleanup;

 if (FUNC_10(&VAR_16, VAR_5) < 0)
  goto cleanup;

 if (FUNC_4(VAR_16, VAR_11) < 0)
  goto cleanup;

 if (FUNC_5(VAR_4, VAR_16, VAR_18.ptr, VAR_18.size, VAR_3) < 0)
  goto cleanup;


 if (VAR_6 != ((void*)0)) {
  VAR_15 = FUNC_6(
   VAR_5, VAR_17, VAR_6, VAR_4, "commit");
  goto cleanup;
 }

cleanup:
 FUNC_0(VAR_20);
 FUNC_7(VAR_17);
 FUNC_1(&VAR_18);
 return VAR_15;
}
