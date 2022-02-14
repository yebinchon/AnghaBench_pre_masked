
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;
struct TYPE_2__ {int (* enable_log_dirty_pt_masked ) (struct kvm*,struct kvm_memory_slot*,int ,unsigned long) ;} ;


 int FUNC_0 (struct kvm*,struct kvm_memory_slot*,int ,unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct kvm*,struct kvm_memory_slot*,int ,unsigned long) ;

void FUNC_2(struct kvm *VAR_1,
    struct kvm_memory_slot *VAR_2,
    gfn_t VAR_3, unsigned long VAR_4)
{
 if (VAR_0->enable_log_dirty_pt_masked)
  VAR_0->enable_log_dirty_pt_masked(VAR_1, VAR_2, VAR_3,
    VAR_4);
 else
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
