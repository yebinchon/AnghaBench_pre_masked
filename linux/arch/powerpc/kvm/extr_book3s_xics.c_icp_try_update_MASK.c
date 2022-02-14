
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union kvmppc_icp_state {int out_ee; scalar_t__ pending_pri; scalar_t__ cppr; scalar_t__ raw; int need_resend; scalar_t__ xisr; int mfrr; } ;
struct TYPE_2__ {int raw; } ;
struct kvmppc_icp {int vcpu; int server_num; TYPE_1__ state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int,...) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline bool FUNC_4(struct kvmppc_icp *VAR_1,
      union kvmppc_icp_state VAR_2,
      union kvmppc_icp_state VAR_3,
      bool VAR_4)
{
 bool VAR_5;


 VAR_3.out_ee = (VAR_3.xisr && (VAR_3.pending_pri < VAR_3.cppr));


 VAR_5 = FUNC_1(&VAR_1->state.raw, VAR_2.raw, VAR_3.raw) == VAR_2.raw;
 if (!VAR_5)
  goto bail;

 FUNC_0("UPD [%04lx] - C:%02x M:%02x PP: %02x PI:%06x R:%d O:%d\n",
   VAR_1->server_num,
   VAR_2.cppr, VAR_2.mfrr, VAR_2.pending_pri, VAR_2.xisr,
   VAR_2.need_resend, VAR_2.out_ee);
 FUNC_0("UPD        - C:%02x M:%02x PP: %02x PI:%06x R:%d O:%d\n",
   VAR_3.cppr, VAR_3.mfrr, VAR_3.pending_pri, VAR_3.xisr,
   VAR_3.need_resend, VAR_3.out_ee);
 if (VAR_3.out_ee) {
  FUNC_2(VAR_1->vcpu,
         VAR_0);
  if (!VAR_4)
   FUNC_3(VAR_1->vcpu);
 }
 bail:
 return VAR_5;
}
