
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct flat_binder_object {scalar_t__ cookie; int handle; scalar_t__ binder; TYPE_1__ hdr; } ;
struct binder_transaction {struct binder_proc* to_proc; } ;
struct binder_thread {int todo; int pid; struct binder_proc* proc; } ;
struct binder_ref_data {int desc; int debug_id; } ;
struct binder_proc {int tsk; int pid; } ;
struct binder_node {scalar_t__ cookie; scalar_t__ ptr; int debug_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 struct binder_node* FUNC_1 (struct binder_proc*,scalar_t__) ;
 int FUNC_2 (struct binder_proc*,struct binder_node*,int,int *,struct binder_ref_data*) ;
 struct binder_node* FUNC_3 (struct binder_proc*,struct flat_binder_object*) ;
 int FUNC_4 (struct binder_node*) ;
 int FUNC_5 (char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct binder_transaction*,struct binder_node*,struct binder_ref_data*) ;

__attribute__((used)) static int FUNC_8(struct flat_binder_object *VAR_7,
       struct binder_transaction *VAR_8,
       struct binder_thread *VAR_9)
{
 struct binder_node *VAR_10;
 struct binder_proc *VAR_11 = VAR_9->proc;
 struct binder_proc *VAR_12 = VAR_8->to_proc;
 struct binder_ref_data VAR_13;
 int VAR_14 = 0;

 VAR_10 = FUNC_1(VAR_11, VAR_7->binder);
 if (!VAR_10) {
  VAR_10 = FUNC_3(VAR_11, VAR_7);
  if (!VAR_10)
   return -VAR_5;
 }
 if (VAR_7->cookie != VAR_10->cookie) {
  FUNC_5("%d:%d sending u%016llx node %d, cookie mismatch %016llx != %016llx\n",
      VAR_11->pid, VAR_9->pid, (u64)VAR_7->binder,
      VAR_10->debug_id, (u64)VAR_7->cookie,
      (u64)VAR_10->cookie);
  VAR_14 = -VAR_4;
  goto done;
 }
 if (FUNC_6(VAR_11->tsk, VAR_12->tsk)) {
  VAR_14 = -VAR_6;
  goto done;
 }

 VAR_14 = FUNC_2(VAR_12, VAR_10,
   VAR_7->hdr.type == VAR_1,
   &VAR_9->todo, &VAR_13);
 if (VAR_14)
  goto done;

 if (VAR_7->hdr.type == VAR_1)
  VAR_7->hdr.type = VAR_2;
 else
  VAR_7->hdr.type = VAR_3;
 VAR_7->binder = 0;
 VAR_7->handle = VAR_13.desc;
 VAR_7->cookie = 0;

 FUNC_7(VAR_8, VAR_10, &VAR_13);
 FUNC_0(VAR_0,
       "        node %d u%016llx -> ref %d desc %d\n",
       VAR_10->debug_id, (u64)VAR_10->ptr,
       VAR_13.debug_id, VAR_13.desc);
done:
 FUNC_4(VAR_10);
 return VAR_14;
}
