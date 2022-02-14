
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; int guest_debug; } ;
struct TYPE_6__ {int as; } ;
struct TYPE_4__ {scalar_t__ iprcc; int gpsw; int peraddr; int perc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 TYPE_3__ FUNC_6 (int ) ;

int FUNC_7(struct kvm_vcpu *VAR_4)
{
 int VAR_5, VAR_6;

 if (FUNC_0(VAR_4, VAR_4->arch.sie_block->perc,
    VAR_4->arch.sie_block->peraddr))
  VAR_4->guest_debug |= VAR_0;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;







 if (VAR_4->arch.sie_block->iprcc == VAR_1) {
  VAR_4->arch.sie_block->iprcc = 0;
  VAR_6 = FUNC_6(VAR_4->arch.sie_block->gpsw).as;






  if (((VAR_6 == VAR_2) ^ FUNC_3(VAR_4)) &&
      (FUNC_5(VAR_4) || FUNC_2(VAR_4)))
   VAR_4->arch.sie_block->iprcc = VAR_1;





  if (VAR_6 == VAR_3 && !FUNC_3(VAR_4) &&
      (FUNC_5(VAR_4) || FUNC_4(VAR_4)))
   VAR_4->arch.sie_block->iprcc = VAR_1;
 }
 return 0;
}
