
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_transaction {struct binder_thread* from; struct binder_transaction* from_parent; } ;
struct binder_thread {struct binder_transaction* transaction_stack; TYPE_1__* proc; } ;
struct TYPE_2__ {int inner_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct binder_thread *VAR_0,
        struct binder_transaction *VAR_1)
{
 FUNC_0(!VAR_0);
 FUNC_1(&VAR_0->proc->inner_lock);
 FUNC_0(VAR_0->transaction_stack != VAR_1);
 FUNC_0(VAR_0->transaction_stack->from != VAR_0);
 VAR_0->transaction_stack =
  VAR_0->transaction_stack->from_parent;
 VAR_1->from = ((void*)0);
}
