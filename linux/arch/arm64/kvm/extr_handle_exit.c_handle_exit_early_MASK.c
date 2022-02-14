
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(struct kvm_vcpu *VAR_2, struct kvm_run *VAR_3,
         int VAR_4)
{
 if (FUNC_1(VAR_4)) {
  if (FUNC_7(VAR_0)) {
   u64 VAR_5 = FUNC_5(VAR_2);

   FUNC_3(VAR_2, FUNC_2(VAR_5));
  } else {
   FUNC_4(VAR_2);
  }

  return;
 }

 VAR_4 = FUNC_0(VAR_4);

 if (VAR_4 == VAR_1)
  FUNC_3(VAR_2, FUNC_6(VAR_2));
}
