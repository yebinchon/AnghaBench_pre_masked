
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int ,int,int,int*) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(struct kvm_vcpu *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;


 VAR_1 &= 0xff0;

 FUNC_0(VAR_0->arch.apic, VAR_1, 4, &VAR_2);


 FUNC_1(VAR_0->arch.apic, VAR_1, VAR_2);
}
