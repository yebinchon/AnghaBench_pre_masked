
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
struct TYPE_8__ {int entries; } ;
typedef TYPE_1__ git_index ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,int *,int *,int const*,int const*,int *,char const*,int *,int,int const**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__**) ;
 int FUNC_6 (int*,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__**,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
 git_oid *VAR_1,
 git_repository *VAR_2,
 const git_signature *VAR_3,
 const char *VAR_4,
 git_commit *VAR_5,
 git_commit *VAR_6,
 git_commit *VAR_7)
{
 const git_commit *VAR_8[] = { ((void*)0), ((void*)0), ((void*)0) };
 git_index *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 git_tree *VAR_11 = ((void*)0);
 int VAR_12 = 0, VAR_13;

 VAR_8[0] = VAR_6;
 VAR_8[1] = VAR_5;
 VAR_8[2] = VAR_7;

 if ((VAR_12 = FUNC_7(&VAR_10, VAR_2) < 0) ||
     (VAR_12 = FUNC_5(&VAR_9)) < 0 ||
     (VAR_12 = FUNC_2(VAR_9, &VAR_10->entries) < 0) ||
     (VAR_12 = FUNC_6(&VAR_13, VAR_2, VAR_0)) < 0)
  goto cleanup;

 FUNC_3(VAR_9, VAR_13);

 if ((VAR_12 = FUNC_0(&VAR_11, VAR_2, VAR_9, VAR_6)) < 0)
  goto cleanup;

 VAR_12 = FUNC_1(
  VAR_1,
  VAR_2,
  ((void*)0),
  VAR_3,
  VAR_3,
  ((void*)0),
  VAR_4,
  VAR_11,
  VAR_7 ? 3 : 2,
  VAR_8);

cleanup:
 FUNC_8(VAR_11);
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 return VAR_12;
}
