
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wired_tlb_used; scalar_t__ wired_tlb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0)
{

 if (VAR_0->arch.wired_tlb)
  FUNC_0(VAR_0->arch.wired_tlb, 0,
         VAR_0->arch.wired_tlb_used);
}
