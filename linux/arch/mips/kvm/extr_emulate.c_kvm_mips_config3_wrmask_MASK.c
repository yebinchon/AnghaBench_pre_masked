
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int arch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;

unsigned int FUNC_1(struct kvm_vcpu *VAR_3)
{

 unsigned int VAR_4 = VAR_2 | VAR_1;


 if (FUNC_0(&VAR_3->arch))
  VAR_4 |= VAR_0;

 return VAR_4;
}
