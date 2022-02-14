
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ send_flags; scalar_t__ num_sge; struct ib_cqe* wr_cqe; int opcode; int * next; } ;
struct ib_sig_attrs {int access; int key; struct ib_mr* mr; TYPE_4__ wr; int check_mask; } ;
struct iser_tx_desc {int send_wr; int inv_wr; struct ib_sig_attrs reg_wr; } ;
struct iser_reg_resources {int mr_valid; struct ib_mr* sig_mr; } ;
struct TYPE_7__ {int length; int addr; int lkey; } ;
struct iser_mem_reg {TYPE_3__ sge; int rkey; } ;
struct iser_data_buf {scalar_t__ dma_nents; int sg; } ;
struct iscsi_iser_task {int sc; TYPE_2__* iser_conn; struct iser_tx_desc desc; } ;
struct ib_reg_wr {int access; int key; struct ib_mr* mr; TYPE_4__ wr; int check_mask; } ;
struct ib_mr {int length; int iova; int rkey; int lkey; struct ib_sig_attrs* sig_attrs; } ;
struct ib_cqe {int dummy; } ;
struct TYPE_5__ {struct ib_cqe reg_cqe; } ;
struct TYPE_6__ {TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_mr*,int ,scalar_t__,int *,int ,scalar_t__,int *,int ) ;
 int FUNC_2 (struct ib_mr*,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int *,struct ib_mr*,struct ib_cqe*,TYPE_4__*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,struct ib_sig_attrs*) ;
 int FUNC_8 (struct ib_sig_attrs*,int ,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct iscsi_iser_task *VAR_5,
  struct iser_data_buf *VAR_6,
  struct iser_data_buf *VAR_7,
  struct iser_reg_resources *VAR_8,
  struct iser_mem_reg *VAR_9)
{
 struct iser_tx_desc *VAR_10 = &VAR_5->desc;
 struct ib_cqe *VAR_11 = &VAR_5->iser_conn->ib_conn.reg_cqe;
 struct ib_mr *VAR_12 = VAR_8->sig_mr;
 struct ib_sig_attrs *VAR_13 = VAR_12->sig_attrs;
 struct ib_reg_wr *VAR_14 = &VAR_10->reg_wr;
 int VAR_15;

 FUNC_8(VAR_13, 0, sizeof(*VAR_13));
 VAR_15 = FUNC_7(VAR_5->sc, VAR_13);
 if (VAR_15)
  goto err;

 FUNC_6(VAR_5->sc, &VAR_13->check_mask);

 if (VAR_8->mr_valid)
  FUNC_5(&VAR_10->inv_wr, VAR_12, VAR_11, &VAR_14->wr);

 FUNC_2(VAR_12, FUNC_0(VAR_12->rkey));

 VAR_15 = FUNC_1(VAR_12, VAR_6->sg, VAR_6->dma_nents, ((void*)0),
         VAR_7->sg, VAR_7->dma_nents, ((void*)0), VAR_4);
 if (FUNC_9(VAR_15)) {
  FUNC_4("failed to map PI sg (%d)\n",
    VAR_6->dma_nents + VAR_7->dma_nents);
  goto err;
 }

 FUNC_8(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->wr.next = &VAR_10->send_wr;
 VAR_14->wr.opcode = VAR_3;
 VAR_14->wr.wr_cqe = VAR_11;
 VAR_14->wr.num_sge = 0;
 VAR_14->wr.send_flags = 0;
 VAR_14->mr = VAR_12;
 VAR_14->key = VAR_12->rkey;
 VAR_14->access = VAR_0 |
       VAR_1 |
       VAR_2;
 VAR_8->mr_valid = 1;

 VAR_9->sge.lkey = VAR_12->lkey;
 VAR_9->rkey = VAR_12->rkey;
 VAR_9->sge.addr = VAR_12->iova;
 VAR_9->sge.length = VAR_12->length;

 FUNC_3("lkey=0x%x rkey=0x%x addr=0x%llx length=%u\n",
   VAR_9->sge.lkey, VAR_9->rkey, VAR_9->sge.addr,
   VAR_9->sge.length);
err:
 return VAR_15;
}
