
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct flat_binder_object {scalar_t__ cookie; int handle; scalar_t__ binder; TYPE_1__ hdr; } ;
struct binder_transaction {struct binder_proc* to_proc; } ;
struct binder_thread {int pid; struct binder_proc* proc; } ;
struct binder_ref_data {int desc; int debug_id; } ;
struct binder_proc {int inner_lock; int tsk; int pid; } ;
struct binder_node {int debug_id; scalar_t__ ptr; struct binder_proc* proc; scalar_t__ cookie; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,...) ;
 struct binder_node* FUNC_3 (struct binder_proc*,int ,int,struct binder_ref_data*) ;
 int FUNC_4 (struct binder_node*,int,int ,int *) ;
 int FUNC_5 (struct binder_proc*,struct binder_node*,int,int *,struct binder_ref_data*) ;
 int FUNC_6 (struct binder_proc*) ;
 int FUNC_7 (struct binder_proc*) ;
 int FUNC_8 (struct binder_node*) ;
 int FUNC_9 (struct binder_node*) ;
 int FUNC_10 (struct binder_node*) ;
 int FUNC_11 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (struct binder_transaction*,struct binder_node*,struct binder_ref_data*) ;
 int FUNC_14 (struct binder_transaction*,struct binder_node*,struct binder_ref_data*,struct binder_ref_data*) ;

__attribute__((used)) static int FUNC_15(struct flat_binder_object *VAR_6,
       struct binder_transaction *VAR_7,
       struct binder_thread *VAR_8)
{
 struct binder_proc *VAR_9 = VAR_8->proc;
 struct binder_proc *VAR_10 = VAR_7->to_proc;
 struct binder_node *VAR_11;
 struct binder_ref_data VAR_12;
 int VAR_13 = 0;

 VAR_11 = FUNC_3(VAR_9, VAR_6->handle,
   VAR_6->hdr.type == VAR_2, &VAR_12);
 if (!VAR_11) {
  FUNC_11("%d:%d got transaction with invalid handle, %d\n",
      VAR_9->pid, VAR_8->pid, VAR_6->handle);
  return -VAR_4;
 }
 if (FUNC_12(VAR_9->tsk, VAR_10->tsk)) {
  VAR_13 = -VAR_5;
  goto done;
 }

 FUNC_8(VAR_11);
 if (VAR_11->proc == VAR_10) {
  if (VAR_6->hdr.type == VAR_2)
   VAR_6->hdr.type = VAR_1;
  else
   VAR_6->hdr.type = VAR_3;
  VAR_6->binder = VAR_11->ptr;
  VAR_6->cookie = VAR_11->cookie;
  if (VAR_11->proc)
   FUNC_6(VAR_11->proc);
  else
   FUNC_0(&VAR_11->proc->inner_lock);
  FUNC_4(VAR_11,
      VAR_6->hdr.type == VAR_1,
      0, ((void*)0));
  if (VAR_11->proc)
   FUNC_7(VAR_11->proc);
  else
   FUNC_1(&VAR_11->proc->inner_lock);
  FUNC_13(VAR_7, VAR_11, &VAR_12);
  FUNC_2(VAR_0,
        "        ref %d desc %d -> node %d u%016llx\n",
        VAR_12.debug_id, VAR_12.desc, VAR_11->debug_id,
        (u64)VAR_11->ptr);
  FUNC_9(VAR_11);
 } else {
  struct binder_ref_data VAR_14;

  FUNC_9(VAR_11);
  VAR_13 = FUNC_5(VAR_10, VAR_11,
    VAR_6->hdr.type == VAR_2,
    ((void*)0), &VAR_14);
  if (VAR_13)
   goto done;

  VAR_6->binder = 0;
  VAR_6->handle = VAR_14.desc;
  VAR_6->cookie = 0;
  FUNC_14(VAR_7, VAR_11, &VAR_12,
          &VAR_14);
  FUNC_2(VAR_0,
        "        ref %d desc %d -> ref %d desc %d (node %d)\n",
        VAR_12.debug_id, VAR_12.desc,
        VAR_14.debug_id, VAR_14.desc,
        VAR_11->debug_id);
 }
done:
 FUNC_10(VAR_11);
 return VAR_13;
}
