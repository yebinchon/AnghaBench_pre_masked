
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msr_data {int data; int index; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int reserved_bits; } ;
struct kvm_pmc {int eventsel; int counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int ,int ) ;
 scalar_t__ FUNC_1 (struct kvm_pmc*) ;
 int FUNC_2 (struct kvm_pmc*,int) ;
 struct kvm_pmu* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2, struct msr_data *VAR_3)
{
 struct kvm_pmu *VAR_4 = FUNC_3(VAR_2);
 struct kvm_pmc *VAR_5;
 u32 VAR_6 = VAR_3->index;
 u64 VAR_7 = VAR_3->data;


 VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_0);
 if (VAR_5) {
  VAR_5->counter += VAR_7 - FUNC_1(VAR_5);
  return 0;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_6, VAR_1);
 if (VAR_5) {
  if (VAR_7 == VAR_5->eventsel)
   return 0;
  if (!(VAR_7 & VAR_4->reserved_bits)) {
   FUNC_2(VAR_5, VAR_7);
   return 0;
  }
 }

 return 1;
}
