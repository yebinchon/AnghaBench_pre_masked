
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct binder_proc {int nodes; int todo; int inner_lock; } ;
struct TYPE_3__ {int entry; } ;
struct binder_node {int debug_id; int dead_node; scalar_t__ tmp_refs; TYPE_1__ work; int rb_node; scalar_t__ local_weak_refs; scalar_t__ local_strong_refs; int refs; scalar_t__ has_weak_ref; scalar_t__ has_strong_ref; scalar_t__ internal_strong_refs; int lock; struct binder_proc* proc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (struct binder_proc*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static bool FUNC_12(struct binder_node *VAR_2,
         int VAR_3, int VAR_4)
{
 struct binder_proc *VAR_5 = VAR_2->proc;

 FUNC_1(&VAR_2->lock);
 if (VAR_5)
  FUNC_1(&VAR_5->inner_lock);
 if (VAR_3) {
  if (VAR_4)
   VAR_2->internal_strong_refs--;
  else
   VAR_2->local_strong_refs--;
  if (VAR_2->local_strong_refs || VAR_2->internal_strong_refs)
   return 0;
 } else {
  if (!VAR_4)
   VAR_2->local_weak_refs--;
  if (VAR_2->local_weak_refs || VAR_2->tmp_refs ||
    !FUNC_7(&VAR_2->refs))
   return 0;
 }

 if (VAR_5 && (VAR_2->has_strong_ref || VAR_2->has_weak_ref)) {
  if (FUNC_8(&VAR_2->work.entry)) {
   FUNC_4(&VAR_2->work, &VAR_5->todo);
   FUNC_5(VAR_5);
  }
 } else {
  if (FUNC_7(&VAR_2->refs) && !VAR_2->local_strong_refs &&
      !VAR_2->local_weak_refs && !VAR_2->tmp_refs) {
   if (VAR_5) {
    FUNC_3(&VAR_2->work);
    FUNC_9(&VAR_2->rb_node, &VAR_5->nodes);
    FUNC_2(VAR_0,
          "refless node %d deleted\n",
          VAR_2->debug_id);
   } else {
    FUNC_0(!FUNC_8(&VAR_2->work.entry));
    FUNC_10(&VAR_1);




    if (VAR_2->tmp_refs) {
     FUNC_11(&VAR_1);
     return 0;
    }
    FUNC_6(&VAR_2->dead_node);
    FUNC_11(&VAR_1);
    FUNC_2(VAR_0,
          "dead node %d deleted\n",
          VAR_2->debug_id);
   }
   return 1;
  }
 }
 return 0;
}
