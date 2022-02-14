
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int nmi_injected; void* event_exit_inst_len; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int,int) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_5,
          u32 VAR_6,
          int VAR_7,
          int VAR_8)
{
 u8 VAR_9;
 int VAR_10;
 bool VAR_11;

 VAR_11 = VAR_6 & VAR_3;

 VAR_5->arch.nmi_injected = 0;
 FUNC_0(VAR_5);
 FUNC_1(VAR_5);

 if (!VAR_11)
  return;

 FUNC_2(VAR_0, VAR_5);

 VAR_9 = VAR_6 & VAR_4;
 VAR_10 = VAR_6 & VAR_2;

 switch (VAR_10) {
 case 130:
  VAR_5->arch.nmi_injected = 1;





  FUNC_7(VAR_5, 0);
  break;
 case 129:
  VAR_5->arch.event_exit_inst_len = FUNC_6(VAR_7);

 case 131:
  if (VAR_6 & VAR_1) {
   u32 VAR_12 = FUNC_6(VAR_8);
   FUNC_5(VAR_5, VAR_9, VAR_12);
  } else
   FUNC_4(VAR_5, VAR_9);
  break;
 case 128:
  VAR_5->arch.event_exit_inst_len = FUNC_6(VAR_7);

 case 132:
  FUNC_3(VAR_5, VAR_9, VAR_10 == 128);
  break;
 default:
  break;
 }
}
