
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num_sge; scalar_t__ send_flags; struct ib_cqe* wr_cqe; int opcode; int * next; } ;
struct ib_reg_wr {int access; int key; struct ib_mr* mr; TYPE_4__ wr; } ;
struct iser_tx_desc {int send_wr; int inv_wr; struct ib_reg_wr reg_wr; } ;
struct iser_reg_resources {int mr_valid; struct ib_mr* mr; } ;
struct TYPE_7__ {int length; int addr; int lkey; } ;
struct iser_mem_reg {TYPE_3__ sge; int rkey; } ;
struct iser_data_buf {int dma_nents; int sg; } ;
struct iscsi_iser_task {TYPE_2__* iser_conn; struct iser_tx_desc desc; } ;
struct ib_mr {int length; int iova; int rkey; int lkey; } ;
struct ib_cqe {int dummy; } ;
struct TYPE_5__ {struct ib_cqe reg_cqe; } ;
struct TYPE_6__ {TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mr*,int ,int,int *,int ) ;
 int FUNC_2 (struct ib_mr*,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int *,struct ib_mr*,struct ib_cqe*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct iscsi_iser_task *VAR_6,
       struct iser_data_buf *VAR_7,
       struct iser_reg_resources *VAR_8,
       struct iser_mem_reg *VAR_9)
{
 struct iser_tx_desc *VAR_10 = &VAR_6->desc;
 struct ib_cqe *VAR_11 = &VAR_6->iser_conn->ib_conn.reg_cqe;
 struct ib_mr *VAR_12 = VAR_8->mr;
 struct ib_reg_wr *VAR_13 = &VAR_10->reg_wr;
 int VAR_14;

 if (VAR_8->mr_valid)
  FUNC_5(&VAR_10->inv_wr, VAR_12, VAR_11, &VAR_13->wr);

 FUNC_2(VAR_12, FUNC_0(VAR_12->rkey));

 VAR_14 = FUNC_1(VAR_12, VAR_7->sg, VAR_7->dma_nents, ((void*)0), VAR_5);
 if (FUNC_6(VAR_14 != VAR_7->dma_nents)) {
  FUNC_4("failed to map sg (%d/%d)\n",
    VAR_14, VAR_7->dma_nents);
  return VAR_14 < 0 ? VAR_14 : -VAR_0;
 }

 VAR_13->wr.next = &VAR_10->send_wr;
 VAR_13->wr.opcode = VAR_4;
 VAR_13->wr.wr_cqe = VAR_11;
 VAR_13->wr.send_flags = 0;
 VAR_13->wr.num_sge = 0;
 VAR_13->mr = VAR_12;
 VAR_13->key = VAR_12->rkey;
 VAR_13->access = VAR_1 |
       VAR_3 |
       VAR_2;

 VAR_8->mr_valid = 1;

 VAR_9->sge.lkey = VAR_12->lkey;
 VAR_9->rkey = VAR_12->rkey;
 VAR_9->sge.addr = VAR_12->iova;
 VAR_9->sge.length = VAR_12->length;

 FUNC_3("lkey=0x%x rkey=0x%x addr=0x%llx length=0x%x\n",
   VAR_9->sge.lkey, VAR_9->rkey, VAR_9->sge.addr, VAR_9->sge.length);

 return 0;
}
