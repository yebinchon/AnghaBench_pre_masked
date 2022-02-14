
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_page_track_notifier_head {int track_notifier_list; int track_srcu; } ;
struct TYPE_2__ {struct kvm_page_track_notifier_head track_notifier_head; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct kvm *VAR_0)
{
 struct kvm_page_track_notifier_head *VAR_1;

 VAR_1 = &VAR_0->arch.track_notifier_head;
 FUNC_1(&VAR_1->track_srcu);
 FUNC_0(&VAR_1->track_notifier_list);
}
