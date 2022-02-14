
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int cpuflags; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline void FUNC_1(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->arch.sie_block->cpuflags);
}
