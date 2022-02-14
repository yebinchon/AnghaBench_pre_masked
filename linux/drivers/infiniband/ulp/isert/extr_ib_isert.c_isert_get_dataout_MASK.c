
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int done; } ;
struct TYPE_5__ {TYPE_3__ tx_cqe; } ;
struct isert_cmd {TYPE_2__ tx_desc; } ;
struct iscsi_conn {int context; } ;
struct TYPE_4__ {int data_length; } ;
struct iscsi_cmd {int write_data_done; TYPE_1__ se_cmd; } ;


 struct isert_cmd* FUNC_0 (struct iscsi_cmd*) ;
 int FUNC_1 (char*,struct isert_cmd*,int,...) ;
 int VAR_0 ;
 int FUNC_2 (struct isert_cmd*,int ,TYPE_3__*,int *) ;

__attribute__((used)) static int
FUNC_3(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2, bool VAR_3)
{
 struct isert_cmd *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 FUNC_1("Cmd: %p RDMA_READ data_length: %u write_data_done: %u\n",
   VAR_4, VAR_2->se_cmd.data_length, VAR_2->write_data_done);

 VAR_4->tx_desc.tx_cqe.done = VAR_0;
 VAR_5 = FUNC_2(VAR_4, VAR_1->context,
         &VAR_4->tx_desc.tx_cqe, ((void*)0));

 FUNC_1("Cmd: %p posted RDMA_READ memory for ISER Data WRITE rc: %d\n",
   VAR_4, VAR_5);
 return VAR_5;
}
