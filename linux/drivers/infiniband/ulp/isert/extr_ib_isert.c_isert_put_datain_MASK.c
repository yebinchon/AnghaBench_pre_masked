
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct se_cmd {int data_length; } ;
struct isert_conn {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct ib_cqe {int done; } ;
struct TYPE_3__ {struct ib_send_wr send_wr; int iscsi_header; struct ib_cqe tx_cqe; } ;
struct isert_cmd {TYPE_1__ tx_desc; int rx_desc; } ;
struct iscsi_scsi_rsp {int dummy; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct iscsi_cmd {struct se_cmd se_cmd; } ;


 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,int,struct iscsi_scsi_rsp*) ;
 struct isert_cmd* FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (struct isert_conn*,struct isert_cmd*,TYPE_1__*) ;
 int FUNC_3 (char*,struct isert_cmd*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct isert_conn*,struct isert_cmd*,struct ib_send_wr*) ;
 int FUNC_6 (struct isert_conn*,TYPE_1__*) ;
 int FUNC_7 (struct isert_conn*,int ) ;
 scalar_t__ FUNC_8 (struct isert_conn*,struct se_cmd*) ;
 int FUNC_9 (struct isert_cmd*,struct isert_conn*,struct ib_cqe*,struct ib_send_wr*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_10(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2)
{
 struct se_cmd *VAR_3 = &VAR_2->se_cmd;
 struct isert_cmd *VAR_4 = FUNC_1(VAR_2);
 struct isert_conn *VAR_5 = VAR_1->context;
 struct ib_cqe *VAR_6 = ((void*)0);
 struct ib_send_wr *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_3("Cmd: %p RDMA_WRITE data_length: %u\n",
   VAR_4, VAR_3->data_length);

 if (FUNC_8(VAR_5, VAR_3)) {
  VAR_4->tx_desc.tx_cqe.done = VAR_0;
  VAR_6 = &VAR_4->tx_desc.tx_cqe;
 } else {



  FUNC_2(VAR_5, VAR_4,
           &VAR_4->tx_desc);
  FUNC_0(VAR_2, VAR_1, 1, (struct iscsi_scsi_rsp *)
         &VAR_4->tx_desc.iscsi_header);
  FUNC_6(VAR_5, &VAR_4->tx_desc);
  FUNC_5(VAR_5, VAR_4,
       &VAR_4->tx_desc.send_wr);

  VAR_8 = FUNC_7(VAR_5, VAR_4->rx_desc);
  if (VAR_8) {
   FUNC_4("ib_post_recv failed with %d\n", VAR_8);
   return VAR_8;
  }

  VAR_7 = &VAR_4->tx_desc.send_wr;
 }

 VAR_8 = FUNC_9(VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_3("Cmd: %p posted RDMA_WRITE for iSER Data READ rc: %d\n",
    VAR_4, VAR_8);
 return VAR_8;
}
