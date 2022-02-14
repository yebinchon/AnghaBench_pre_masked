
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_6)
{
 FUNC_2(VAR_6, FUNC_1(VAR_6)
   & ~(VAR_1 | VAR_3 | VAR_0 |
       VAR_5 | VAR_4 | VAR_2));
 return FUNC_0(VAR_6);
}
