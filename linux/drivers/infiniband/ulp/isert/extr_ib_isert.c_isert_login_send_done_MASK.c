
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isert_conn {int conn; TYPE_2__* cm_id; } ;
struct iser_tx_desc {int dummy; } ;
struct ib_wc {scalar_t__ status; int wr_cqe; TYPE_1__* qp; } ;
struct ib_device {int dummy; } ;
struct ib_cq {int dummy; } ;
struct TYPE_4__ {struct ib_device* device; } ;
struct TYPE_3__ {struct isert_conn* qp_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct iser_tx_desc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ib_wc*,char*) ;
 int FUNC_3 (struct iser_tx_desc*,struct ib_device*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ib_cq *VAR_2, struct ib_wc *VAR_3)
{
 struct isert_conn *VAR_4 = VAR_3->qp->qp_context;
 struct ib_device *VAR_5 = VAR_4->cm_id->device;
 struct iser_tx_desc *VAR_6 = FUNC_0(VAR_3->wr_cqe);

 if (FUNC_4(VAR_3->status != VAR_0)) {
  FUNC_2(VAR_3, "login send");
  if (VAR_3->status != VAR_1)
   FUNC_1(VAR_4->conn, 0);
 }

 FUNC_3(VAR_6, VAR_5);
}
