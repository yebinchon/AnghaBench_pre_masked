
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_6__ {TYPE_2__* vmcb; } ;
struct TYPE_4__ {int dr6; } ;
struct TYPE_5__ {TYPE_1__ save; } ;


 TYPE_3__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static u64 FUNC_1(struct kvm_vcpu *VAR_0)
{
 return FUNC_0(VAR_0)->vmcb->save.dr6;
}
