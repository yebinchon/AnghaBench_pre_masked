
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_cmd {int dummy; } ;
struct iscsi_conn {int cmd_lock; } ;
struct iscsi_cmd {int i_conn_node; } ;


 int VAR_0 ;


 struct isert_cmd* FUNC_0 (struct iscsi_cmd*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct isert_cmd*,int) ;
 int FUNC_3 (struct iscsi_cmd*,struct iscsi_conn*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_conn *VAR_1, struct iscsi_cmd *VAR_2, int VAR_3)
{
 struct isert_cmd *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 switch (VAR_3) {
 case 129:
  FUNC_5(&VAR_1->cmd_lock);
  FUNC_4(&VAR_2->i_conn_node);
  FUNC_6(&VAR_1->cmd_lock);
  FUNC_2(VAR_4, 1);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_2, VAR_1, 0);
  break;
 default:
  FUNC_1("Unknown immediate state: 0x%02x\n", VAR_3);
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
