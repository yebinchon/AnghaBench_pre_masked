
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int arch; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;

unsigned int FUNC_1(struct kvm_vcpu *VAR_1)
{
 unsigned int VAR_2 = 0;


 if (FUNC_0(&VAR_1->arch))
  VAR_2 |= VAR_0;

 return VAR_2;
}
