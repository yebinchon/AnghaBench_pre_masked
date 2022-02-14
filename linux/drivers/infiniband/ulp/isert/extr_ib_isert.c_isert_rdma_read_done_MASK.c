
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_cmd {int pi_err; } ;
struct isert_device {int ib_device; } ;
struct isert_conn {int conn; struct isert_device* device; } ;
struct TYPE_6__ {TYPE_2__* reg; } ;
struct isert_cmd {TYPE_3__ rw; struct iscsi_cmd* iscsi_cmd; } ;
struct iser_tx_desc {int dummy; } ;
struct iscsi_cmd {int istate_lock; int i_state; int cmd_flags; scalar_t__ write_data_done; struct se_cmd se_cmd; } ;
struct ib_wc {scalar_t__ status; int wr_cqe; TYPE_1__* qp; } ;
struct ib_cq {int dummy; } ;
struct TYPE_5__ {int mr; } ;
struct TYPE_4__ {struct isert_conn* qp_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iser_tx_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct iscsi_cmd*) ;
 int FUNC_3 (struct se_cmd*,int ) ;
 int FUNC_4 (struct iser_tx_desc*,struct isert_cmd*,int ,int) ;
 int FUNC_5 (char*,struct isert_cmd*) ;
 int FUNC_6 (struct ib_wc*,char*) ;
 scalar_t__ FUNC_7 (struct isert_conn*,struct se_cmd*) ;
 int FUNC_8 (struct isert_cmd*,struct isert_conn*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct se_cmd*) ;
 int FUNC_12 (struct se_cmd*,int ) ;
 struct isert_cmd* FUNC_13 (struct iser_tx_desc*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct ib_cq *VAR_4, struct ib_wc *VAR_5)
{
 struct isert_conn *VAR_6 = VAR_5->qp->qp_context;
 struct isert_device *VAR_7 = VAR_6->device;
 struct iser_tx_desc *VAR_8 = FUNC_0(VAR_5->wr_cqe);
 struct isert_cmd *VAR_9 = FUNC_13(VAR_8);
 struct iscsi_cmd *VAR_10 = VAR_9->iscsi_cmd;
 struct se_cmd *VAR_11 = &VAR_10->se_cmd;
 int VAR_12 = 0;

 if (FUNC_14(VAR_5->status != VAR_0)) {
  FUNC_6(VAR_5, "rdma read");
  if (VAR_5->status != VAR_1)
   FUNC_1(VAR_6->conn, 0);
  FUNC_4(VAR_8, VAR_9, VAR_7->ib_device, 1);
  return;
 }

 FUNC_5("Cmd %p\n", VAR_9);

 FUNC_2(VAR_10);

 if (FUNC_7(VAR_6, VAR_11))
  VAR_12 = FUNC_3(VAR_11, VAR_9->rw.reg->mr);
 FUNC_8(VAR_9, VAR_6);
 VAR_10->write_data_done = 0;

 FUNC_5("Cmd: %p RDMA_READ comp calling execute_cmd\n", VAR_9);
 FUNC_9(&VAR_10->istate_lock);
 VAR_10->cmd_flags |= VAR_2;
 VAR_10->i_state = VAR_3;
 FUNC_10(&VAR_10->istate_lock);






 if (VAR_12)
  FUNC_12(VAR_11, VAR_11->pi_err);
 else
  FUNC_11(VAR_11);
}
