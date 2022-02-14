
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union kvmppc_icp_state {int cppr; int xisr; int mfrr; int pending_pri; int need_resend; scalar_t__ raw; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {int dummy; } ;
struct kvmppc_icp {int state; int vcpu; } ;
struct TYPE_4__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_1__ arch; } ;
struct TYPE_5__ {struct kvmppc_xics* xics; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 union kvmppc_icp_state FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_2 (struct kvmppc_icp*,union kvmppc_icp_state,union kvmppc_icp_state,int) ;
 int FUNC_3 (int ,int ) ;
 struct kvmppc_ics* FUNC_4 (struct kvmppc_xics*,int,int *) ;

int FUNC_5(struct kvm_vcpu *VAR_9, u64 VAR_10)
{
 struct kvmppc_icp *VAR_11 = VAR_9->arch.icp;
 struct kvmppc_xics *VAR_12 = VAR_9->kvm->arch.xics;
 union kvmppc_icp_state VAR_13, VAR_14;
 struct kvmppc_ics *VAR_15;
 u8 VAR_16, VAR_17, VAR_18;
 u32 VAR_19;
 u16 VAR_20;
 bool VAR_21;

 if (!VAR_11 || !VAR_12)
  return -VAR_2;

 VAR_16 = VAR_10 >> VAR_3;
 VAR_19 = (VAR_10 >> VAR_7) &
  VAR_6;
 VAR_17 = VAR_10 >> VAR_4;
 VAR_18 = VAR_10 >> VAR_5;


 if (VAR_19 == 0) {
  if (VAR_18 != 0xff)
   return -VAR_1;
 } else if (VAR_19 == VAR_8) {
  if (VAR_18 != VAR_17 || VAR_18 >= VAR_16)
   return -VAR_1;
 } else {
  if (VAR_18 >= VAR_17 || VAR_18 >= VAR_16)
   return -VAR_1;
  VAR_15 = FUNC_4(VAR_12, VAR_19, &VAR_20);
  if (!VAR_15)
   return -VAR_1;
 }

 VAR_14.raw = 0;
 VAR_14.cppr = VAR_16;
 VAR_14.xisr = VAR_19;
 VAR_14.mfrr = VAR_17;
 VAR_14.pending_pri = VAR_18;





 FUNC_3(VAR_11->vcpu, VAR_0);
 do {
  VAR_13 = FUNC_0(VAR_11->state);

  if (VAR_14.mfrr <= VAR_13.mfrr) {
   VAR_21 = 0;
   VAR_14.need_resend = VAR_13.need_resend;
  } else {
   VAR_21 = VAR_13.need_resend;
   VAR_14.need_resend = 0;
  }
 } while (!FUNC_2(VAR_11, VAR_13, VAR_14, 0));

 if (VAR_21)
  FUNC_1(VAR_12, VAR_11);

 return 0;
}
