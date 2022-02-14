
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int msr; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_1, u32 VAR_2)
{
 u32 VAR_3 = VAR_1->arch.shared->msr;





 VAR_1->arch.shared->msr = VAR_2;

 FUNC_0(VAR_1, VAR_3);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
