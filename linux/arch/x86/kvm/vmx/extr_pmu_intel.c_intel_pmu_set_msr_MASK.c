
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msr_data {int index; int data; int host_initiated; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int fixed_ctr_ctrl; int global_status; int global_ctrl; int global_ctrl_mask; int global_ovf_ctrl_mask; int global_ovf_ctrl; int reserved_bits; } ;
struct kvm_pmc {int counter; int eventsel; } ;
typedef int s32 ;






 int VAR_0 ;
 int VAR_1 ;
 struct kvm_pmc* FUNC_0 (struct kvm_pmu*,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,int,int ) ;
 int FUNC_2 (struct kvm_pmu*,int) ;
 int FUNC_3 (struct kvm_pmu*,int) ;
 int FUNC_4 (struct kvm_pmc*,int) ;
 struct kvm_pmu* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2, struct msr_data *VAR_3)
{
 struct kvm_pmu *VAR_4 = FUNC_5(VAR_2);
 struct kvm_pmc *VAR_5;
 u32 VAR_6 = VAR_3->index;
 u64 VAR_7 = VAR_3->data;

 switch (VAR_6) {
 case 131:
  if (VAR_4->fixed_ctr_ctrl == VAR_7)
   return 0;
  if (!(VAR_7 & 0xfffffffffffff444ull)) {
   FUNC_3(VAR_4, VAR_7);
   return 0;
  }
  break;
 case 128:
  if (VAR_3->host_initiated) {
   VAR_4->global_status = VAR_7;
   return 0;
  }
  break;
 case 130:
  if (VAR_4->global_ctrl == VAR_7)
   return 0;
  if (!(VAR_7 & VAR_4->global_ctrl_mask)) {
   FUNC_2(VAR_4, VAR_7);
   return 0;
  }
  break;
 case 129:
  if (!(VAR_7 & VAR_4->global_ovf_ctrl_mask)) {
   if (!VAR_3->host_initiated)
    VAR_4->global_status &= ~VAR_7;
   VAR_4->global_ovf_ctrl = VAR_7;
   return 0;
  }
  break;
 default:
  if ((VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_0))) {
   if (VAR_3->host_initiated)
    VAR_5->counter = VAR_7;
   else
    VAR_5->counter = (s32)VAR_7;
   return 0;
  } else if ((VAR_5 = FUNC_0(VAR_4, VAR_6))) {
   VAR_5->counter = VAR_7;
   return 0;
  } else if ((VAR_5 = FUNC_1(VAR_4, VAR_6, VAR_1))) {
   if (VAR_7 == VAR_5->eventsel)
    return 0;
   if (!(VAR_7 & VAR_4->reserved_bits)) {
    FUNC_4(VAR_5, VAR_7);
    return 0;
   }
  }
 }

 return 1;
}
