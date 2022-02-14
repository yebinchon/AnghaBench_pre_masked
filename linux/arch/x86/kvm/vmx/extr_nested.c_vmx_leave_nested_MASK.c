
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ nested_run_pending; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int,int ,int ) ;
 TYPE_2__* FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  FUNC_3(VAR_0)->nested.nested_run_pending = 0;
  FUNC_2(VAR_0, -1, 0, 0);
 }
 FUNC_0(VAR_0);
}
