
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rxe_send_wqe {int dummy; } ;
struct TYPE_4__ {int wqe_index; int opcode; } ;
struct TYPE_3__ {int queue; } ;
struct rxe_qp {scalar_t__ qp_timeout_jiffies; int retrans_timer; scalar_t__ need_req_skb; TYPE_2__ req; TYPE_1__ sq; } ;
struct rxe_pkt_info {int mask; int opcode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rxe_qp *VAR_2, struct rxe_send_wqe *VAR_3,
    struct rxe_pkt_info *VAR_4, int VAR_5)
{
 VAR_2->req.opcode = VAR_4->opcode;

 if (VAR_4->mask & VAR_0)
  VAR_2->req.wqe_index = FUNC_1(VAR_2->sq.queue, VAR_2->req.wqe_index);

 VAR_2->need_req_skb = 0;

 if (VAR_2->qp_timeout_jiffies && !FUNC_2(&VAR_2->retrans_timer))
  FUNC_0(&VAR_2->retrans_timer,
     VAR_1 + VAR_2->qp_timeout_jiffies);
}
