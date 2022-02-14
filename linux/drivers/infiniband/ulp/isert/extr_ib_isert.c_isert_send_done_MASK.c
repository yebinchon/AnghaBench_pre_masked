
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isert_conn {int conn; TYPE_2__* cm_id; } ;
struct isert_cmd {TYPE_3__* iscsi_cmd; int comp_work; } ;
struct iser_tx_desc {int dummy; } ;
struct ib_wc {scalar_t__ status; int wr_cqe; TYPE_1__* qp; } ;
struct ib_device {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_6__ {int i_state; } ;
struct TYPE_5__ {struct ib_device* device; } ;
struct TYPE_4__ {struct isert_conn* qp_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;




 int VAR_2 ;
 struct iser_tx_desc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct iser_tx_desc*,struct isert_cmd*,struct ib_device*,int) ;
 int FUNC_4 (char*,struct isert_cmd*) ;
 int VAR_4 ;
 int FUNC_5 (struct ib_wc*,char*) ;
 int FUNC_6 (struct iser_tx_desc*,struct ib_device*) ;
 int FUNC_7 (int ,int *) ;
 struct isert_cmd* FUNC_8 (struct iser_tx_desc*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct ib_cq *VAR_5, struct ib_wc *VAR_6)
{
 struct isert_conn *VAR_7 = VAR_6->qp->qp_context;
 struct ib_device *VAR_8 = VAR_7->cm_id->device;
 struct iser_tx_desc *VAR_9 = FUNC_1(VAR_6->wr_cqe);
 struct isert_cmd *VAR_10 = FUNC_8(VAR_9);

 if (FUNC_9(VAR_6->status != VAR_0)) {
  FUNC_5(VAR_6, "send");
  if (VAR_6->status != VAR_1)
   FUNC_2(VAR_7->conn, 0);
  FUNC_3(VAR_9, VAR_10, VAR_8, 1);
  return;
 }

 FUNC_4("Cmd %p\n", VAR_10);

 switch (VAR_10->iscsi_cmd->i_state) {
 case 129:
 case 131:
 case 130:
 case 128:
  FUNC_6(VAR_9, VAR_8);

  FUNC_0(&VAR_10->comp_work, VAR_4);
  FUNC_7(VAR_3, &VAR_10->comp_work);
  return;
 default:
  VAR_10->iscsi_cmd->i_state = VAR_2;
  FUNC_3(VAR_9, VAR_10, VAR_8, 0);
  break;
 }
}
