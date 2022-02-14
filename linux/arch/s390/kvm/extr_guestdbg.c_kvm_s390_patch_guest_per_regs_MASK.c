
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {unsigned long* gcr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_3)
{






 if (FUNC_3(VAR_3)) {

  VAR_3->arch.sie_block->gcr[0] &= ~VAR_0;
  VAR_3->arch.sie_block->gcr[9] |= VAR_1;
  VAR_3->arch.sie_block->gcr[10] = 0;
  VAR_3->arch.sie_block->gcr[11] = -1UL;
 }

 if (FUNC_2(VAR_3)) {
  FUNC_0(VAR_3);
  FUNC_1(VAR_3);
 }


 if (VAR_3->arch.sie_block->gcr[9] & VAR_2)
  VAR_3->arch.sie_block->gcr[9] &= ~VAR_2;
}
