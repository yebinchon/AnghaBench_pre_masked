
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int virtual_tsc_shift; int virtual_tsc_mult; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline u64 FUNC_1(struct kvm_vcpu *VAR_0, u64 VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->arch.virtual_tsc_mult,
       VAR_0->arch.virtual_tsc_shift);
}
