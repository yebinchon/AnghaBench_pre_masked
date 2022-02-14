
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int locked; int commondir_path; int parent_path; int gitlink_path; int gitdir_path; int name; } ;
typedef TYPE_1__ git_worktree ;
struct TYPE_7__ {int repo; int worktree; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_5__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int ,int ) ;
 int FUNC_5 (TYPE_1__**,int ) ;

void FUNC_6(void)
{
 git_worktree *VAR_2, *VAR_3;

 FUNC_2(FUNC_5(&VAR_2, VAR_1.worktree));
 FUNC_2(FUNC_4(&VAR_3, VAR_1.repo, VAR_0));

 FUNC_1(VAR_2->name, VAR_3->name);
 FUNC_1(VAR_2->gitdir_path, VAR_3->gitdir_path);
 FUNC_1(VAR_2->gitlink_path, VAR_3->gitlink_path);
 FUNC_1(VAR_2->parent_path, VAR_3->parent_path);
 FUNC_1(VAR_2->commondir_path, VAR_3->commondir_path);
 FUNC_0(VAR_2->locked, VAR_3->locked);

 FUNC_3(VAR_2);
 FUNC_3(VAR_3);
}
