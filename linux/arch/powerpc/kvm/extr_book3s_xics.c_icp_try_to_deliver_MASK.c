
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union kvmppc_icp_state {scalar_t__ cppr; scalar_t__ mfrr; scalar_t__ pending_pri; int need_resend; int xisr; } ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct kvmppc_icp {int state; int server_num; } ;


 union kvmppc_icp_state FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct kvmppc_icp*,union kvmppc_icp_state,union kvmppc_icp_state,int) ;

__attribute__((used)) static bool FUNC_3(struct kvmppc_icp *VAR_0, u32 VAR_1, u8 VAR_2,
          u32 *VAR_3)
{
 union kvmppc_icp_state VAR_4, VAR_5;
 bool VAR_6;

 FUNC_1("try deliver %#x(P:%#x) to server %#lx\n", VAR_1, VAR_2,
   VAR_0->server_num);

 do {
  VAR_4 = VAR_5 = FUNC_0(VAR_0->state);

  *VAR_3 = 0;


  VAR_6 = VAR_5.cppr > VAR_2 &&
   VAR_5.mfrr > VAR_2 &&
   VAR_5.pending_pri > VAR_2;





  if (VAR_6) {
   *VAR_3 = VAR_5.xisr;
   VAR_5.xisr = VAR_1;
   VAR_5.pending_pri = VAR_2;
  } else {





   VAR_5.need_resend = 1;
  }

 } while (!FUNC_2(VAR_0, VAR_4, VAR_5, 0));

 return VAR_6;
}
