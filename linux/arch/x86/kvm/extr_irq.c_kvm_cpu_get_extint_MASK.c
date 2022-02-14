
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending_external_vector; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  if (FUNC_0(VAR_0->kvm)) {
   int VAR_1 = VAR_0->arch.pending_external_vector;

   VAR_0->arch.pending_external_vector = -1;
   return VAR_1;
  } else
   return FUNC_2(VAR_0->kvm);
 } else
  return -1;
}
