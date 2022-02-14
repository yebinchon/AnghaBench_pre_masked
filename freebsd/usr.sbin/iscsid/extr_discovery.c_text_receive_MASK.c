
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {TYPE_1__* pdu_bhs; } ;
struct iscsi_bhs_text_response {int bhstr_flags; int bhstr_statsn; } ;
struct connection {scalar_t__ conn_statsn; } ;
struct TYPE_2__ {scalar_t__ bhs_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 struct pdu* FUNC_2 (struct connection*) ;
 int FUNC_3 (struct pdu*) ;

__attribute__((used)) static struct pdu *
FUNC_4(struct connection *VAR_3)
{
 struct pdu *VAR_4;
 struct iscsi_bhs_text_response *VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 FUNC_3(VAR_4);
 if (VAR_4->pdu_bhs->bhs_opcode != VAR_2)
  FUNC_0(1, "protocol error: received invalid opcode 0x%x",
      VAR_4->pdu_bhs->bhs_opcode);
 VAR_5 = (struct iscsi_bhs_text_response *)VAR_4->pdu_bhs;







 if ((VAR_5->bhstr_flags & VAR_0) != 0)
  FUNC_0(1, "received Text PDU with unsupported \"C\" flag");
 if (FUNC_1(VAR_5->bhstr_statsn) != VAR_3->conn_statsn + 1) {
  FUNC_0(1, "received Text PDU with wrong StatSN: "
      "is %u, should be %u", FUNC_1(VAR_5->bhstr_statsn),
      VAR_3->conn_statsn + 1);
 }
 VAR_3->conn_statsn = FUNC_1(VAR_5->bhstr_statsn);

 return (VAR_4);
}
