
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int arch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct kvm_vcpu *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_4) | VAR_3 |
  VAR_2 | VAR_0;


 if (FUNC_0(&VAR_4->arch))
  VAR_5 |= VAR_1;

 return VAR_5;
}
