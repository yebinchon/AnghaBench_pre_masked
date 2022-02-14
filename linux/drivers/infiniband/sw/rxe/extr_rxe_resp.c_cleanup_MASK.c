
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct rxe_qp* mr; } ;
struct rxe_qp {TYPE_1__ resp; int req_pkts; } ;
struct rxe_pkt_info {int dummy; } ;
typedef enum resp_states { ____Placeholder_resp_states } resp_states ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rxe_qp*) ;
 struct sk_buff* FUNC_2 (int *) ;

__attribute__((used)) static enum resp_states FUNC_3(struct rxe_qp *VAR_1,
    struct rxe_pkt_info *VAR_2)
{
 struct sk_buff *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_2(&VAR_1->req_pkts);
  FUNC_1(VAR_1);
  FUNC_0(VAR_3);
 }

 if (VAR_1->resp.mr) {
  FUNC_1(VAR_1->resp.mr);
  VAR_1->resp.mr = ((void*)0);
 }

 return VAR_0;
}
