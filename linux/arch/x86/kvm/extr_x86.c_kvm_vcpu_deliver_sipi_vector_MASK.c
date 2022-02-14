
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int selector; int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_segment*,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_1, u8 VAR_2)
{
 struct kvm_segment VAR_3;

 FUNC_0(VAR_1, &VAR_3, VAR_0);
 VAR_3.selector = VAR_2 << 8;
 VAR_3.base = VAR_2 << 12;
 FUNC_2(VAR_1, &VAR_3, VAR_0);
 FUNC_1(VAR_1, 0);
}
