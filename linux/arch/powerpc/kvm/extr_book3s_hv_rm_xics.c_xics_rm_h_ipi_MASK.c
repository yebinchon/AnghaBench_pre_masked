
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union kvmppc_icp_state {unsigned long mfrr; unsigned long cppr; unsigned long pending_pri; scalar_t__ xisr; int need_resend; } ;
typedef scalar_t__ u32 ;
struct kvmppc_xics {int real_mode; } ;
struct kvmppc_icp {unsigned long server_num; int n_check_resend; int n_reject; int state; } ;
struct TYPE_5__ {struct kvmppc_icp* icp; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_2__ arch; } ;
struct TYPE_4__ {struct kvmppc_xics* xics; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 union kvmppc_icp_state FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_2 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_3 (struct kvmppc_xics*,struct kvmppc_icp*,scalar_t__,int) ;
 int FUNC_4 (struct kvmppc_icp*,union kvmppc_icp_state,union kvmppc_icp_state) ;
 struct kvmppc_icp* FUNC_5 (TYPE_3__*,unsigned long) ;

int FUNC_6(struct kvm_vcpu *VAR_3, unsigned long VAR_4,
    unsigned long VAR_5)
{
 union kvmppc_icp_state VAR_6, VAR_7;
 struct kvmppc_xics *VAR_8 = VAR_3->kvm->arch.xics;
 struct kvmppc_icp *VAR_9, *VAR_10 = VAR_3->arch.icp;
 u32 VAR_11;
 bool VAR_12;
 bool VAR_13;

 if (!VAR_8 || !VAR_8->real_mode)
  return VAR_1;

 VAR_13 = VAR_10->server_num == VAR_4;
 if (VAR_13)
  VAR_9 = VAR_10;
 else
  VAR_9 = FUNC_5(VAR_3->kvm, VAR_4);
 if (!VAR_9)
  return VAR_0;
 do {
  VAR_6 = VAR_7 = FUNC_0(VAR_9->state);


  VAR_7.mfrr = VAR_5;


  VAR_11 = 0;
  VAR_12 = 0;
  if (VAR_5 < VAR_7.cppr) {

   if (VAR_5 <= VAR_7.pending_pri) {
    VAR_11 = VAR_7.xisr;
    VAR_7.pending_pri = VAR_5;
    VAR_7.xisr = VAR_2;
   }
  }

  if (VAR_5 > VAR_6.mfrr) {
   VAR_12 = VAR_7.need_resend;
   VAR_7.need_resend = 0;
  }
 } while (!FUNC_4(VAR_9, VAR_6, VAR_7));


 if (VAR_11 && VAR_11 != VAR_2) {
  VAR_10->n_reject++;
  FUNC_3(VAR_8, VAR_9, VAR_11, 0);
 }


 if (VAR_12) {
  VAR_10->n_check_resend++;
  FUNC_2(VAR_8, VAR_9);
 }

 return FUNC_1(VAR_8, VAR_10);
}
