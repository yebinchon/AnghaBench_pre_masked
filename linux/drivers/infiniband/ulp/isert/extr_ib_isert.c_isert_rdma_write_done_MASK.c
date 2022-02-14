
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_cmd {int pi_err; int cmd_kref; } ;
struct isert_device {int ib_device; } ;
struct isert_conn {int conn; struct isert_device* device; } ;
struct TYPE_7__ {TYPE_2__* reg; } ;
struct isert_cmd {TYPE_4__* iscsi_cmd; TYPE_3__ rw; } ;
struct iser_tx_desc {int dummy; } ;
struct ib_wc {scalar_t__ status; int wr_cqe; TYPE_1__* qp; } ;
struct ib_cq {int dummy; } ;
struct TYPE_8__ {struct se_cmd se_cmd; } ;
struct TYPE_6__ {int mr; } ;
struct TYPE_5__ {struct isert_conn* qp_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iser_tx_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct se_cmd*,int ) ;
 int FUNC_3 (struct iser_tx_desc*,struct isert_cmd*,int ,int) ;
 int FUNC_4 (char*,struct isert_cmd*) ;
 int FUNC_5 (struct ib_wc*,char*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (struct isert_cmd*,struct isert_conn*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct se_cmd*,int ) ;
 struct isert_cmd* FUNC_11 (struct iser_tx_desc*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct ib_cq *VAR_2, struct ib_wc *VAR_3)
{
 struct isert_conn *VAR_4 = VAR_3->qp->qp_context;
 struct isert_device *VAR_5 = VAR_4->device;
 struct iser_tx_desc *VAR_6 = FUNC_0(VAR_3->wr_cqe);
 struct isert_cmd *VAR_7 = FUNC_11(VAR_6);
 struct se_cmd *VAR_8 = &VAR_7->iscsi_cmd->se_cmd;
 int VAR_9 = 0;

 if (FUNC_12(VAR_3->status != VAR_0)) {
  FUNC_5(VAR_3, "rdma write");
  if (VAR_3->status != VAR_1)
   FUNC_1(VAR_4->conn, 0);
  FUNC_3(VAR_6, VAR_7, VAR_5->ib_device, 1);
  return;
 }

 FUNC_4("Cmd %p\n", VAR_7);

 VAR_9 = FUNC_2(VAR_8, VAR_7->rw.reg->mr);
 FUNC_7(VAR_7, VAR_4);

 if (VAR_9) {






  FUNC_8(&VAR_8->cmd_kref);
  FUNC_10(VAR_8, VAR_8->pi_err);
 } else {



  VAR_9 = FUNC_6(VAR_4->conn, VAR_7->iscsi_cmd);
  if (VAR_9)
   FUNC_9("isert_put_response() ret: %d\n", VAR_9);
 }
}
