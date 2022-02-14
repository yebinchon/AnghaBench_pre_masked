
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* ulong ;
struct TYPE_2__ {void* queued_esr; void* queued_dear; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;

void FUNC_1(struct kvm_vcpu *VAR_1,
     ulong VAR_2, ulong VAR_3)
{
 VAR_1->arch.queued_dear = VAR_2;
 VAR_1->arch.queued_esr = VAR_3;
 FUNC_0(VAR_1, VAR_0);
}
