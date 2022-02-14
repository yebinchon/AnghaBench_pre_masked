
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int gva_t ;
struct TYPE_3__ {int msr; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,unsigned int) ;

int FUNC_2(struct kvm_vcpu *VAR_1, gva_t VAR_2)
{
 unsigned int VAR_3 = !!(VAR_1->arch.shared->msr & VAR_0);

 return FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_1), VAR_3);
}
