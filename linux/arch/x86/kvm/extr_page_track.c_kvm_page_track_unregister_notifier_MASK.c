
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_page_track_notifier_node {int node; } ;
struct kvm_page_track_notifier_head {int track_srcu; } ;
struct TYPE_2__ {struct kvm_page_track_notifier_head track_notifier_head; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct kvm *VAR_0,
       struct kvm_page_track_notifier_node *VAR_1)
{
 struct kvm_page_track_notifier_head *VAR_2;

 VAR_2 = &VAR_0->arch.track_notifier_head;

 FUNC_1(&VAR_0->mmu_lock);
 FUNC_0(&VAR_1->node);
 FUNC_2(&VAR_0->mmu_lock);
 FUNC_3(&VAR_2->track_srcu);
}
