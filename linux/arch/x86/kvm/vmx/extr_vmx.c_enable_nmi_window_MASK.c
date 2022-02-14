
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 if (!VAR_3 ||
     FUNC_3(VAR_1) & VAR_2) {
  FUNC_0(VAR_4);
  return;
 }

 FUNC_1(FUNC_2(VAR_4), VAR_0);
}
