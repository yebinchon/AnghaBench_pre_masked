
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct binder_proc {int pid; struct binder_context* context; } ;
struct binder_node_info_for_ref {int weak_count; scalar_t__ strong_count; scalar_t__ reserved3; scalar_t__ reserved2; scalar_t__ reserved1; int handle; } ;
struct binder_node {int local_weak_refs; scalar_t__ internal_strong_refs; scalar_t__ local_strong_refs; } ;
struct binder_context {int context_mgr_node_lock; TYPE_1__* binder_context_mgr_node; } ;
typedef int __u32 ;
struct TYPE_2__ {struct binder_proc* proc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct binder_node* FUNC_0 (struct binder_proc*,int ,int,int *) ;
 int FUNC_1 (struct binder_node*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct binder_proc *VAR_2,
  struct binder_node_info_for_ref *VAR_3)
{
 struct binder_node *VAR_4;
 struct binder_context *VAR_5 = VAR_2->context;
 __u32 VAR_6 = VAR_3->handle;

 if (VAR_3->strong_count || VAR_3->weak_count || VAR_3->reserved1 ||
     VAR_3->reserved2 || VAR_3->reserved3) {
  FUNC_2("%d BINDER_GET_NODE_INFO_FOR_REF: only handle may be non-zero.",
      VAR_2->pid);
  return -VAR_0;
 }


 FUNC_3(&VAR_5->context_mgr_node_lock);
 if (!VAR_5->binder_context_mgr_node ||
  VAR_5->binder_context_mgr_node->proc != VAR_2) {
  FUNC_4(&VAR_5->context_mgr_node_lock);
  return -VAR_1;
 }
 FUNC_4(&VAR_5->context_mgr_node_lock);

 VAR_4 = FUNC_0(VAR_2, VAR_6, 1, ((void*)0));
 if (!VAR_4)
  return -VAR_0;

 VAR_3->strong_count = VAR_4->local_strong_refs +
  VAR_4->internal_strong_refs;
 VAR_3->weak_count = VAR_4->local_weak_refs;

 FUNC_1(VAR_4);

 return 0;
}
