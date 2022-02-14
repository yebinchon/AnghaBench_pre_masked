
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_4, unsigned int VAR_5,
      int VAR_6)
{

 if (FUNC_0(VAR_5) == VAR_2) {
  FUNC_1(VAR_4, VAR_6,
          1 | (1 << VAR_3));
  return VAR_0;
 }

 return VAR_1;
}
