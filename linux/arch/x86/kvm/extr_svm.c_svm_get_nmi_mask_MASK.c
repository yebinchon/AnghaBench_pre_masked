
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hflags; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct vcpu_svm {TYPE_2__ vcpu; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_0(VAR_1);

 return !!(VAR_2->vcpu.arch.hflags & VAR_0);
}
