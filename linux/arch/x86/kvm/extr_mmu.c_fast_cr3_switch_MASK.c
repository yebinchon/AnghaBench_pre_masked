
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union kvm_mmu_page_role {int dummy; } kvm_mmu_page_role ;
struct TYPE_3__ {struct kvm_mmu* mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mmu {scalar_t__ shadow_root_level; scalar_t__ root_level; int root_hpa; } ;
typedef int gpa_t ;
struct TYPE_4__ {int (* tlb_flush ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int,union kvm_mmu_page_role) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static bool FUNC_7(struct kvm_vcpu *VAR_6, gpa_t VAR_7,
       union kvm_mmu_page_role VAR_8,
       bool VAR_9)
{
 struct kvm_mmu *VAR_10 = VAR_6->arch.mmu;






 if (VAR_10->shadow_root_level >= VAR_4 &&
     VAR_10->root_level >= VAR_4) {
  if (FUNC_3(VAR_6, VAR_7 >> VAR_3))
   return 0;

  if (FUNC_1(VAR_6, VAR_7, VAR_8)) {







   FUNC_2(VAR_0, VAR_6);
   if (!VAR_9) {
    FUNC_2(VAR_1, VAR_6);
    VAR_5->tlb_flush(VAR_6, 1);
   }
   FUNC_6(VAR_6, VAR_2);

   FUNC_0(
    FUNC_4(VAR_10->root_hpa));

   return 1;
  }
 }

 return 0;
}
