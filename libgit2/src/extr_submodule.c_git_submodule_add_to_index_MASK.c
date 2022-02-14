
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef void* int32_t ;
struct TYPE_17__ {int flags; int wd_oid; int index_oid; int path; int repo; } ;
typedef TYPE_3__ git_submodule ;
typedef int git_repository ;
struct TYPE_16__ {scalar_t__ nanoseconds; void* seconds; } ;
struct TYPE_15__ {scalar_t__ nanoseconds; void* seconds; } ;
struct TYPE_18__ {TYPE_2__ mtime; TYPE_1__ ctime; int id; int path; } ;
typedef TYPE_4__ git_index_entry ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_19__ {int ptr; } ;
typedef TYPE_5__ git_buf ;
typedef int entry ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,struct stat*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int **,TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_17 (int ,struct stat*) ;

int FUNC_18(git_submodule *VAR_4, int VAR_5)
{
 int VAR_6;
 git_repository *VAR_7 = ((void*)0);
 git_index *VAR_8;
 git_buf VAR_9 = VAR_0;
 git_commit *VAR_10;
 git_index_entry VAR_11;
 struct stat VAR_12;

 FUNC_0(VAR_4);


 VAR_4->flags = VAR_4->flags & ~VAR_3;

 if ((VAR_6 = FUNC_13(&VAR_8, VAR_4->repo)) < 0 ||
  (VAR_6 = FUNC_2(
   &VAR_9, FUNC_14(VAR_4->repo), VAR_4->path)) < 0 ||
  (VAR_6 = FUNC_15(&VAR_7, VAR_4)) < 0)
  goto cleanup;


 if (FUNC_17(VAR_9.ptr, &VAR_12) < 0) {
  FUNC_6(VAR_1,
   "cannot add submodule without working directory");
  VAR_6 = -1;
  goto cleanup;
 }

 FUNC_16(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.path = VAR_4->path;
 FUNC_9(
  &VAR_11, &VAR_12, !(FUNC_8(VAR_8) & VAR_2));


 if ((VAR_4->flags & VAR_3) == 0) {
  FUNC_6(VAR_1,
   "cannot add submodule without HEAD to index");
  VAR_6 = -1;
  goto cleanup;
 }
 FUNC_11(&VAR_11.id, &VAR_4->wd_oid);

 if ((VAR_6 = FUNC_4(&VAR_10, VAR_7, &VAR_4->wd_oid)) < 0)
  goto cleanup;

 VAR_11.ctime.seconds = (int32_t)FUNC_5(VAR_10);
 VAR_11.ctime.nanoseconds = 0;
 VAR_11.mtime.seconds = (int32_t)FUNC_5(VAR_10);
 VAR_11.mtime.nanoseconds = 0;

 FUNC_3(VAR_10);


 VAR_6 = FUNC_7(VAR_8, &VAR_11);


 if (!VAR_6 && VAR_5) {
  VAR_6 = FUNC_10(VAR_8);

  if (!VAR_6)
   FUNC_11(&VAR_4->index_oid, &VAR_4->wd_oid);
 }

cleanup:
 FUNC_12(VAR_7);
 FUNC_1(&VAR_9);
 return VAR_6;
}
