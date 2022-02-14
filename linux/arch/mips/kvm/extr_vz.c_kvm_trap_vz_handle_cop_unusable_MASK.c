
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int host_cp0_cause; int aux_inuse; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm_run* run; } ;
struct kvm_run {int exit_reason; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_6)
{
 struct kvm_run *VAR_7 = VAR_6->run;
 u32 VAR_8 = VAR_6->arch.host_cp0_cause;
 enum emulation_result VAR_9 = 128;
 int VAR_10 = VAR_4;

 if (((VAR_8 & VAR_1) >> VAR_0) == 1) {





  if (FUNC_1(!FUNC_2(&VAR_6->arch) ||
       VAR_6->arch.aux_inuse & VAR_3)) {
   FUNC_4();
   return 128;
  }

  FUNC_3(VAR_6);
  VAR_9 = 129;
 }


 switch (VAR_9) {
 case 129:
  VAR_10 = VAR_4;
  break;

 case 128:
  VAR_7->exit_reason = VAR_2;
  VAR_10 = VAR_5;
  break;

 default:
  FUNC_0();
 }
 return VAR_10;
}
