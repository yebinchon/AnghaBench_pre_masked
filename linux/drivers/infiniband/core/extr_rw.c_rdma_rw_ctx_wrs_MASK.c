
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct ib_send_wr {int send_flags; struct ib_cqe* wr_cqe; struct ib_send_wr* next; int opcode; } ;
struct TYPE_12__ {struct ib_send_wr wr; } ;
struct TYPE_13__ {TYPE_5__ wr; } ;
struct TYPE_11__ {TYPE_3__* wrs; } ;
struct rdma_rw_ctx {int type; int nr_ops; TYPE_6__ single; TYPE_4__ map; TYPE_7__* reg; } ;
struct ib_qp {int dummy; } ;
struct ib_cqe {int dummy; } ;
struct TYPE_9__ {struct ib_send_wr wr; } ;
struct TYPE_8__ {struct ib_send_wr wr; } ;
struct TYPE_14__ {TYPE_2__ wr; TYPE_1__ reg_wr; struct ib_send_wr inv_wr; } ;
struct TYPE_10__ {struct ib_send_wr wr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (TYPE_7__*,int) ;

struct ib_send_wr *FUNC_2(struct rdma_rw_ctx *VAR_2, struct ib_qp *VAR_3,
  u8 VAR_4, struct ib_cqe *VAR_5, struct ib_send_wr *VAR_6)
{
 struct ib_send_wr *VAR_7, *VAR_8;
 int VAR_9;

 switch (VAR_2->type) {
 case 129:
 case 131:

  for (VAR_9 = 0; VAR_9 < VAR_2->nr_ops; VAR_9++) {
   FUNC_1(&VAR_2->reg[VAR_9],
    VAR_2->reg[VAR_9].wr.wr.opcode !=
     VAR_1);
  }

  if (VAR_2->reg[0].inv_wr.next)
   VAR_7 = &VAR_2->reg[0].inv_wr;
  else
   VAR_7 = &VAR_2->reg[0].reg_wr.wr;
  VAR_8 = &VAR_2->reg[VAR_2->nr_ops - 1].wr.wr;
  break;
 case 130:
  VAR_7 = &VAR_2->map.wrs[0].wr;
  VAR_8 = &VAR_2->map.wrs[VAR_2->nr_ops - 1].wr;
  break;
 case 128:
  VAR_7 = &VAR_2->single.wr.wr;
  VAR_8 = &VAR_2->single.wr.wr;
  break;
 default:
  FUNC_0();
 }

 if (VAR_6) {
  VAR_8->next = VAR_6;
 } else {
  VAR_8->wr_cqe = VAR_5;
  VAR_8->send_flags |= VAR_0;
 }

 return VAR_7;
}
