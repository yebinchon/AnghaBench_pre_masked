
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {scalar_t__ nested_run_pending; } ;
struct TYPE_6__ {TYPE_2__* loaded_vmcs; TYPE_1__ nested; } ;
struct TYPE_5__ {scalar_t__ soft_vnmi_blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_5)
{
 if (FUNC_0(VAR_5)->nested.nested_run_pending)
  return 0;

 if (!VAR_4 &&
     FUNC_0(VAR_5)->loaded_vmcs->soft_vnmi_blocked)
  return 0;

 return !(FUNC_1(VAR_0) &
    (VAR_1 | VAR_3
     | VAR_2));
}
