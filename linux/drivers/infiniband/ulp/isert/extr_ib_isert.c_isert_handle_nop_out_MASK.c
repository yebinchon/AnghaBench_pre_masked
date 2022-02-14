
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {struct iscsi_conn* conn; } ;
struct isert_cmd {int dummy; } ;
struct iser_rx_desc {int dummy; } ;
struct iscsi_nopout {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int dummy; } ;


 int FUNC_0 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_nopout*) ;
 int FUNC_1 (struct iscsi_conn*,struct iscsi_cmd*,struct iscsi_nopout*) ;

__attribute__((used)) static int
FUNC_2(struct isert_conn *VAR_0, struct isert_cmd *VAR_1,
       struct iscsi_cmd *VAR_2, struct iser_rx_desc *VAR_3,
       unsigned char *VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_0->conn;
 struct iscsi_nopout *VAR_6 = (struct iscsi_nopout *)VAR_4;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;




 return FUNC_0(VAR_5, VAR_2, VAR_6);
}
