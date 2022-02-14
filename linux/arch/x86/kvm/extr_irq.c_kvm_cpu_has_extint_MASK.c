
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_5__ {TYPE_1__* vpic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {int output; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 u8 VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  if (FUNC_0(VAR_0->kvm))
   return FUNC_2(VAR_0);
  else
   return VAR_0->kvm->arch.vpic->output;
 } else
  return 0;
}
