
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {void* svr; } ;
struct TYPE_2__ {int cpu_type; void* pvr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvmppc_vcpu_e500*) ;
 void* FUNC_1 (int ) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_3)
{
 struct kvmppc_vcpu_e500 *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4);


 VAR_3->arch.pvr = FUNC_1(VAR_1);
 VAR_4->svr = FUNC_1(VAR_2);

 VAR_3->arch.cpu_type = VAR_0;

 return 0;
}
