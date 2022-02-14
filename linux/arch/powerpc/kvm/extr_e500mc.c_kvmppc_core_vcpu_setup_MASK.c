
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {void* svr; } ;
struct TYPE_2__ {int shadow_epcr; int shadow_msrp; int cpu_type; void* pvr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 struct kvmppc_vcpu_e500* FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_9)
{
 struct kvmppc_vcpu_e500 *VAR_10 = FUNC_1(VAR_9);

 VAR_9->arch.shadow_epcr = VAR_4 | VAR_3 | VAR_5;




 VAR_9->arch.shadow_msrp = VAR_2 | VAR_1;

 VAR_9->arch.pvr = FUNC_0(VAR_7);
 VAR_10->svr = FUNC_0(VAR_8);

 VAR_9->arch.cpu_type = VAR_0;

 return 0;
}
