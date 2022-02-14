
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int instruction_sigp_unknown; int instruction_sigp_cpu_reset; int instruction_sigp_init_cpu_reset; int instruction_sigp_restart; int instruction_sigp_start; int instruction_sigp_sense_running; int instruction_sigp_cond_emergency; int instruction_sigp_prefix; int instruction_sigp_store_status; int instruction_sigp_stop_store_status; int instruction_sigp_stop; int instruction_sigp_emergency; int instruction_sigp_external_call; int instruction_sigp_sense; } ;
struct kvm_vcpu {int vcpu_id; TYPE_1__ stat; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,int ) ;
 int FUNC_1 (struct kvm_vcpu*,struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,struct kvm_vcpu*,int ,int *) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_vcpu*,int *) ;
 int FUNC_7 (struct kvm_vcpu*,struct kvm_vcpu*,int *) ;
 int FUNC_8 (struct kvm_vcpu*,struct kvm_vcpu*,int *) ;
 int FUNC_9 (struct kvm_vcpu*,struct kvm_vcpu*,int ,int *) ;
 int FUNC_10 (struct kvm_vcpu*,struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*,struct kvm_vcpu*,int *) ;
 int FUNC_12 (struct kvm_vcpu*,struct kvm_vcpu*,int ,int *) ;
 struct kvm_vcpu* FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(struct kvm_vcpu *VAR_2, u8 VAR_3,
      u16 VAR_4, u32 VAR_5, u64 *VAR_6)
{
 int VAR_7;
 struct kvm_vcpu *VAR_8 = FUNC_13(VAR_2->kvm, VAR_4);

 if (!VAR_8)
  return VAR_1;

 switch (VAR_3) {
 case 134:
  VAR_2->stat.instruction_sigp_sense++;
  VAR_7 = FUNC_7(VAR_2, VAR_8, VAR_6);
  break;
 case 137:
  VAR_2->stat.instruction_sigp_external_call++;
  VAR_7 = FUNC_6(VAR_2, VAR_8, VAR_6);
  break;
 case 138:
  VAR_2->stat.instruction_sigp_emergency++;
  VAR_7 = FUNC_5(VAR_2, VAR_8);
  break;
 case 130:
  VAR_2->stat.instruction_sigp_stop++;
  VAR_7 = FUNC_10(VAR_2, VAR_8);
  break;
 case 129:
  VAR_2->stat.instruction_sigp_stop_store_status++;
  VAR_7 = FUNC_11(VAR_2, VAR_8, VAR_6);
  break;
 case 128:
  VAR_2->stat.instruction_sigp_store_status++;
  VAR_7 = FUNC_12(VAR_2, VAR_8, VAR_5,
       VAR_6);
  break;
 case 132:
  VAR_2->stat.instruction_sigp_prefix++;
  VAR_7 = FUNC_9(VAR_2, VAR_8, VAR_5, VAR_6);
  break;
 case 140:
  VAR_2->stat.instruction_sigp_cond_emergency++;
  VAR_7 = FUNC_4(VAR_2, VAR_8, VAR_5,
        VAR_6);
  break;
 case 133:
  VAR_2->stat.instruction_sigp_sense_running++;
  VAR_7 = FUNC_8(VAR_2, VAR_8, VAR_6);
  break;
 case 131:
  VAR_2->stat.instruction_sigp_start++;
  VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_3);
  break;
 case 135:
  VAR_2->stat.instruction_sigp_restart++;
  VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_3);
  break;
 case 136:
  VAR_2->stat.instruction_sigp_init_cpu_reset++;
  VAR_7 = FUNC_1(VAR_2, VAR_8, VAR_3);
  break;
 case 139:
  VAR_2->stat.instruction_sigp_cpu_reset++;
  VAR_7 = FUNC_1(VAR_2, VAR_8, VAR_3);
  break;
 default:
  VAR_2->stat.instruction_sigp_unknown++;
  VAR_7 = FUNC_3(VAR_2, VAR_8);
 }

 if (VAR_7 == -VAR_0)
  FUNC_0(VAR_2, 4,
      "sigp order %u -> cpu %x: handled in user space",
      VAR_3, VAR_8->vcpu_id);

 return VAR_7;
}
