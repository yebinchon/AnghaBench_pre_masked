
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int root_level; int shadow_root_level; int direct_map; int update_pte; int invlpg; int sync_page; int gva_to_gpa; int page_fault; int nx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_mmu*,int) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_5,
      struct kvm_mmu *VAR_6,
      int VAR_7)
{
 VAR_6->nx = FUNC_1(VAR_5);
 VAR_6->root_level = VAR_7;

 FUNC_3(VAR_5, VAR_6);
 FUNC_5(VAR_5, VAR_6, 0);
 FUNC_6(VAR_5, VAR_6, 0);
 FUNC_4(VAR_5, VAR_6);

 FUNC_0(!FUNC_2(VAR_5));
 VAR_6->page_fault = VAR_2;
 VAR_6->gva_to_gpa = VAR_0;
 VAR_6->sync_page = VAR_3;
 VAR_6->invlpg = VAR_1;
 VAR_6->update_pte = VAR_4;
 VAR_6->shadow_root_level = VAR_7;
 VAR_6->direct_map = 0;
}
