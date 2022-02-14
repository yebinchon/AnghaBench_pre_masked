
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union rdma_network_hdr {int dummy; } rdma_network_hdr ;
struct TYPE_2__ {int psn; int ack_psn; int msn; int status; int opcode; } ;
struct rxe_qp {TYPE_1__ resp; } ;
struct rxe_pkt_info {int mask; int psn; int opcode; } ;
typedef int hdr ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (union rdma_network_hdr*,struct rxe_pkt_info*) ;
 union rdma_network_hdr* FUNC_2 (struct rxe_pkt_info*) ;
 int FUNC_3 (struct rxe_pkt_info*) ;
 int FUNC_4 (struct rxe_qp*,struct rxe_pkt_info*) ;
 scalar_t__ FUNC_5 (struct rxe_qp*) ;
 int FUNC_6 (struct rxe_qp*,union rdma_network_hdr*,int) ;
 int FUNC_7 (struct rxe_qp*,struct rxe_pkt_info*) ;

__attribute__((used)) static enum resp_states FUNC_8(struct rxe_qp *VAR_15, struct rxe_pkt_info *VAR_16)
{
 enum resp_states VAR_17;

 if (VAR_16->mask & VAR_13) {
  if (FUNC_5(VAR_15) == VAR_4 ||
      FUNC_5(VAR_15) == VAR_3 ||
      FUNC_5(VAR_15) == VAR_1) {
   union rdma_network_hdr VAR_18;

   FUNC_1(&VAR_18, VAR_16);

   VAR_17 = FUNC_6(VAR_15, &VAR_18, sizeof(VAR_18));
   if (VAR_17)
    return VAR_17;
  }
  VAR_17 = FUNC_6(VAR_15, FUNC_2(VAR_16), FUNC_3(VAR_16));
  if (VAR_17)
   return VAR_17;
 } else if (VAR_16->mask & VAR_14) {
  VAR_17 = FUNC_7(VAR_15, VAR_16);
  if (VAR_17)
   return VAR_17;
 } else if (VAR_16->mask & VAR_12) {

  VAR_15->resp.msn++;
  return VAR_9;
 } else if (VAR_16->mask & VAR_10) {
  VAR_17 = FUNC_4(VAR_15, VAR_16);
  if (VAR_17)
   return VAR_17;
 } else {

  FUNC_0(1);
 }


 VAR_15->resp.psn = (VAR_16->psn + 1) & VAR_0;
 VAR_15->resp.ack_psn = VAR_15->resp.psn;

 VAR_15->resp.opcode = VAR_16->opcode;
 VAR_15->resp.status = VAR_5;

 if (VAR_16->mask & VAR_11) {

  VAR_15->resp.msn++;
  return VAR_8;
 } else if (FUNC_5(VAR_15) == VAR_2)
  return VAR_6;
 else
  return VAR_7;
}
