
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int execonly; } ;
struct TYPE_11__ {int gpte_is_8_bytes; int direct; int ad_disabled; int guest_mode; int cr0_wp; int smap_andnot_wp; int access; int level; int smm; } ;
union kvm_mmu_role {TYPE_6__ ext; TYPE_5__ base; int member_0; } ;
struct TYPE_7__ {int smm; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
struct TYPE_9__ {TYPE_2__ mmu_role; } ;
struct TYPE_10__ {TYPE_3__ root_mmu; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static union kvm_mmu_role
FUNC_1(struct kvm_vcpu *VAR_2, bool VAR_3,
       bool VAR_4)
{
 union kvm_mmu_role VAR_5 = {0};


 VAR_5.base.smm = VAR_2->arch.root_mmu.mmu_role.base.smm;

 VAR_5.base.level = VAR_1;
 VAR_5.base.gpte_is_8_bytes = 1;
 VAR_5.base.direct = 0;
 VAR_5.base.ad_disabled = !VAR_3;
 VAR_5.base.guest_mode = 1;
 VAR_5.base.access = VAR_0;





 VAR_5.base.cr0_wp = 1;
 VAR_5.base.smap_andnot_wp = 1;

 VAR_5.ext = FUNC_0(VAR_2);
 VAR_5.ext.execonly = VAR_4;

 return VAR_5;
}
