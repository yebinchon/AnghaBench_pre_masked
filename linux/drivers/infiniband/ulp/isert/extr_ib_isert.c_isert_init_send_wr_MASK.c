
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isert_conn {scalar_t__ snd_w_inv; } ;
struct TYPE_3__ {int done; } ;
struct iser_tx_desc {int num_sge; int * tx_sg; TYPE_1__ tx_cqe; } ;
struct isert_cmd {struct iser_tx_desc tx_desc; scalar_t__ inv_rkey; } ;
struct TYPE_4__ {scalar_t__ invalidate_rkey; } ;
struct ib_send_wr {int send_flags; int num_sge; int * sg_list; int opcode; TYPE_2__ ex; TYPE_1__* wr_cqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct isert_conn *VAR_4, struct isert_cmd *VAR_5,
     struct ib_send_wr *VAR_6)
{
 struct iser_tx_desc *VAR_7 = &VAR_5->tx_desc;

 VAR_7->tx_cqe.done = VAR_3;
 VAR_6->wr_cqe = &VAR_7->tx_cqe;

 if (VAR_4->snd_w_inv && VAR_5->inv_rkey) {
  VAR_6->opcode = VAR_2;
  VAR_6->ex.invalidate_rkey = VAR_5->inv_rkey;
 } else {
  VAR_6->opcode = VAR_1;
 }

 VAR_6->sg_list = &VAR_7->tx_sg[0];
 VAR_6->num_sge = VAR_5->tx_desc.num_sge;
 VAR_6->send_flags = VAR_0;
}
