
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 unsigned long FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;

void FUNC_2(struct kvm_vcpu *VAR_0, unsigned long VAR_1)
{
 (void)FUNC_1(VAR_0, FUNC_0(VAR_0, ~0x0eul) | (VAR_1 & 0x0f));
}
