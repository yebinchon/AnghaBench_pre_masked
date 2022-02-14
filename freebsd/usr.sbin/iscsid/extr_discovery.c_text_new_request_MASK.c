
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_text_request {int bhstr_opcode; int bhstr_target_transfer_tag; int bhstr_expstatsn; scalar_t__ bhstr_cmdsn; scalar_t__ bhstr_initiator_task_tag; int bhstr_flags; } ;
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
 struct iscsi_bhs_text_request *VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = (struct iscsi_bhs_text_request *)VAR_4->pdu_bhs;
 VAR_5->bhstr_opcode = VAR_2 |
     VAR_1;
 VAR_5->bhstr_flags = VAR_0;
 VAR_5->bhstr_initiator_task_tag = 0;
 VAR_5->bhstr_target_transfer_tag = 0xffffffff;

 VAR_5->bhstr_initiator_task_tag = 0;
 VAR_5->bhstr_cmdsn = 0;
 VAR_5->bhstr_expstatsn = FUNC_0(VAR_3->conn_statsn + 1);

 return (VAR_4);
}
