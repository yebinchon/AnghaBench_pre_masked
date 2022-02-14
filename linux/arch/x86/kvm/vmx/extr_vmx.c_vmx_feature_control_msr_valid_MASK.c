
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int msr_ia32_feature_control_valid_bits; } ;


 TYPE_1__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_vcpu *VAR_0,
       uint64_t VAR_1)
{
 uint64_t VAR_2 = FUNC_0(VAR_0)->msr_ia32_feature_control_valid_bits;

 return !(VAR_1 & ~VAR_2);
}
