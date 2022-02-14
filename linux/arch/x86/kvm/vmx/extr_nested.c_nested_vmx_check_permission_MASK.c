
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int vmxon; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 TYPE_2__* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1)
{
 if (!FUNC_2(VAR_1)->nested.vmxon) {
  FUNC_1(VAR_1, VAR_0);
  return 0;
 }

 if (FUNC_3(VAR_1)) {
  FUNC_0(VAR_1, 0);
  return 0;
 }

 return 1;
}
