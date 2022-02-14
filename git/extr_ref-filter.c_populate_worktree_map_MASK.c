
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {scalar_t__ head_ref; } ;
struct ref_to_worktree_entry {int ent; struct worktree* wt; } ;
struct hashmap {int dummy; } ;


 int FUNC_0 (struct hashmap*,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct ref_to_worktree_entry* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hashmap *VAR_0, struct worktree **VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  if (VAR_1[VAR_2]->head_ref) {
   struct ref_to_worktree_entry *VAR_3;
   VAR_3 = FUNC_3(sizeof(*VAR_3));
   VAR_3->wt = VAR_1[VAR_2];
   FUNC_1(&VAR_3->ent,
     FUNC_2(VAR_1[VAR_2]->head_ref));

   FUNC_0(VAR_0, &VAR_3->ent);
  }
 }
}
