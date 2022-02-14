
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int word; } ;
union kvm_mmu_role {scalar_t__ as_u64; TYPE_2__ base; } ;
struct TYPE_7__ {scalar_t__ as_u64; } ;
struct kvm_mmu {int nx; void* gva_to_gpa; scalar_t__ root_level; int inject_page_fault; int get_pdptr; int get_cr3; TYPE_3__ mmu_role; } ;
struct TYPE_5__ {struct kvm_mmu nested_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_8__ {int word; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 void* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 union kvm_mmu_role FUNC_5 (struct kvm_vcpu*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm_mmu*) ;
 int FUNC_8 (struct kvm_vcpu*,struct kvm_mmu*,int) ;
 int FUNC_9 (struct kvm_vcpu*,struct kvm_mmu*,int) ;

__attribute__((used)) static void FUNC_10(struct kvm_vcpu *VAR_11)
{
 union kvm_mmu_role VAR_12 = FUNC_5(VAR_11, 0);
 struct kvm_mmu *VAR_13 = &VAR_11->arch.nested_mmu;

 VAR_12.base.word &= VAR_7.word;
 if (VAR_12.as_u64 == VAR_13->mmu_role.as_u64)
  return;

 VAR_13->mmu_role.as_u64 = VAR_12.as_u64;
 VAR_13->get_cr3 = VAR_4;
 VAR_13->get_pdptr = VAR_6;
 VAR_13->inject_page_fault = VAR_5;
 if (!FUNC_4(VAR_11)) {
  VAR_13->nx = 0;
  VAR_13->root_level = 0;
  VAR_13->gva_to_gpa = VAR_8;
 } else if (FUNC_1(VAR_11)) {
  VAR_13->nx = FUNC_2(VAR_11);
  VAR_13->root_level = FUNC_0(VAR_11) ?
     VAR_3 : VAR_2;
  FUNC_6(VAR_11, VAR_13);
  VAR_13->gva_to_gpa = VAR_10;
 } else if (FUNC_3(VAR_11)) {
  VAR_13->nx = FUNC_2(VAR_11);
  VAR_13->root_level = VAR_0;
  FUNC_6(VAR_11, VAR_13);
  VAR_13->gva_to_gpa = VAR_10;
 } else {
  VAR_13->nx = 0;
  VAR_13->root_level = VAR_1;
  FUNC_6(VAR_11, VAR_13);
  VAR_13->gva_to_gpa = VAR_9;
 }

 FUNC_8(VAR_11, VAR_13, 0);
 FUNC_9(VAR_11, VAR_13, 0);
 FUNC_7(VAR_11, VAR_13);
}
