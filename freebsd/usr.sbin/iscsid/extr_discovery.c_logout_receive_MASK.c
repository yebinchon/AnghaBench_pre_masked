
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {TYPE_1__* pdu_bhs; } ;
struct iscsi_bhs_logout_response {int bhslr_statsn; int bhslr_response; } ;
struct connection {scalar_t__ conn_statsn; } ;
struct TYPE_2__ {scalar_t__ bhs_opcode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct pdu* FUNC_4 (struct connection*) ;
 int FUNC_5 (struct pdu*) ;

__attribute__((used)) static struct pdu *
FUNC_6(struct connection *VAR_2)
{
 struct pdu *VAR_3;
 struct iscsi_bhs_logout_response *VAR_4;

 VAR_3 = FUNC_4(VAR_2);
 FUNC_5(VAR_3);
 if (VAR_3->pdu_bhs->bhs_opcode != VAR_1)
  FUNC_0(1, "protocol error: received invalid opcode 0x%x",
      VAR_3->pdu_bhs->bhs_opcode);
 VAR_4 = (struct iscsi_bhs_logout_response *)VAR_3->pdu_bhs;
 if (FUNC_3(VAR_4->bhslr_response) != VAR_0)
  FUNC_1("received Logout Response with reason %d",
      FUNC_3(VAR_4->bhslr_response));
 if (FUNC_2(VAR_4->bhslr_statsn) != VAR_2->conn_statsn + 1) {
  FUNC_0(1, "received Logout PDU with wrong StatSN: "
      "is %u, should be %u", FUNC_2(VAR_4->bhslr_statsn),
      VAR_2->conn_statsn + 1);
 }
 VAR_2->conn_statsn = FUNC_2(VAR_4->bhslr_statsn);

 return (VAR_3);
}
