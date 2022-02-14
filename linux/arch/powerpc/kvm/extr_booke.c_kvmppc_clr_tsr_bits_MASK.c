
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tsr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct kvm_vcpu*) ;

void FUNC_3(struct kvm_vcpu *VAR_2, u32 VAR_3)
{
 FUNC_1(VAR_3, &VAR_2->arch.tsr);





 if (VAR_3 & (VAR_0 | VAR_1))
  FUNC_0(VAR_2);

 FUNC_2(VAR_2);
}
