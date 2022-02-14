
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {int dummy; } ;
struct TYPE_2__ {scalar_t__ shared; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,struct kvmppc_vcpu_e500*) ;
 int VAR_0 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvmppc_vcpu_e500*) ;
 int FUNC_4 (struct kvmppc_vcpu_e500*) ;
 struct kvmppc_vcpu_e500* FUNC_5 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1)
{
 struct kvmppc_vcpu_e500 *VAR_2 = FUNC_5(VAR_1);

 FUNC_0((unsigned long)VAR_1->arch.shared);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_1);
 FUNC_1(VAR_0, VAR_2);
}
