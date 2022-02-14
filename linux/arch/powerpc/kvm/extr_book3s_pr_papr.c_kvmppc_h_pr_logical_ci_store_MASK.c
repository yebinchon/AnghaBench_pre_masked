
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int,long) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_3)
{
 long VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == VAR_2)
  return VAR_1;
 FUNC_1(VAR_3, 3, VAR_4);
 return VAR_0;
}
