
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int arch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct kvm_vcpu *VAR_9)
{
 unsigned int VAR_10 = VAR_2 | VAR_0 | VAR_4;


 if (FUNC_1(&VAR_9->arch))
  VAR_10 |= VAR_3;





 if (FUNC_0(&VAR_9->arch)) {
  if (VAR_8)
   VAR_10 |= VAR_6;
  if (VAR_7)
   VAR_10 |= VAR_1 | VAR_5;
 }

 return VAR_10;
}
