
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct msr_data {int data; int host_initiated; } ;
struct kvm_vcpu {int dummy; } ;
typedef enum lapic_mode { ____Placeholder_lapic_mode } lapic_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 unsigned long long FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;

int FUNC_5(struct kvm_vcpu *VAR_6, struct msr_data *VAR_7)
{
 enum lapic_mode VAR_8 = FUNC_3(VAR_6);
 enum lapic_mode VAR_9 = FUNC_2(VAR_7->data);
 u64 VAR_10 = ((~0ULL) << FUNC_0(VAR_6)) | 0x2ff |
  (FUNC_1(VAR_6, VAR_5) ? 0 : VAR_4);

 if ((VAR_7->data & VAR_10) != 0 || VAR_9 == VAR_1)
  return 1;
 if (!VAR_7->host_initiated) {
  if (VAR_8 == VAR_2 && VAR_9 == VAR_3)
   return 1;
  if (VAR_8 == VAR_0 && VAR_9 == VAR_2)
   return 1;
 }

 FUNC_4(VAR_6, VAR_7->data);
 return 0;
}
