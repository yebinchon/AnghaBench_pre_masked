
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int lctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_3)
{
 if (!(FUNC_1(VAR_3) & VAR_1))
  return;
 if (FUNC_2(VAR_3))
  FUNC_0(VAR_3, VAR_0);
 else
  VAR_3->arch.sie_block->lctl |= VAR_2;
}
