
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int arch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

unsigned int FUNC_2(struct kvm_vcpu *VAR_3)
{
 unsigned int VAR_4 = 0;


 if (FUNC_1(&VAR_3->arch))
  VAR_4 |= VAR_1;





 if (FUNC_0(&VAR_3->arch)) {
  if (VAR_2)
   VAR_4 |= VAR_0;

 }

 return VAR_4;
}
