
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ commondir_path; scalar_t__ parent_path; scalar_t__ gitlink_path; int gitdir_path; } ;
typedef TYPE_1__ git_worktree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

int FUNC_4(const git_worktree *VAR_2)
{
 FUNC_0(VAR_2);

 if (!FUNC_3(VAR_2->gitdir_path)) {
  FUNC_1(VAR_1,
   "worktree gitdir ('%s') is not valid",
   VAR_2->gitlink_path);
  return VAR_0;
 }

 if (VAR_2->parent_path && !FUNC_2(VAR_2->parent_path)) {
  FUNC_1(VAR_1,
   "worktree parent directory ('%s') does not exist ",
   VAR_2->parent_path);
  return VAR_0;
 }

 if (!FUNC_2(VAR_2->commondir_path)) {
  FUNC_1(VAR_1,
   "worktree common directory ('%s') does not exist ",
   VAR_2->commondir_path);
  return VAR_0;
 }

 return 0;
}
