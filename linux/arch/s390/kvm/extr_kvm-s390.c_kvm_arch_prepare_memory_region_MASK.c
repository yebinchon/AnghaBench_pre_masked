
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_userspace_memory_region {int userspace_addr; int memory_size; scalar_t__ guest_phys_addr; } ;
struct kvm_memory_slot {int dummy; } ;
struct TYPE_2__ {scalar_t__ mem_limit; } ;
struct kvm {TYPE_1__ arch; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;


 int VAR_0 ;

int FUNC_0(struct kvm *VAR_1,
       struct kvm_memory_slot *VAR_2,
       const struct kvm_userspace_memory_region *VAR_3,
       enum kvm_mr_change VAR_4)
{





 if (VAR_3->userspace_addr & 0xffffful)
  return -VAR_0;

 if (VAR_3->memory_size & 0xffffful)
  return -VAR_0;

 if (VAR_3->guest_phys_addr + VAR_3->memory_size > VAR_1->arch.mem_limit)
  return -VAR_0;

 return 0;
}
