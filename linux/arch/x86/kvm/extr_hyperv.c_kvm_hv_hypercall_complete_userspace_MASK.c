
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kvm_vcpu {TYPE_4__* run; } ;
struct TYPE_5__ {int result; } ;
struct TYPE_6__ {TYPE_1__ hcall; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ hyperv; } ;


 int FUNC_0 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(VAR_0, VAR_0->run->hyperv.u.hcall.result);
}
