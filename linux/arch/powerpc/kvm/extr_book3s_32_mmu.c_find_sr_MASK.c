
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;


 int FUNC_0 (struct kvm_vcpu*,int) ;

__attribute__((used)) static u32 FUNC_1(struct kvm_vcpu *VAR_0, gva_t VAR_1)
{
 return FUNC_0(VAR_0, (VAR_1 >> 28) & 0xf);
}
