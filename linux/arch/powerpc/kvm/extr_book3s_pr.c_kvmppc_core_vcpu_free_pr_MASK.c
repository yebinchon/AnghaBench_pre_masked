
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_book3s {int dummy; } ;
struct TYPE_2__ {int shadow_vcpu; scalar_t__ shared; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int VAR_1 ;
 int FUNC_3 (struct kvm_vcpu*) ;
 struct kvmppc_vcpu_book3s* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvmppc_vcpu_book3s*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct kvmppc_vcpu_book3s *VAR_3 = FUNC_4(VAR_2);

 FUNC_0((unsigned long)VAR_2->arch.shared & VAR_0);
 FUNC_3(VAR_2);



 FUNC_5(VAR_3);
 FUNC_2(VAR_1, VAR_2);
}
