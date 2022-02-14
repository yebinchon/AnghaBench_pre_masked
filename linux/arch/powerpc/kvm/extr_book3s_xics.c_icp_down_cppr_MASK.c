
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union kvmppc_icp_state {scalar_t__ mfrr; scalar_t__ pending_pri; scalar_t__ xisr; int need_resend; scalar_t__ cppr; } ;
typedef scalar_t__ u8 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_icp {int state; } ;


 union kvmppc_icp_state FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct kvmppc_xics*,struct kvmppc_icp*) ;
 int FUNC_3 (struct kvmppc_icp*,union kvmppc_icp_state,union kvmppc_icp_state,int) ;

__attribute__((used)) static void FUNC_4(struct kvmppc_xics *VAR_1, struct kvmppc_icp *VAR_2,
     u8 VAR_3)
{
 union kvmppc_icp_state VAR_4, VAR_5;
 bool VAR_6;
 do {
  VAR_4 = VAR_5 = FUNC_0(VAR_2->state);


  VAR_5.cppr = VAR_3;
  if (VAR_5.mfrr < VAR_3 &&
      VAR_5.mfrr <= VAR_5.pending_pri) {
   FUNC_1(VAR_5.xisr != VAR_0 &&
    VAR_5.xisr != 0);
   VAR_5.pending_pri = VAR_5.mfrr;
   VAR_5.xisr = VAR_0;
  }


  VAR_6 = VAR_5.need_resend;
  VAR_5.need_resend = 0;

 } while (!FUNC_3(VAR_2, VAR_4, VAR_5, 1));






 if (VAR_6)
  FUNC_2(VAR_1, VAR_2);
}
