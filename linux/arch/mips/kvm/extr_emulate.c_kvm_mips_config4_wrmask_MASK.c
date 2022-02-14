
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

unsigned int FUNC_0(struct kvm_vcpu *VAR_2)
{

 unsigned int VAR_3 = VAR_1;


 VAR_3 |= 0xfc << VAR_0;

 return VAR_3;
}
