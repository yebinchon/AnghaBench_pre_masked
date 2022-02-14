
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int task; } ;
struct rxe_qp {TYPE_1__ resp; int req_pkts; } ;
struct rxe_pkt_info {scalar_t__ opcode; } ;


 scalar_t__ VAR_0 ;
 struct rxe_pkt_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;

void FUNC_4(struct rxe_qp *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct rxe_pkt_info *VAR_4 = FUNC_0(VAR_2);

 FUNC_3(&VAR_1->req_pkts, VAR_2);

 VAR_3 = (VAR_4->opcode == VAR_0) ||
   (FUNC_2(&VAR_1->req_pkts) > 1);

 FUNC_1(&VAR_1->resp.task, VAR_3);
}
