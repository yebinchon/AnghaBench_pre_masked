
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ad_disabled; int direct; int gpte_is_8_bytes; int level; } ;
union kvm_mmu_role {TYPE_1__ base; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int (* get_tdp_level ) (struct kvm_vcpu*) ;} ;


 union kvm_mmu_role FUNC_0 (struct kvm_vcpu*,int) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static union kvm_mmu_role
FUNC_2(struct kvm_vcpu *VAR_2, bool VAR_3)
{
 union kvm_mmu_role VAR_4 = FUNC_0(VAR_2, VAR_3);

 VAR_4.base.ad_disabled = (VAR_1 == 0);
 VAR_4.base.level = VAR_0->get_tdp_level(VAR_2);
 VAR_4.base.direct = 1;
 VAR_4.base.gpte_is_8_bytes = 1;

 return VAR_4;
}
