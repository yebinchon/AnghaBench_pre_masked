
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu const*) ;
 int FUNC_2 (struct kvm_vcpu const*) ;
 unsigned int FUNC_3 (struct kvm_vcpu const*) ;

__attribute__((used)) static unsigned long FUNC_4(const struct kvm_vcpu *VAR_2)
{
 const unsigned int VAR_3 = FUNC_3(VAR_2);

 if (!FUNC_2(VAR_2))
  return 0;


 FUNC_0(!FUNC_1(VAR_2));

 return VAR_3 * (VAR_0 + VAR_1 + 1 )
  + 1;
}
