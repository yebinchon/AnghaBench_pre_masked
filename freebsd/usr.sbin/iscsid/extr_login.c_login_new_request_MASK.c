
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_login_request {int bhslr_opcode; int bhslr_expstatsn; scalar_t__ bhslr_cmdsn; scalar_t__ bhslr_initiator_task_tag; int bhslr_tsih; int bhslr_isid; int bhslr_flags; } ;
struct connection {scalar_t__ conn_statsn; int conn_tsih; int conn_isid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (struct pdu*,int) ;
 int FUNC_5 (struct pdu*,int) ;
 int FUNC_6 (int ,int *,int) ;
 struct pdu* FUNC_7 (struct connection*) ;

__attribute__((used)) static struct pdu *
FUNC_8(struct connection *VAR_4, int VAR_5)
{
 struct pdu *VAR_6;
 struct iscsi_bhs_login_request *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(VAR_4);
 VAR_7 = (struct iscsi_bhs_login_request *)VAR_6->pdu_bhs;
 VAR_7->bhslr_opcode = VAR_3 |
     VAR_2;

 VAR_7->bhslr_flags = VAR_0;
 switch (VAR_5) {
 case 128:
  VAR_8 = 129;
  break;
 case 129:
  VAR_8 = VAR_1;
  break;
 default:
  FUNC_0(!"invalid csg");
  FUNC_3(1, "invalid csg %d", VAR_5);
 }
 FUNC_4(VAR_6, VAR_5);
 FUNC_5(VAR_6, VAR_8);

 FUNC_6(VAR_7->bhslr_isid, &VAR_4->conn_isid, sizeof(VAR_7->bhslr_isid));
 VAR_7->bhslr_tsih = FUNC_2(VAR_4->conn_tsih);
 VAR_7->bhslr_initiator_task_tag = 0;
 VAR_7->bhslr_cmdsn = 0;
 VAR_7->bhslr_expstatsn = FUNC_1(VAR_4->conn_statsn + 1);

 return (VAR_6);
}
