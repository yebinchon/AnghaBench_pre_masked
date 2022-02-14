
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_page_track_notifier_node {int track_flush_slot; int track_write; } ;
struct TYPE_2__ {struct kvm_page_track_notifier_node mmu_sp_tracker; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm*,struct kvm_page_track_notifier_node*) ;

void FUNC_1(struct kvm *VAR_2)
{
 struct kvm_page_track_notifier_node *VAR_3 = &VAR_2->arch.mmu_sp_tracker;

 VAR_3->track_write = VAR_1;
 VAR_3->track_flush_slot = VAR_0;
 FUNC_0(VAR_2, VAR_3);
}
