
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vmcs12 {int eptp_list_address; int ept_pointer; } ;
struct TYPE_6__ {struct kvm_mmu* walk_mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int ad_disabled; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct kvm_mmu {int ept_ad; TYPE_2__ mmu_role; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int,int*,int,int) ;
 int FUNC_4 (struct vmcs12*) ;
 int FUNC_5 (struct vmcs12*) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_3,
         struct vmcs12 *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_3);
 u64 VAR_6;
 bool VAR_7;
 struct kvm_mmu *VAR_8 = VAR_3->arch.walk_mmu;

 if (!FUNC_5(VAR_4) ||
     !FUNC_4(VAR_4))
  return 1;

 if (VAR_5 >= VAR_1)
  return 1;


 if (FUNC_3(VAR_3, VAR_4->eptp_list_address >> VAR_0,
         &VAR_6, VAR_5 * 8, 8))
  return 1;

 VAR_7 = !!(VAR_6 & VAR_2);





 if (VAR_4->ept_pointer != VAR_6) {
  if (!FUNC_6(VAR_3, VAR_6))
   return 1;

  FUNC_1(VAR_3);
  VAR_8->ept_ad = VAR_7;
  VAR_8->mmu_role.base.ad_disabled = !VAR_7;
  VAR_4->ept_pointer = VAR_6;





  FUNC_0(VAR_3);
 }

 return 0;
}
