
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static bool
FUNC_2(struct kvm_vcpu *VAR_0, gfn_t VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 VAR_1 &= ~(VAR_3 - 1);

 return FUNC_1(VAR_0, VAR_1, VAR_3);
}
