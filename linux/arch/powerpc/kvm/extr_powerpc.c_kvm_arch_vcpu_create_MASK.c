
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * wqp; } ;
struct kvm_vcpu {int wq; TYPE_1__ arch; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_1 (struct kvm*,unsigned int) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned int) ;

struct kvm_vcpu *FUNC_3(struct kvm *VAR_0, unsigned int VAR_1)
{
 struct kvm_vcpu *VAR_2;
 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!FUNC_0(VAR_2)) {
  VAR_2->arch.wqp = &VAR_2->wq;
  FUNC_2(VAR_2, VAR_1);
 }
 return VAR_2;
}
