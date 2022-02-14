
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

int FUNC_2(struct kvm_vcpu *VAR_0, int VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2)) {
  FUNC_1(VAR_0, 0);
  return 1;
 }
 return 0;
}
