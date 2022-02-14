
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int wtopts ;
struct TYPE_36__ {scalar_t__ ref; scalar_t__ lock; } ;
typedef TYPE_2__ git_worktree_add_options ;
typedef int git_worktree ;
struct TYPE_37__ {char const* commondir; } ;
typedef TYPE_3__ git_repository ;
struct TYPE_35__ {int oid; } ;
struct TYPE_38__ {TYPE_1__ target; } ;
typedef TYPE_4__ git_reference ;
typedef int git_commit ;
struct TYPE_39__ {int checkout_strategy; } ;
typedef TYPE_5__ git_checkout_options ;
struct TYPE_40__ {char const* ptr; } ;
typedef TYPE_6__ git_buf ;


 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (TYPE_2__ const*,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__**,TYPE_3__*,char const*,int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,char const*,char const*) ;
 int FUNC_7 (TYPE_6__*,char*,char const*) ;
 int FUNC_8 (TYPE_6__*,char) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,TYPE_3__*,int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (char const*,int,int ) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (TYPE_6__*,char const*,int *) ;
 int FUNC_16 (TYPE_4__**,scalar_t__) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (char const*,int ) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_4__**,TYPE_3__*) ;
 int FUNC_23 (TYPE_3__**,char const*) ;
 int FUNC_24 (int **,TYPE_3__*,char const*) ;
 int FUNC_25 (TYPE_2__*,TYPE_2__ const*,int) ;
 int FUNC_26 (int) ;
 int FUNC_27 (char const*,int) ;
 int FUNC_28 (char const*,char*,TYPE_6__*) ;

int FUNC_29(git_worktree **VAR_7, git_repository *VAR_8,
 const char *VAR_9, const char *VAR_10,
 const git_worktree_add_options *VAR_11)
{
 git_buf VAR_12 = VAR_0, VAR_13 = VAR_0, VAR_14 = VAR_0;
 git_reference *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 git_commit *VAR_17 = ((void*)0);
 git_repository *VAR_18 = ((void*)0);
 git_checkout_options VAR_19 = VAR_2;
 git_worktree_add_options VAR_20 = VAR_5;
 int VAR_21;

 FUNC_0(
  VAR_11, VAR_6, "git_worktree_add_options");

 if (VAR_11)
  FUNC_25(&VAR_20, VAR_11, sizeof(VAR_20));

 FUNC_1(VAR_7 && VAR_8 && VAR_9 && VAR_10);

 *VAR_7 = ((void*)0);

 if (VAR_20.ref) {
  if (!FUNC_18(VAR_20.ref)) {
   FUNC_12(VAR_3, "reference is not a branch");
   VAR_21 = -1;
   goto out;
  }

  if (FUNC_3(VAR_20.ref)) {
   FUNC_12(VAR_3, "reference is already checked out");
   VAR_21 = -1;
   goto out;
  }
 }


 if ((VAR_21 = FUNC_6(&VAR_12, VAR_8->commondir, "worktrees")) < 0)
  goto out;
 if (!FUNC_14(VAR_12.ptr))
  if ((VAR_21 = FUNC_13(VAR_12.ptr, 0755, VAR_4)) < 0)
   goto out;
 if ((VAR_21 = FUNC_6(&VAR_12, VAR_12.ptr, VAR_9)) < 0)
  goto out;
 if ((VAR_21 = FUNC_13(VAR_12.ptr, 0755, VAR_4)) < 0)
  goto out;
 if ((VAR_21 = FUNC_15(&VAR_12, VAR_12.ptr, ((void*)0))) < 0)
  goto out;


 if ((VAR_21 = FUNC_13(VAR_10, 0755, VAR_4)) < 0)
  goto out;
 if ((VAR_21 = FUNC_15(&VAR_13, VAR_10, ((void*)0))) < 0)
  goto out;

 if (VAR_20.lock) {
  int VAR_22;

  if ((VAR_21 = FUNC_6(&VAR_14, VAR_12.ptr, "locked")) < 0)
   goto out;

  if ((VAR_22 = FUNC_27(VAR_14.ptr, 0644)) < 0) {
   VAR_21 = VAR_22;
   goto out;
  }

  FUNC_26(VAR_22);
  FUNC_4(&VAR_14);
 }


 if ((VAR_21 = FUNC_7(&VAR_14, "gitdir: %s\n", VAR_12.ptr)) < 0)
  goto out;
 if ((VAR_21 = FUNC_28(VAR_13.ptr, ".git", &VAR_14)) < 0)
  goto out;


 if ((VAR_21 = FUNC_15(&VAR_14, VAR_8->commondir, ((void*)0)) < 0)
     || (VAR_21 = FUNC_8(&VAR_14, '\n')) < 0
     || (VAR_21 = FUNC_28(VAR_12.ptr, "commondir", &VAR_14)) < 0)
  goto out;
 if ((VAR_21 = FUNC_6(&VAR_14, VAR_13.ptr, ".git")) < 0
     || (VAR_21 = FUNC_8(&VAR_14, '\n')) < 0
     || (VAR_21 = FUNC_28(VAR_12.ptr, "gitdir", &VAR_14)) < 0)
  goto out;


 if (VAR_20.ref) {
  if ((VAR_21 = FUNC_16(&VAR_15, VAR_20.ref)) < 0)
   goto out;
 } else {
  if ((VAR_21 = FUNC_22(&VAR_16, VAR_8)) < 0)
   goto out;
  if ((VAR_21 = FUNC_11(&VAR_17, VAR_8, &VAR_16->target.oid)) < 0)
   goto out;
  if ((VAR_21 = FUNC_2(&VAR_15, VAR_8, VAR_9, VAR_17, 0)) < 0)
   goto out;
 }


 if ((VAR_21 = FUNC_20(VAR_12.ptr, FUNC_19(VAR_15))) < 0)
  goto out;
 if ((VAR_21 = FUNC_23(&VAR_18, VAR_13.ptr)) < 0)
  goto out;


 VAR_19.checkout_strategy = VAR_1;
 if ((VAR_21 = FUNC_9(VAR_18, &VAR_19)) < 0)
  goto out;


 if ((VAR_21 = FUNC_24(VAR_7, VAR_8, VAR_9)) < 0)
  goto out;

out:
 FUNC_5(&VAR_12);
 FUNC_5(&VAR_13);
 FUNC_5(&VAR_14);
 FUNC_17(VAR_15);
 FUNC_17(VAR_16);
 FUNC_10(VAR_17);
 FUNC_21(VAR_18);

 return VAR_21;
}
