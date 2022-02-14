
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_userspace_memory_region {int memory_size; int guest_phys_addr; int userspace_addr; } ;
struct kvm_memory_slot {int base_gfn; int npages; } ;
struct TYPE_2__ {int gmap; } ;
struct kvm {TYPE_1__ arch; } ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;






 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct kvm *VAR_1,
    const struct kvm_userspace_memory_region *VAR_2,
    const struct kvm_memory_slot *VAR_3,
    const struct kvm_memory_slot *VAR_4,
    enum kvm_mr_change VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_5) {
 case 130:
  VAR_6 = FUNC_2(VAR_1->arch.gmap, VAR_3->base_gfn * VAR_0,
     VAR_3->npages * VAR_0);
  break;
 case 128:
  VAR_6 = FUNC_2(VAR_1->arch.gmap, VAR_3->base_gfn * VAR_0,
     VAR_3->npages * VAR_0);
  if (VAR_6)
   break;

 case 131:
  VAR_6 = FUNC_1(VAR_1->arch.gmap, VAR_2->userspace_addr,
          VAR_2->guest_phys_addr, VAR_2->memory_size);
  break;
 case 129:
  break;
 default:
  FUNC_0(1, "Unknown KVM MR CHANGE: %d\n", VAR_5);
 }
 if (VAR_6)
  FUNC_3("failed to commit memory region\n");
 return;
}
