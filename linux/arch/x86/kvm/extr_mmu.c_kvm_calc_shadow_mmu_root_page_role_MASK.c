
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int smep_andnot_wp; int smap_andnot_wp; int direct; int gpte_is_8_bytes; int level; } ;
struct TYPE_3__ {scalar_t__ cr4_smap; scalar_t__ cr4_smep; } ;
union kvm_mmu_role {TYPE_2__ base; TYPE_1__ ext; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 union kvm_mmu_role FUNC_5 (struct kvm_vcpu*,int) ;

__attribute__((used)) static union kvm_mmu_role
FUNC_6(struct kvm_vcpu *VAR_3, bool VAR_4)
{
 union kvm_mmu_role VAR_5 = FUNC_5(VAR_3, VAR_4);

 VAR_5.base.smep_andnot_wp = VAR_5.ext.cr4_smep &&
  !FUNC_4(VAR_3);
 VAR_5.base.smap_andnot_wp = VAR_5.ext.cr4_smap &&
  !FUNC_4(VAR_3);
 VAR_5.base.direct = !FUNC_3(VAR_3);
 VAR_5.base.gpte_is_8_bytes = !!FUNC_2(VAR_3);

 if (!FUNC_1(VAR_3))
  VAR_5.base.level = VAR_0;
 else if (FUNC_0(VAR_3))
  VAR_5.base.level = VAR_2;
 else
  VAR_5.base.level = VAR_1;

 return VAR_5;
}
