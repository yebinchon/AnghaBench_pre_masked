
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int const*) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int *,int ,int *,int,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,int *,char const*) ;
 scalar_t__ FUNC_9 (int *,int *,char const*,int const*,int const*,char const*) ;

__attribute__((used)) static int FUNC_10(
  git_oid *VAR_5,
  git_repository *VAR_6,
  const char *VAR_7,
  const git_object *VAR_8,
  const git_signature *VAR_9,
  const char *VAR_10,
  int VAR_11,
  int VAR_12)
{
 git_reference *VAR_13 = ((void*)0);
 git_buf VAR_14 = VAR_0;

 int VAR_15;

 FUNC_0(VAR_6 && VAR_7 && VAR_8);
 FUNC_0(!VAR_12 || (VAR_9 && VAR_10));

 if (FUNC_4(VAR_8) != VAR_6) {
  FUNC_2(VAR_3, "the given target does not belong to this repository");
  return -1;
 }

 VAR_15 = FUNC_8(VAR_5, &VAR_14, VAR_6, VAR_7);
 if (VAR_15 < 0 && VAR_15 != VAR_2)
  goto cleanup;



 if (VAR_15 == 0 && !VAR_11) {
  FUNC_1(&VAR_14);
  FUNC_2(VAR_4, "tag already exists");
  return VAR_1;
 }

 if (VAR_12) {
  if (FUNC_9(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10) < 0)
   return -1;
 } else
  FUNC_5(VAR_5, FUNC_3(VAR_8));

 VAR_15 = FUNC_6(&VAR_13, VAR_6, VAR_14.ptr, VAR_5, VAR_11, ((void*)0));

cleanup:
 FUNC_7(VAR_13);
 FUNC_1(&VAR_14);
 return VAR_15;
}
