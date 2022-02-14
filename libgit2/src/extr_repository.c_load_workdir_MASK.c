
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {void* workdir; int gitdir; scalar_t__ is_worktree; scalar_t__ is_bare; } ;
typedef TYPE_1__ git_repository ;
struct TYPE_16__ {scalar_t__ value; } ;
typedef TYPE_2__ git_config_entry ;
typedef int git_config ;
struct TYPE_17__ {int ptr; } ;
typedef TYPE_3__ git_buf ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,int ) ;
 void* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__**,int *,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 char* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(git_repository *VAR_2, git_config *VAR_3, git_buf *VAR_4)
{
 int VAR_5;
 git_config_entry *VAR_6;
 git_buf VAR_7 = VAR_0;
 git_buf VAR_8 = VAR_0;

 if (VAR_2->is_bare)
  return 0;

 if ((VAR_5 = FUNC_4(
   &VAR_6, VAR_3, "core.worktree", 0)) < 0)
  return VAR_5;

 if (VAR_2->is_worktree) {
  char *VAR_9 = FUNC_10(VAR_2->gitdir, VAR_1);
  if (!VAR_9) {
   VAR_5 = -1;
   goto cleanup;
  }

  FUNC_1(&VAR_7, VAR_9, 0);

  if ((FUNC_6(&VAR_7, VAR_7.ptr)) < 0 ||
      FUNC_9(&VAR_7) < 0) {
   VAR_5 = -1;
   goto cleanup;
  }

  VAR_2->workdir = FUNC_2(&VAR_7);
 }
 else if (VAR_6 && VAR_6->value) {
  if ((VAR_5 = FUNC_8(
    &VAR_7, VAR_6->value, VAR_2->gitdir)) < 0)
   goto cleanup;

  VAR_2->workdir = FUNC_2(&VAR_7);
 }
 else if (VAR_4 && FUNC_7(VAR_4->ptr))
  VAR_2->workdir = FUNC_2(VAR_4);
 else {
  if (FUNC_6(&VAR_7, VAR_2->gitdir) < 0 ||
      FUNC_9(&VAR_7) < 0) {
   VAR_5 = -1;
   goto cleanup;
  }

  VAR_2->workdir = FUNC_2(&VAR_7);
 }

 FUNC_0(VAR_2->workdir);
cleanup:
 FUNC_3(&VAR_8);
 FUNC_5(VAR_6);
 return VAR_5;
}
