
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct se_cmd {int t_data_nents; int t_data_sg; int t_prot_nents; int t_prot_sg; } ;
struct isert_conn {int qp; TYPE_1__* cm_id; } ;
struct isert_cmd {int ctx_init_done; int rw; scalar_t__ read_stag; int read_va; TYPE_2__* iscsi_cmd; scalar_t__ write_stag; int write_va; } ;
struct ib_sig_attrs {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct ib_cqe {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {scalar_t__ write_data_done; struct se_cmd se_cmd; } ;
struct TYPE_3__ {int port_num; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,struct isert_cmd*) ;
 scalar_t__ FUNC_2 (struct isert_conn*,struct se_cmd*) ;
 int FUNC_3 (struct se_cmd*,struct ib_sig_attrs*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_5 (int *,int ,int ,struct ib_cqe*,struct ib_send_wr*) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int ,struct ib_sig_attrs*,int ,scalar_t__,int) ;
 int FUNC_7 (struct se_cmd*) ;

__attribute__((used)) static int
FUNC_8(struct isert_cmd *VAR_1, struct isert_conn *VAR_2,
  struct ib_cqe *VAR_3, struct ib_send_wr *VAR_4)
{
 struct se_cmd *VAR_5 = &VAR_1->iscsi_cmd->se_cmd;
 enum dma_data_direction VAR_6 = FUNC_7(VAR_5);
 u8 VAR_7 = VAR_2->cm_id->port_num;
 u64 VAR_8;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if (VAR_1->ctx_init_done)
  goto rdma_ctx_post;

 if (VAR_6 == VAR_0) {
  VAR_8 = VAR_1->write_va;
  VAR_9 = VAR_1->write_stag;
  VAR_10 = VAR_1->iscsi_cmd->write_data_done;
 } else {
  VAR_8 = VAR_1->read_va;
  VAR_9 = VAR_1->read_stag;
  VAR_10 = 0;
 }

 if (FUNC_2(VAR_2, VAR_5)) {
  struct ib_sig_attrs VAR_12;

  VAR_11 = FUNC_3(VAR_5, &VAR_12);
  if (VAR_11)
   return VAR_11;

  FUNC_0(VAR_10);
  VAR_11 = FUNC_6(&VAR_1->rw, VAR_2->qp, VAR_7,
    VAR_5->t_data_sg, VAR_5->t_data_nents,
    VAR_5->t_prot_sg, VAR_5->t_prot_nents,
    &VAR_12, VAR_8, VAR_9, VAR_6);
 } else {
  VAR_11 = FUNC_4(&VAR_1->rw, VAR_2->qp, VAR_7,
    VAR_5->t_data_sg, VAR_5->t_data_nents,
    VAR_10, VAR_8, VAR_9, VAR_6);
 }

 if (VAR_11 < 0) {
  FUNC_1("Cmd: %p failed to prepare RDMA res\n", VAR_1);
  return VAR_11;
 }

 VAR_1->ctx_init_done = 1;

rdma_ctx_post:
 VAR_11 = FUNC_5(&VAR_1->rw, VAR_2->qp, VAR_7, VAR_3, VAR_4);
 if (VAR_11 < 0)
  FUNC_1("Cmd: %p failed to post RDMA res\n", VAR_1);
 return VAR_11;
}
