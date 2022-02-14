
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_signature ;
struct TYPE_7__ {int id; } ;
typedef TYPE_2__ git_rebase_operation ;
struct TYPE_6__ {int payload; int (* signing_cb ) (int *,int *,char*,int ) ;} ;
struct TYPE_8__ {int repo; TYPE_1__ options; int current; int operations; } ;
typedef TYPE_3__ git_rebase ;
typedef int git_oid ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int const*,int const*,char const*,char const*,int *,int,int const**) ;
 int FUNC_8 (int *,int ,char*,char const*,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;
 char* FUNC_11 (int *) ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,char*) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *,int *,int ) ;
 scalar_t__ FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int **,int ,int *) ;
 int FUNC_23 (int *,int *,char*,int ) ;

__attribute__((used)) static int FUNC_24(
 git_commit **VAR_6,
 git_rebase *VAR_7,
 git_index *VAR_8,
 git_commit *VAR_9,
 const git_signature *VAR_10,
 const git_signature *VAR_11,
 const char *VAR_12,
 const char *VAR_13)
{
 git_rebase_operation *VAR_14;
 git_commit *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 git_tree *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 git_oid VAR_19, VAR_20;
 git_buf VAR_21 = VAR_0, VAR_22 = VAR_0,
  VAR_23 = VAR_0;
 const char *VAR_24 = ((void*)0),
  *VAR_25 = ((void*)0);
 int VAR_26;

 VAR_14 = FUNC_1(VAR_7->operations, VAR_7->current);

 if (FUNC_17(VAR_8)) {
  FUNC_15(VAR_2, "conflicts have not been resolved");
  VAR_26 = VAR_3;
  goto done;
 }

 if ((VAR_26 = FUNC_10(&VAR_15, VAR_7->repo, &VAR_14->id)) < 0 ||
  (VAR_26 = FUNC_13(&VAR_17, VAR_9)) < 0 ||
  (VAR_26 = FUNC_18(&VAR_19, VAR_8, VAR_7->repo)) < 0 ||
  (VAR_26 = FUNC_22(&VAR_18, VAR_7->repo, &VAR_19)) < 0)
  goto done;

 if (FUNC_19(&VAR_19, FUNC_21(VAR_17))) {
  FUNC_15(VAR_2, "this patch has already been applied");
  VAR_26 = VAR_1;
  goto done;
 }

 if (!VAR_10)
  VAR_10 = FUNC_6(VAR_15);

 if (!VAR_13) {
  VAR_12 = FUNC_12(VAR_15);
  VAR_13 = FUNC_11(VAR_15);
 }

 if ((VAR_26 = FUNC_7(&VAR_21, VAR_7->repo, VAR_10, VAR_11,
   VAR_12, VAR_13, VAR_18, 1, (const git_commit **)&VAR_9)) < 0)
  goto done;

 if (VAR_7->options.signing_cb) {
  FUNC_14();
  VAR_26 = FUNC_16(VAR_7->options.signing_cb(
   &VAR_22, &VAR_23, FUNC_3(&VAR_21),
   VAR_7->options.payload), "commit signing_cb failed");
  if (VAR_26 == VAR_5) {
   FUNC_4(&VAR_22);
   FUNC_4(&VAR_23);
   FUNC_14();
   VAR_26 = VAR_4;
  } else if (VAR_26 < 0)
   goto done;
 }

 if (FUNC_5(&VAR_22)) {
  FUNC_0(FUNC_2(&VAR_22));
  VAR_25 = FUNC_3(&VAR_22);
 }

 if (FUNC_5(&VAR_23)) {
  FUNC_0(FUNC_2(&VAR_23));
  VAR_24 = FUNC_3(&VAR_23);
 }

 if ((VAR_26 = FUNC_8(&VAR_20, VAR_7->repo,
   FUNC_3(&VAR_21), VAR_25,
   VAR_24)))
  goto done;

 if ((VAR_26 = FUNC_10(&VAR_16, VAR_7->repo, &VAR_20)) < 0)
  goto done;

 *VAR_6 = VAR_16;

done:
 if (VAR_26 < 0)
  FUNC_9(VAR_16);

 FUNC_4(&VAR_22);
 FUNC_4(&VAR_23);
 FUNC_4(&VAR_21);
 FUNC_9(VAR_15);
 FUNC_20(VAR_17);
 FUNC_20(VAR_18);

 return VAR_26;
}
