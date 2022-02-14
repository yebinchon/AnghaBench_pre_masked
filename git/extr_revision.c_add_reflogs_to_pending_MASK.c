
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int single_worktree; } ;
struct all_refs_cb {unsigned int all_flags; int * wt; struct rev_info* all_revs; } ;


 int FUNC_0 (struct all_refs_cb*) ;
 int FUNC_1 (int ,struct all_refs_cb*) ;
 int VAR_0 ;

void FUNC_2(struct rev_info *VAR_1, unsigned VAR_2)
{
 struct all_refs_cb VAR_3;

 VAR_3.all_revs = VAR_1;
 VAR_3.all_flags = VAR_2;
 VAR_3.wt = ((void*)0);
 FUNC_1(VAR_0, &VAR_3);

 if (!VAR_1->single_worktree)
  FUNC_0(&VAR_3);
}
