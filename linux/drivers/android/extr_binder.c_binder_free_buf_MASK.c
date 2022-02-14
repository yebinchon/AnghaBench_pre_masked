
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_work {int dummy; } ;
struct binder_proc {int alloc; int todo; } ;
struct binder_node {int has_async_transaction; int async_todo; struct binder_proc* proc; } ;
struct binder_buffer {struct binder_node* target_node; scalar_t__ async_transaction; TYPE_1__* transaction; } ;
struct TYPE_2__ {int * buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct binder_buffer*) ;
 struct binder_work* FUNC_2 (int *) ;
 int FUNC_3 (struct binder_work*,int *) ;
 int FUNC_4 (struct binder_proc*) ;
 int FUNC_5 (struct binder_proc*) ;
 int FUNC_6 (struct binder_node*) ;
 int FUNC_7 (struct binder_node*) ;
 int FUNC_8 (struct binder_proc*,struct binder_buffer*,int ,int) ;
 int FUNC_9 (struct binder_proc*) ;
 int FUNC_10 (struct binder_buffer*) ;

__attribute__((used)) static void
FUNC_11(struct binder_proc *VAR_0, struct binder_buffer *VAR_1)
{
 FUNC_4(VAR_0);
 if (VAR_1->transaction) {
  VAR_1->transaction->buffer = ((void*)0);
  VAR_1->transaction = ((void*)0);
 }
 FUNC_5(VAR_0);
 if (VAR_1->async_transaction && VAR_1->target_node) {
  struct binder_node *VAR_2;
  struct binder_work *VAR_3;

  VAR_2 = VAR_1->target_node;
  FUNC_6(VAR_2);
  FUNC_0(!VAR_2->has_async_transaction);
  FUNC_0(VAR_2->proc != VAR_0);
  VAR_3 = FUNC_2(
    &VAR_2->async_todo);
  if (!VAR_3) {
   VAR_2->has_async_transaction = 0;
  } else {
   FUNC_3(
     VAR_3, &VAR_0->todo);
   FUNC_9(VAR_0);
  }
  FUNC_7(VAR_2);
 }
 FUNC_10(VAR_1);
 FUNC_8(VAR_0, VAR_1, 0, 0);
 FUNC_1(&VAR_0->alloc, VAR_1);
}
