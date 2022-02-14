
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_send_wr {int opcode; int * next; int send_flags; int num_sge; int sg_list; int * wr_cqe; } ;
struct TYPE_4__ {struct ib_send_wr wr; } ;
struct iser_tx_desc {TYPE_2__ reg_wr; struct ib_send_wr inv_wr; int num_sge; int tx_sg; int cqe; int dma_addr; struct ib_send_wr send_wr; } ;
struct ib_conn {int qp; TYPE_1__* device; } ;
struct TYPE_3__ {int ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct ib_send_wr*,int *) ;
 int FUNC_2 (char*,int,int ) ;

int FUNC_3(struct ib_conn *VAR_4, struct iser_tx_desc *VAR_5,
     bool VAR_6)
{
 struct ib_send_wr *VAR_7 = &VAR_5->send_wr;
 struct ib_send_wr *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4->device->ib_device,
          VAR_5->dma_addr, VAR_3,
          VAR_0);

 VAR_7->next = ((void*)0);
 VAR_7->wr_cqe = &VAR_5->cqe;
 VAR_7->sg_list = VAR_5->tx_sg;
 VAR_7->num_sge = VAR_5->num_sge;
 VAR_7->opcode = VAR_2;
 VAR_7->send_flags = VAR_6 ? VAR_1 : 0;

 if (VAR_5->inv_wr.next)
  VAR_8 = &VAR_5->inv_wr;
 else if (VAR_5->reg_wr.wr.next)
  VAR_8 = &VAR_5->reg_wr.wr;
 else
  VAR_8 = VAR_7;

 VAR_9 = FUNC_1(VAR_4->qp, VAR_8, ((void*)0));
 if (VAR_9)
  FUNC_2("ib_post_send failed, ret:%d opcode:%d\n",
    VAR_9, VAR_7->opcode);

 return VAR_9;
}
