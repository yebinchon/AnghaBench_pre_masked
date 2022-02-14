
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_login_response {char bhslr_status_class; char bhslr_status_detail; } ;


 int FUNC_0 (char*,char,char) ;
 struct pdu* FUNC_1 (struct pdu*) ;
 int FUNC_2 (struct pdu*) ;
 int FUNC_3 (struct pdu*) ;

__attribute__((used)) static void
FUNC_4(struct pdu *VAR_0, char VAR_1, char VAR_2)
{
 struct pdu *VAR_3;
 struct iscsi_bhs_login_response *VAR_4;

 FUNC_0("sending Login Response PDU with failure class 0x%x/0x%x; "
     "see next line for reason", VAR_1, VAR_2);
 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = (struct iscsi_bhs_login_response *)VAR_3->pdu_bhs;
 VAR_4->bhslr_status_class = VAR_1;
 VAR_4->bhslr_status_detail = VAR_2;

 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
}
