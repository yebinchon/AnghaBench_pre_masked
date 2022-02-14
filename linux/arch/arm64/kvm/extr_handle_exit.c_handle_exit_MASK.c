
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_run {void* exit_reason; } ;


 int FUNC_0 (int) ;





 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_run*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int * FUNC_7 (struct kvm_vcpu*) ;

int FUNC_8(struct kvm_vcpu *VAR_7, struct kvm_run *VAR_8,
         int VAR_9)
{
 if (FUNC_1(VAR_9)) {
  u8 VAR_10 = FUNC_2(FUNC_5(VAR_7));






  if (VAR_10 == VAR_1 || VAR_10 == VAR_2 ||
      VAR_10 == VAR_3 || VAR_10 == VAR_4) {
   u32 VAR_11 = FUNC_6(VAR_7) ? 4 : 2;
   *FUNC_7(VAR_7) -= VAR_11;
  }

  return 1;
 }

 VAR_9 = FUNC_0(VAR_9);

 switch (VAR_9) {
 case 129:
  return 1;
 case 132:
  return 1;
 case 128:
  return FUNC_3(VAR_7, VAR_8);
 case 131:




  VAR_8->exit_reason = VAR_5;
  return 0;
 case 130:




  VAR_8->exit_reason = VAR_5;
  return -VAR_0;
 default:
  FUNC_4("Unsupported exception type: %d",
         VAR_9);
  VAR_8->exit_reason = VAR_6;
  return 0;
 }
}
