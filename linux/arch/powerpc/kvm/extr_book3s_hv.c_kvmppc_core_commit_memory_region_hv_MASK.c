
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_userspace_memory_region {unsigned long memory_size; } ;
struct kvm_memory_slot {int flags; } ;
struct TYPE_2__ {int mmio_update; } ;
struct kvm {TYPE_1__ arch; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm*,struct kvm_memory_slot const*) ;

__attribute__((used)) static void FUNC_3(struct kvm *VAR_3,
    const struct kvm_userspace_memory_region *VAR_4,
    const struct kvm_memory_slot *VAR_5,
    const struct kvm_memory_slot *VAR_6,
    enum kvm_mr_change VAR_7)
{
 unsigned long VAR_8 = VAR_4->memory_size >> VAR_2;







 if (VAR_8)
  FUNC_0(&VAR_3->arch.mmio_update);
 if (VAR_7 == VAR_1 && FUNC_1(VAR_3) &&
     ((VAR_6->flags ^ VAR_5->flags) & VAR_0))
  FUNC_2(VAR_3, VAR_5);
}
