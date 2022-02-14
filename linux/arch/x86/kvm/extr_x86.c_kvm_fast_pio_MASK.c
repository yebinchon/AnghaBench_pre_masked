
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int,unsigned short) ;
 int FUNC_1 (struct kvm_vcpu*,int,unsigned short) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0, int VAR_1, unsigned short VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_4 && FUNC_2(VAR_0);
}
