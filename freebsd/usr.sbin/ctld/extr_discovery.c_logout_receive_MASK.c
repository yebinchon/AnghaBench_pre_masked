
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pdu {TYPE_1__* pdu_bhs; } ;
struct iscsi_bhs_logout_request {int bhslr_reason; int bhslr_opcode; int bhslr_cmdsn; int bhslr_expstatsn; } ;
struct connection {int conn_cmdsn; int conn_statsn; } ;
struct TYPE_2__ {int bhs_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int,char*,int,...) ;
 int FUNC_3 (int ) ;
 struct pdu* FUNC_4 (struct connection*) ;
 int FUNC_5 (struct pdu*) ;

__attribute__((used)) static struct pdu *
FUNC_6(struct connection *VAR_3)
{
 struct pdu *VAR_4;
 struct iscsi_bhs_logout_request *VAR_5;

 VAR_4 = FUNC_4(VAR_3);
 FUNC_5(VAR_4);
 if ((VAR_4->pdu_bhs->bhs_opcode & ~VAR_1) !=
     VAR_2)
  FUNC_2(1, "protocol error: received invalid opcode 0x%x",
      VAR_4->pdu_bhs->bhs_opcode);
 VAR_5 = (struct iscsi_bhs_logout_request *)VAR_4->pdu_bhs;
 if ((VAR_5->bhslr_reason & 0x7f) != VAR_0)
  FUNC_1("received Logout PDU with invalid reason 0x%x; "
      "continuing anyway", VAR_5->bhslr_reason & 0x7f);
 if (FUNC_0(FUNC_3(VAR_5->bhslr_cmdsn), VAR_3->conn_cmdsn)) {
  FUNC_2(1, "received Logout PDU with decreasing CmdSN: "
      "was %u, is %u", VAR_3->conn_cmdsn,
      FUNC_3(VAR_5->bhslr_cmdsn));
 }
 if (FUNC_3(VAR_5->bhslr_expstatsn) != VAR_3->conn_statsn) {
  FUNC_2(1, "received Logout PDU with wrong ExpStatSN: "
      "is %u, should be %u", FUNC_3(VAR_5->bhslr_expstatsn),
      VAR_3->conn_statsn);
 }
 VAR_3->conn_cmdsn = FUNC_3(VAR_5->bhslr_cmdsn);
 if ((VAR_5->bhslr_opcode & VAR_1) == 0)
  VAR_3->conn_cmdsn++;

 return (VAR_4);
}
