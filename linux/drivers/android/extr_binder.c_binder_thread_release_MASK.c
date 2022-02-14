
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_transaction {int lock; struct binder_transaction* from_parent; struct binder_thread* from; struct binder_transaction* to_parent; TYPE_1__* buffer; struct binder_thread* to_thread; int * to_proc; int debug_id; } ;
struct binder_thread {int is_dead; int looper; int todo; int proc; int wait; int pid; struct binder_transaction* transaction_stack; int rb_node; int tmp_ref; } ;
struct binder_proc {int pid; int threads; int tmp_ref; } ;
struct TYPE_2__ {int * transaction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int ,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct binder_proc*,int *) ;
 int FUNC_8 (struct binder_transaction*,int ) ;
 int FUNC_9 (struct binder_thread*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int) ;

__attribute__((used)) static int FUNC_16(struct binder_proc *VAR_5,
     struct binder_thread *VAR_6)
{
 struct binder_transaction *VAR_7;
 struct binder_transaction *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 struct binder_transaction *VAR_10 = ((void*)0);

 FUNC_5(VAR_6->proc);






 VAR_5->tmp_ref++;




 FUNC_3(&VAR_6->tmp_ref);
 FUNC_10(&VAR_6->rb_node, &VAR_5->threads);
 VAR_7 = VAR_6->transaction_stack;
 if (VAR_7) {
  FUNC_11(&VAR_7->lock);
  if (VAR_7->to_thread == VAR_6)
   VAR_8 = VAR_7;
 } else {
  FUNC_1(&VAR_7->lock);
 }
 VAR_6->is_dead = 1;

 while (VAR_7) {
  VAR_10 = VAR_7;
  VAR_9++;
  FUNC_4(VAR_0,
        "release %d:%d transaction %d %s, still active\n",
         VAR_5->pid, VAR_6->pid,
        VAR_7->debug_id,
        (VAR_7->to_thread == VAR_6) ? "in" : "out");

  if (VAR_7->to_thread == VAR_6) {
   VAR_7->to_proc = ((void*)0);
   VAR_7->to_thread = ((void*)0);
   if (VAR_7->buffer) {
    VAR_7->buffer->transaction = ((void*)0);
    VAR_7->buffer = ((void*)0);
   }
   VAR_7 = VAR_7->to_parent;
  } else if (VAR_7->from == VAR_6) {
   VAR_7->from = ((void*)0);
   VAR_7 = VAR_7->from_parent;
  } else
   FUNC_0();
  FUNC_12(&VAR_10->lock);
  if (VAR_7)
   FUNC_11(&VAR_7->lock);
  else
   FUNC_1(&VAR_7->lock);
 }

 FUNC_2(&VAR_7->lock);







 if ((VAR_6->looper & VAR_1) &&
     FUNC_14(&VAR_6->wait)) {
  FUNC_15(&VAR_6->wait, VAR_3 | VAR_4);
 }

 FUNC_6(VAR_6->proc);







 if (VAR_6->looper & VAR_1)
  FUNC_13();

 if (VAR_8)
  FUNC_8(VAR_8, VAR_2);
 FUNC_7(VAR_5, &VAR_6->todo);
 FUNC_9(VAR_6);
 return VAR_9;
}
