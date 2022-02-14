
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int gpa_available; TYPE_1__* mmu; int gpa_val; } ;
struct kvm_vcpu {int kvm; TYPE_2__ arch; } ;
typedef int gva_t ;
struct TYPE_6__ {int (* need_emulation_on_page_fault ) (struct kvm_vcpu*) ;} ;
struct TYPE_4__ {int direct_map; int (* page_fault ) (struct kvm_vcpu*,int ,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_3__* VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct kvm_vcpu*,int ,int) ;
 int FUNC_7 (struct kvm_vcpu*,int ,int ,int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct kvm_vcpu*,int ,int,void*,int) ;

int FUNC_11(struct kvm_vcpu *VAR_7, gva_t VAR_8, u64 VAR_9,
         void *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13 = 0;
 bool VAR_14 = VAR_7->arch.mmu->direct_map;


 if (VAR_7->arch.mmu->direct_map) {
  VAR_7->arch.gpa_available = 1;
  VAR_7->arch.gpa_val = VAR_8;
 }

 VAR_12 = VAR_4;
 if (FUNC_9(VAR_9 & VAR_2)) {
  VAR_12 = FUNC_2(VAR_7, VAR_8, VAR_14);
  if (VAR_12 == VAR_3)
   goto emulate;
 }

 if (VAR_12 == VAR_4) {
  VAR_12 = VAR_7->arch.mmu->page_fault(VAR_7, VAR_8,
            FUNC_5(VAR_9),
            0);
  FUNC_0(VAR_12 == VAR_4);
 }

 if (VAR_12 == VAR_5)
  return 1;
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_7->arch.mmu->direct_map &&
     (VAR_9 & VAR_1) == VAR_1) {
  FUNC_4(VAR_7->kvm, FUNC_1(VAR_8));
  return 1;
 }
 if (!FUNC_6(VAR_7, VAR_8, VAR_14) && !FUNC_3(VAR_7))
  VAR_13 = VAR_0;
emulate:







 if (FUNC_9(VAR_10 && !VAR_11)) {
  if (!VAR_6->need_emulation_on_page_fault(VAR_7))
   return 1;
 }

 return FUNC_10(VAR_7, VAR_8, VAR_13, VAR_10,
           VAR_11);
}
