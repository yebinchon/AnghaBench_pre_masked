
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int fixed_ctr_ctrl; int global_status; int global_ctrl; int global_ovf_ctrl; int* counter_bitmask; } ;
struct kvm_pmc {int eventsel; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,int,int ) ;
 int FUNC_2 (struct kvm_pmc*) ;
 struct kvm_pmu* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_4, u32 VAR_5, u64 *VAR_6)
{
 struct kvm_pmu *VAR_7 = FUNC_3(VAR_4);
 struct kvm_pmc *VAR_8;

 switch (VAR_5) {
 case 131:
  *VAR_6 = VAR_7->fixed_ctr_ctrl;
  return 0;
 case 128:
  *VAR_6 = VAR_7->global_status;
  return 0;
 case 130:
  *VAR_6 = VAR_7->global_ctrl;
  return 0;
 case 129:
  *VAR_6 = VAR_7->global_ovf_ctrl;
  return 0;
 default:
  if ((VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_2))) {
   u64 VAR_9 = FUNC_2(VAR_8);
   *VAR_6 = VAR_9 & VAR_7->counter_bitmask[VAR_1];
   return 0;
  } else if ((VAR_8 = FUNC_0(VAR_7, VAR_5))) {
   u64 VAR_10 = FUNC_2(VAR_8);
   *VAR_6 = VAR_10 & VAR_7->counter_bitmask[VAR_0];
   return 0;
  } else if ((VAR_8 = FUNC_1(VAR_7, VAR_5, VAR_3))) {
   *VAR_6 = VAR_8->eventsel;
   return 0;
  }
 }

 return 1;
}
