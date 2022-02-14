
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int dummy; } ;
struct isert_cmd {struct iser_rx_desc* rx_desc; struct iscsi_cmd* iscsi_cmd; struct isert_conn* conn; } ;
struct iser_rx_desc {int dummy; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct iscsi_cmd {int dummy; } ;


 int VAR_0 ;
 struct iscsi_cmd* FUNC_0 (struct iscsi_conn*,int ) ;
 struct isert_cmd* FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct iscsi_cmd
*FUNC_3(struct iscsi_conn *VAR_1, struct iser_rx_desc *VAR_2)
{
 struct isert_conn *VAR_3 = VAR_1->context;
 struct isert_cmd *VAR_4;
 struct iscsi_cmd *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_5) {
  FUNC_2("Unable to allocate iscsi_cmd + isert_cmd\n");
  return ((void*)0);
 }
 VAR_4 = FUNC_1(VAR_5);
 VAR_4->conn = VAR_3;
 VAR_4->iscsi_cmd = VAR_5;
 VAR_4->rx_desc = VAR_2;

 return VAR_5;
}
