
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_signature ;
typedef int git_reference ;
struct TYPE_8__ {int id; } ;
typedef TYPE_1__ git_rebase_operation ;
struct TYPE_9__ {int repo; int current; int operations; } ;
typedef TYPE_2__ git_rebase ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (int ,int *,char*,int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int ) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int **,TYPE_2__*,int *,int *,int const*,int const*,char const*,char const*) ;
 int FUNC_13 (int ,int,int,int ) ;
 int FUNC_14 (TYPE_2__*,int ,int,char*,int,char*,int,char*) ;

__attribute__((used)) static int FUNC_15(
 git_oid *VAR_7,
 git_rebase *VAR_8,
 const git_signature *VAR_9,
 const git_signature *VAR_10,
 const char *VAR_11,
 const char *VAR_12)
{
 git_rebase_operation *VAR_13;
 git_reference *VAR_14 = ((void*)0);
 git_commit *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 git_index *VAR_17 = ((void*)0);
 char VAR_18[VAR_2], VAR_19[VAR_2];
 int VAR_20;

 VAR_13 = FUNC_1(VAR_8->operations, VAR_8->current);
 FUNC_0(VAR_13);

 if ((VAR_20 = FUNC_13(VAR_8->repo, 0, 1, VAR_0)) < 0 ||
  (VAR_20 = FUNC_10(&VAR_14, VAR_8->repo)) < 0 ||
  (VAR_20 = FUNC_9((git_object **)&VAR_15, VAR_14, VAR_1)) < 0 ||
  (VAR_20 = FUNC_11(&VAR_17, VAR_8->repo)) < 0 ||
  (VAR_20 = FUNC_12(&VAR_16, VAR_8, VAR_17, VAR_15,
   VAR_9, VAR_10, VAR_11, VAR_12)) < 0 ||
  (VAR_20 = FUNC_7(
   VAR_8->repo, ((void*)0), "HEAD", FUNC_3(VAR_16), "rebase")) < 0)
  goto done;

 FUNC_6(VAR_18, &VAR_13->id);
 FUNC_6(VAR_19, FUNC_3(VAR_16));

 if ((VAR_20 = FUNC_14(VAR_8, VAR_6, VAR_4|VAR_5|VAR_3,
  "%.*s %.*s\n", VAR_2, VAR_18, VAR_2, VAR_19)) < 0)
  goto done;

 FUNC_5(VAR_7, FUNC_3(VAR_16));

done:
 FUNC_4(VAR_17);
 FUNC_8(VAR_14);
 FUNC_2(VAR_15);
 FUNC_2(VAR_16);
 return VAR_20;
}
