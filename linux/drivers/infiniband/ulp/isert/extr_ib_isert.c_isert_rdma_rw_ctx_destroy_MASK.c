
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_cmd {int t_data_nents; int t_data_sg; int t_prot_nents; int t_prot_sg; } ;
struct isert_conn {TYPE_2__* cm_id; int qp; } ;
struct TYPE_7__ {scalar_t__ nr_ops; } ;
struct isert_cmd {TYPE_3__ rw; TYPE_1__* iscsi_cmd; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int port_num; } ;
struct TYPE_5__ {struct se_cmd se_cmd; } ;


 scalar_t__ FUNC_0 (struct isert_conn*,struct se_cmd*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct se_cmd*) ;

__attribute__((used)) static void
FUNC_4(struct isert_cmd *VAR_0, struct isert_conn *VAR_1)
{
 struct se_cmd *VAR_2 = &VAR_0->iscsi_cmd->se_cmd;
 enum dma_data_direction VAR_3 = FUNC_3(VAR_2);

 if (!VAR_0->rw.nr_ops)
  return;

 if (FUNC_0(VAR_1, VAR_2)) {
  FUNC_2(&VAR_0->rw, VAR_1->qp,
    VAR_1->cm_id->port_num, VAR_2->t_data_sg,
    VAR_2->t_data_nents, VAR_2->t_prot_sg,
    VAR_2->t_prot_nents, VAR_3);
 } else {
  FUNC_1(&VAR_0->rw, VAR_1->qp, VAR_1->cm_id->port_num,
    VAR_2->t_data_sg, VAR_2->t_data_nents, VAR_3);
 }

 VAR_0->rw.nr_ops = 0;
}
