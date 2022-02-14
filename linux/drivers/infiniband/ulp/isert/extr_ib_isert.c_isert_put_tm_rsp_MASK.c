
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct isert_conn {int dummy; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_3__ {int iscsi_header; struct ib_send_wr send_wr; } ;
struct isert_cmd {TYPE_1__ tx_desc; } ;
struct iscsi_tm_rsp {int dummy; } ;
struct iscsi_conn {struct isert_conn* context; } ;
struct iscsi_cmd {int dummy; } ;


 int FUNC_0 (struct iscsi_cmd*,struct iscsi_conn*,struct iscsi_tm_rsp*) ;
 struct isert_cmd* FUNC_1 (struct iscsi_cmd*) ;
 int FUNC_2 (struct isert_conn*,struct isert_cmd*,TYPE_1__*) ;
 int FUNC_3 (char*,struct isert_conn*) ;
 int FUNC_4 (struct isert_conn*,struct isert_cmd*,struct ib_send_wr*) ;
 int FUNC_5 (struct isert_conn*,TYPE_1__*) ;
 int FUNC_6 (struct isert_conn*,struct isert_cmd*) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_cmd *VAR_0, struct iscsi_conn *VAR_1)
{
 struct isert_cmd *VAR_2 = FUNC_1(VAR_0);
 struct isert_conn *VAR_3 = VAR_1->context;
 struct ib_send_wr *VAR_4 = &VAR_2->tx_desc.send_wr;

 FUNC_2(VAR_3, VAR_2, &VAR_2->tx_desc);
 FUNC_0(VAR_0, VAR_1, (struct iscsi_tm_rsp *)
      &VAR_2->tx_desc.iscsi_header);
 FUNC_5(VAR_3, &VAR_2->tx_desc);
 FUNC_4(VAR_3, VAR_2, VAR_4);

 FUNC_3("conn %p Posting Task Management Response\n", VAR_3);

 return FUNC_6(VAR_3, VAR_2);
}
