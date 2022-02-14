
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct worktree {scalar_t__ is_current; } ;
struct rev_info {scalar_t__ single_worktree; TYPE_1__* repo; } ;
struct index_state {int * member_0; } ;
struct TYPE_2__ {struct index_state* index; } ;


 int FUNC_0 (struct index_state*) ;
 int FUNC_1 (struct rev_info*,struct index_state*,unsigned int) ;
 int FUNC_2 (struct worktree**) ;
 int FUNC_3 (struct worktree*) ;
 struct worktree** FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct index_state*,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct worktree*,char*) ;

void FUNC_8(struct rev_info *VAR_0, unsigned int VAR_1)
{
 struct worktree **VAR_2, **VAR_3;

 FUNC_6(VAR_0->repo);
 FUNC_1(VAR_0, VAR_0->repo->index, VAR_1);

 if (VAR_0->single_worktree)
  return;

 VAR_2 = FUNC_4(0);
 for (VAR_3 = VAR_2; *VAR_3; VAR_3++) {
  struct worktree *VAR_4 = *VAR_3;
  struct index_state VAR_5 = { ((void*)0) };

  if (VAR_4->is_current)
   continue;

  if (FUNC_5(&VAR_5,
        FUNC_7(VAR_4, "index"),
        FUNC_3(VAR_4)) > 0)
   FUNC_1(VAR_0, &VAR_5, VAR_1);
  FUNC_0(&VAR_5);
 }
 FUNC_2(VAR_2);
}
