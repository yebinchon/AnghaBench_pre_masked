
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nxe; int guest_mode; int smm; int cr0_wp; int access; } ;
union kvm_mmu_role {int ext; TYPE_1__ base; int member_0; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static union kvm_mmu_role FUNC_5(struct kvm_vcpu *VAR_1,
         bool VAR_2)
{
 union kvm_mmu_role VAR_3 = {0};

 VAR_3.base.access = VAR_0;
 VAR_3.base.nxe = !!FUNC_1(VAR_1);
 VAR_3.base.cr0_wp = FUNC_3(VAR_1);
 VAR_3.base.smm = FUNC_2(VAR_1);
 VAR_3.base.guest_mode = FUNC_0(VAR_1);

 if (VAR_2)
  return VAR_3;

 VAR_3.ext = FUNC_4(VAR_1);

 return VAR_3;
}
