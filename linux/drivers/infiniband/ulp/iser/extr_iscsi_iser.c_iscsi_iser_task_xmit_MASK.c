
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data_length; } ;
struct iscsi_task {int itt; TYPE_1__ unsol_r2t; int imm_count; TYPE_2__* sc; struct iscsi_iser_task* dd_data; struct iscsi_conn* conn; } ;
struct iscsi_iser_task {int command_sent; } ;
struct iscsi_conn {int id; } ;
struct TYPE_4__ {scalar_t__ sc_data_direction; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_task*) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_task*) ;
 scalar_t__ FUNC_3 (struct iscsi_task*) ;
 int FUNC_4 (char*,int ,scalar_t__,...) ;
 int FUNC_5 (struct iscsi_conn*,struct iscsi_task*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_task *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_1->conn;
 struct iscsi_iser_task *VAR_3 = VAR_1->dd_data;
 int VAR_4 = 0;

 if (!VAR_1->sc)
  return FUNC_1(VAR_2, VAR_1);

 if (VAR_1->sc->sc_data_direction == VAR_0) {
  FUNC_0(FUNC_6(VAR_1->sc) == 0);

  FUNC_4("cmd [itt %x total %d imm %d unsol_data %d\n",
      VAR_1->itt, FUNC_6(VAR_1->sc),
      VAR_1->imm_count, VAR_1->unsol_r2t.data_length);
 }

 FUNC_4("ctask xmit [cid %d itt 0x%x]\n",
     VAR_2->id, VAR_1->itt);


 if (!VAR_3->command_sent) {
  VAR_4 = FUNC_5(VAR_2, VAR_1);
  if (VAR_4)
   goto iscsi_iser_task_xmit_exit;
  VAR_3->command_sent = 1;
 }


 if (FUNC_3(VAR_1))
  VAR_4 = FUNC_2(VAR_2, VAR_1);

 iscsi_iser_task_xmit_exit:
 return VAR_4;
}
