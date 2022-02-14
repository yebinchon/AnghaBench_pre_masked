
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union kvm_mmu_extended_role {int cr0_pg; int cr4_pae; int cr4_smep; int cr4_smap; int cr4_pse; int cr4_pke; int cr4_la57; int valid; int maxphyaddr; int member_0; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static union kvm_mmu_extended_role FUNC_5(struct kvm_vcpu *VAR_4)
{
 union kvm_mmu_extended_role VAR_5 = {0};

 VAR_5.cr0_pg = !!FUNC_2(VAR_4);
 VAR_5.cr4_pae = !!FUNC_1(VAR_4);
 VAR_5.cr4_smep = !!FUNC_4(VAR_4, VAR_3);
 VAR_5.cr4_smap = !!FUNC_4(VAR_4, VAR_2);
 VAR_5.cr4_pse = !!FUNC_3(VAR_4);
 VAR_5.cr4_pke = !!FUNC_4(VAR_4, VAR_1);
 VAR_5.cr4_la57 = !!FUNC_4(VAR_4, VAR_0);
 VAR_5.maxphyaddr = FUNC_0(VAR_4);

 VAR_5.valid = 1;

 return VAR_5;
}
