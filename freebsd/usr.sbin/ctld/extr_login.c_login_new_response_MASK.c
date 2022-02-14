
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; struct connection* pdu_connection; } ;
struct iscsi_bhs_login_response {void* bhslr_maxcmdsn; void* bhslr_expcmdsn; void* bhslr_statsn; int bhslr_initiator_task_tag; int bhslr_isid; int bhslr_opcode; } ;
struct iscsi_bhs_login_request {int bhslr_initiator_task_tag; int bhslr_isid; } ;
struct connection {int conn_cmdsn; int conn_statsn; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct pdu*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct pdu* FUNC_3 (struct pdu*) ;

__attribute__((used)) static struct pdu *
FUNC_4(struct pdu *VAR_2)
{
 struct pdu *VAR_3;
 struct connection *VAR_4;
 struct iscsi_bhs_login_request *VAR_5;
 struct iscsi_bhs_login_response *VAR_6;

 VAR_5 = (struct iscsi_bhs_login_request *)VAR_2->pdu_bhs;
 VAR_4 = VAR_2->pdu_connection;

 VAR_3 = FUNC_3(VAR_2);
 VAR_6 = (struct iscsi_bhs_login_response *)VAR_3->pdu_bhs;
 VAR_6->bhslr_opcode = VAR_1;
 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_6->bhslr_isid,
     VAR_5->bhslr_isid, sizeof(VAR_6->bhslr_isid));
 VAR_6->bhslr_initiator_task_tag = VAR_5->bhslr_initiator_task_tag;
 VAR_6->bhslr_statsn = FUNC_0(VAR_4->conn_statsn++);
 VAR_6->bhslr_expcmdsn = FUNC_0(VAR_4->conn_cmdsn);
 VAR_6->bhslr_maxcmdsn = FUNC_0(VAR_4->conn_cmdsn);

 return (VAR_3);
}
