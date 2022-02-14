
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {TYPE_2__* hsave; } ;
struct vcpu_svm {TYPE_3__ nested; } ;
struct TYPE_8__ {int tsc_offset; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_5__ {int tsc_offset; } ;
struct TYPE_6__ {TYPE_1__ control; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_2(struct kvm_vcpu *VAR_0)
{
 struct vcpu_svm *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_0))
  return VAR_1->nested.hsave->control.tsc_offset;

 return VAR_0->arch.tsc_offset;
}
