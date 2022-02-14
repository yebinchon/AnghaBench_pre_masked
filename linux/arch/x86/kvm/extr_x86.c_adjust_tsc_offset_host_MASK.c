
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ tsc_scaling_ratio; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_1, s64 VAR_2)
{
 if (VAR_1->arch.tsc_scaling_ratio != VAR_0)
  FUNC_0(VAR_2 < 0);
 VAR_2 = FUNC_2(VAR_1, (u64) VAR_2);
 FUNC_1(VAR_1, VAR_2);
}
