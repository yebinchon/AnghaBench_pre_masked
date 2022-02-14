
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {struct commit_list* commits; int prune; } ;
struct merge_simplify_state {struct commit* simplified; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {struct commit_list* next; } ;


 TYPE_1__* FUNC_0 (struct commit*,struct commit_list**) ;
 struct merge_simplify_state* FUNC_1 (struct rev_info*,struct commit*) ;
 struct commit* FUNC_2 (struct commit_list**) ;
 struct commit_list** FUNC_3 (struct rev_info*,struct commit*,struct commit_list**) ;

__attribute__((used)) static void FUNC_4(struct rev_info *VAR_0)
{
 struct commit_list *VAR_1, *VAR_2;
 struct commit_list *VAR_3, **VAR_4;
 struct commit *VAR_5;

 if (!VAR_0->prune)
  return;


 VAR_3 = ((void*)0);
 for (VAR_1 = VAR_0->commits; VAR_1; VAR_1 = VAR_2) {
  VAR_5 = VAR_1->item;
  VAR_2 = VAR_1->next;




  FUNC_0(VAR_5, &VAR_3);
 }
 while (VAR_3) {
  VAR_1 = VAR_3;
  VAR_3 = ((void*)0);
  VAR_4 = &VAR_3;
  while (VAR_1) {
   VAR_5 = FUNC_2(&VAR_1);
   VAR_4 = FUNC_3(VAR_0, VAR_5, VAR_4);
  }
 }


 VAR_1 = VAR_0->commits;
 VAR_0->commits = ((void*)0);
 VAR_4 = &VAR_0->commits;
 while (VAR_1) {
  struct merge_simplify_state *VAR_6;

  VAR_5 = FUNC_2(&VAR_1);
  VAR_6 = FUNC_1(VAR_0, VAR_5);
  if (VAR_6->simplified == VAR_5)
   VAR_4 = &FUNC_0(VAR_5, VAR_4)->next;
 }
}
