
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int vz_resvd_exits; int vz_gpa_exits; int vz_ghfc_exits; int vz_gva_exits; int vz_grr_exits; int vz_hc_exits; int vz_gsfc_exits; int vz_gpsi_exits; } ;
struct TYPE_4__ {int host_cp0_cause; int host_cp0_guestctl0; scalar_t__ pc; } ;
struct kvm_vcpu {TYPE_3__* run; TYPE_2__ stat; TYPE_1__ arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_6__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int,int*,struct kvm_vcpu*) ;
 int FUNC_2 (int,int*,struct kvm_vcpu*) ;
 int FUNC_3 (int,int*,struct kvm_vcpu*) ;
 int FUNC_4 (int,int*,struct kvm_vcpu*) ;
 int FUNC_5 (int,int,int*,struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_8)
{
 u32 *VAR_9 = (u32 *) VAR_8->arch.pc;
 u32 VAR_10 = VAR_8->arch.host_cp0_cause;
 enum emulation_result VAR_11 = VAR_0;
 u32 VAR_12 = (VAR_8->arch.host_cp0_guestctl0 &
   VAR_4) >> VAR_5;
 int VAR_13 = VAR_6;

 FUNC_6(VAR_8, VAR_3 + VAR_12);
 switch (VAR_12) {
 case 132:
  ++VAR_8->stat.vz_gpsi_exits;
  VAR_11 = FUNC_2(VAR_10, VAR_9, VAR_8);
  break;
 case 130:
  ++VAR_8->stat.vz_gsfc_exits;
  VAR_11 = FUNC_3(VAR_10, VAR_9, VAR_8);
  break;
 case 128:
  ++VAR_8->stat.vz_hc_exits;
  VAR_11 = FUNC_4(VAR_10, VAR_9, VAR_8);
  break;
 case 131:
  ++VAR_8->stat.vz_grr_exits;
  VAR_11 = FUNC_5(VAR_12, VAR_10, VAR_9,
             VAR_8);
  break;
 case 129:
  ++VAR_8->stat.vz_gva_exits;
  VAR_11 = FUNC_5(VAR_12, VAR_10, VAR_9,
             VAR_8);
  break;
 case 134:
  ++VAR_8->stat.vz_ghfc_exits;
  VAR_11 = FUNC_1(VAR_10, VAR_9, VAR_8);
  break;
 case 133:
  ++VAR_8->stat.vz_gpa_exits;
  VAR_11 = FUNC_5(VAR_12, VAR_10, VAR_9,
             VAR_8);
  break;
 default:
  ++VAR_8->stat.vz_resvd_exits;
  VAR_11 = FUNC_5(VAR_12, VAR_10, VAR_9,
             VAR_8);
  break;

 }

 if (VAR_11 == VAR_0) {
  VAR_13 = VAR_6;
 } else if (VAR_11 == VAR_1) {
  VAR_13 = FUNC_0(VAR_8);
 } else {
  VAR_8->run->exit_reason = VAR_2;
  VAR_13 = VAR_7;
 }
 return VAR_13;
}
