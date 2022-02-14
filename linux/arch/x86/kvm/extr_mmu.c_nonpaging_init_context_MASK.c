
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_mmu {int direct_map; int nx; int shadow_root_level; scalar_t__ root_level; int update_pte; int invlpg; int sync_page; int gva_to_gpa; int page_fault; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_6,
       struct kvm_mmu *VAR_7)
{
 VAR_7->page_fault = VAR_3;
 VAR_7->gva_to_gpa = VAR_1;
 VAR_7->sync_page = VAR_4;
 VAR_7->invlpg = VAR_2;
 VAR_7->update_pte = VAR_5;
 VAR_7->root_level = 0;
 VAR_7->shadow_root_level = VAR_0;
 VAR_7->direct_map = 1;
 VAR_7->nx = 0;
}
