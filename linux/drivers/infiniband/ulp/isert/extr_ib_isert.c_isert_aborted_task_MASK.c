
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int dummy; } ;
struct isert_cmd {int dummy; } ;
struct iscsi_conn {int cmd_lock; struct isert_conn* context; } ;
struct iscsi_cmd {scalar_t__ data_direction; int i_conn_node; } ;


 scalar_t__ VAR_0 ;
 struct isert_cmd* FUNC_0 (struct iscsi_cmd*) ;
 int FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (struct isert_cmd*,struct isert_conn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2)
{
 struct isert_cmd *VAR_3 = FUNC_0(VAR_2);
 struct isert_conn *VAR_4 = VAR_1->context;

 FUNC_5(&VAR_1->cmd_lock);
 if (!FUNC_4(&VAR_2->i_conn_node))
  FUNC_3(&VAR_2->i_conn_node);
 FUNC_6(&VAR_1->cmd_lock);

 if (VAR_2->data_direction == VAR_0)
  FUNC_1(VAR_2);
 FUNC_2(VAR_3, VAR_4);
}
