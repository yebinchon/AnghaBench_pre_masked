
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int icptstatus; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_0)
{

 VAR_0->arch.sie_block->icptstatus &= ~0x02;
 FUNC_1(VAR_0, FUNC_0(VAR_0));
}
