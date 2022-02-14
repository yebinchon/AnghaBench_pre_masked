
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; struct connection* pdu_connection; } ;
struct iscsi_bhs_text_response {void* bhstr_maxcmdsn; void* bhstr_expcmdsn; void* bhstr_statsn; int bhstr_target_transfer_tag; int bhstr_initiator_task_tag; int bhstr_lun; int bhstr_flags; int bhstr_opcode; } ;
struct iscsi_bhs_text_request {int bhstr_target_transfer_tag; int bhstr_initiator_task_tag; int bhstr_lun; } ;
struct connection {int conn_cmdsn; int conn_statsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 struct pdu* FUNC_1 (struct pdu*) ;

__attribute__((used)) static struct pdu *
FUNC_2(struct pdu *VAR_2)
{
 struct pdu *VAR_3;
 struct connection *VAR_4;
 struct iscsi_bhs_text_request *VAR_5;
 struct iscsi_bhs_text_response *VAR_6;

 VAR_5 = (struct iscsi_bhs_text_request *)VAR_2->pdu_bhs;
 VAR_4 = VAR_2->pdu_connection;

 VAR_3 = FUNC_1(VAR_2);
 VAR_6 = (struct iscsi_bhs_text_response *)VAR_3->pdu_bhs;
 VAR_6->bhstr_opcode = VAR_1;
 VAR_6->bhstr_flags = VAR_0;
 VAR_6->bhstr_lun = VAR_5->bhstr_lun;
 VAR_6->bhstr_initiator_task_tag = VAR_5->bhstr_initiator_task_tag;
 VAR_6->bhstr_target_transfer_tag = VAR_5->bhstr_target_transfer_tag;
 VAR_6->bhstr_statsn = FUNC_0(VAR_4->conn_statsn++);
 VAR_6->bhstr_expcmdsn = FUNC_0(VAR_4->conn_cmdsn);
 VAR_6->bhstr_maxcmdsn = FUNC_0(VAR_4->conn_cmdsn);

 return (VAR_3);
}
