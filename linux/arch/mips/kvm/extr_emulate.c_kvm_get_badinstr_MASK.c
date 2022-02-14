
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int host_cp0_badinstr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct kvm_vcpu*,int *) ;

int FUNC_1(u32 *VAR_1, struct kvm_vcpu *VAR_2, u32 *VAR_3)
{
 if (VAR_0) {
  *VAR_3 = VAR_2->arch.host_cp0_badinstr;
  return 0;
 } else {
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 }
}
