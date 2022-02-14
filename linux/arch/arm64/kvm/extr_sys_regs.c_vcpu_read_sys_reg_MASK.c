
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int sysregs_loaded_on_cpu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;







 int FUNC_0 (struct kvm_vcpu const*,int) ;
 int FUNC_1 (int ) ;

u64 FUNC_2(const struct kvm_vcpu *VAR_23, int VAR_24)
{
 if (!VAR_23->arch.sysregs_loaded_on_cpu)
  goto immediate_read;
 switch (VAR_24) {
 case 143: return FUNC_1(VAR_7);
 case 135: return FUNC_1(VAR_15);
 case 150: return FUNC_1(VAR_0);
 case 144: return FUNC_1(VAR_6);
 case 130: return FUNC_1(VAR_20);
 case 129: return FUNC_1(VAR_21);
 case 134: return FUNC_1(VAR_16);
 case 140: return FUNC_1(VAR_10);
 case 149: return FUNC_1(VAR_1);
 case 148: return FUNC_1(VAR_2);
 case 139: return FUNC_1(VAR_11);
 case 137: return FUNC_1(VAR_13);
 case 128: return FUNC_1(VAR_22);
 case 145: return FUNC_1(VAR_5);
 case 132: return FUNC_1(VAR_18);
 case 133: return FUNC_1(VAR_17);
 case 131: return FUNC_1(VAR_19);
 case 147: return FUNC_1(VAR_3);
 case 146: return FUNC_1(VAR_4);
 case 136: return FUNC_1(VAR_14);
 case 142: return FUNC_1(VAR_8);
 case 138: return FUNC_1(VAR_12);
 case 141: return FUNC_1(VAR_9);
 }

immediate_read:
 return FUNC_0(VAR_23, VAR_24);
}
