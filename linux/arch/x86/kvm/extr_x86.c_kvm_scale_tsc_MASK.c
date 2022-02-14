
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ tsc_scaling_ratio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

u64 FUNC_1(struct kvm_vcpu *VAR_1, u64 VAR_2)
{
 u64 VAR_3 = VAR_2;
 u64 VAR_4 = VAR_1->arch.tsc_scaling_ratio;

 if (VAR_4 != VAR_0)
  VAR_3 = FUNC_0(VAR_4, VAR_2);

 return VAR_3;
}
