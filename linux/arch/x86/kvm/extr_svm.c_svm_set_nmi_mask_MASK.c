
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
 int VAR_1 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 int FUNC_1 (struct vcpu_svm*,int ) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2, bool VAR_3)
{
 struct vcpu_svm *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3) {
  VAR_4->vcpu.arch.hflags |= VAR_0;
  FUNC_1(VAR_4, VAR_1);
 } else {
  VAR_4->vcpu.arch.hflags &= ~VAR_0;
  FUNC_0(VAR_4, VAR_1);
 }
}
