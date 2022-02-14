
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_logout_request {int bhslr_opcode; int bhslr_reason; int bhslr_expstatsn; scalar_t__ bhslr_cmdsn; scalar_t__ bhslr_initiator_task_tag; } ;
struct connection {scalar_t__ conn_statsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 struct pdu* FUNC_1 (struct connection*) ;

__attribute__((used)) static struct pdu *
FUNC_2(struct connection *VAR_3)
{
 struct pdu *VAR_4;
 struct iscsi_bhs_logout_request *VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = (struct iscsi_bhs_logout_request *)VAR_4->pdu_bhs;
 VAR_5->bhslr_opcode = VAR_2 |
     VAR_1;
 VAR_5->bhslr_reason = VAR_0;
 VAR_5->bhslr_reason |= 0x80;
 VAR_5->bhslr_initiator_task_tag = 0;
 VAR_5->bhslr_cmdsn = 0;
 VAR_5->bhslr_expstatsn = FUNC_0(VAR_3->conn_statsn + 1);

 return (VAR_4);
}
