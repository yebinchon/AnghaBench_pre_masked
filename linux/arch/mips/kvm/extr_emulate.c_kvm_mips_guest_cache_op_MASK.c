
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long host_cp0_badvaddr; unsigned long pc; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_run {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,int *,struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_1 (int ,int *,struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static enum emulation_result FUNC_6(int (*VAR_3)(unsigned long),
           unsigned long VAR_4,
           unsigned long VAR_5,
           struct kvm_run *VAR_6,
           struct kvm_vcpu *VAR_7,
           u32 VAR_8)
{
 int VAR_9;

 for (;;) {

  FUNC_3(VAR_7);
  VAR_9 = VAR_3(VAR_5);
  FUNC_4(VAR_7);

  if (FUNC_5(!VAR_9))
   return VAR_0;





  switch (FUNC_2(VAR_7, VAR_5, 0)) {
  case 130:
  case 131:

   return VAR_2;
  case 129:

   VAR_7->arch.host_cp0_badvaddr = VAR_5;
   VAR_7->arch.pc = VAR_4;
   FUNC_1(VAR_8, ((void*)0), VAR_6, VAR_7);
   return VAR_1;
  case 128:

   VAR_7->arch.host_cp0_badvaddr = VAR_5;
   VAR_7->arch.pc = VAR_4;
   FUNC_0(VAR_8, ((void*)0), VAR_6, VAR_7);
   return VAR_1;
  default:
   break;
  };
 }
}
