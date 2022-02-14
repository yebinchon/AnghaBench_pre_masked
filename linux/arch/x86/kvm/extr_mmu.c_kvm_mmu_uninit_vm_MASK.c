
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_page_track_notifier_node {int dummy; } ;
struct TYPE_2__ {struct kvm_page_track_notifier_node mmu_sp_tracker; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm*,struct kvm_page_track_notifier_node*) ;

void FUNC_1(struct kvm *VAR_0)
{
 struct kvm_page_track_notifier_node *VAR_1 = &VAR_0->arch.mmu_sp_tracker;

 FUNC_0(VAR_0, VAR_1);
}
