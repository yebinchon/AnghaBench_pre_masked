
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct keys {int dummy; } ;
struct iscsi_bhs_login_response {int bhslr_status_class; int bhslr_status_detail; } ;


 int FUNC_0 (struct keys*,char*,char const*) ;
 int FUNC_1 (struct keys*) ;
 struct keys* FUNC_2 () ;
 int FUNC_3 (struct keys*,struct pdu*) ;
 int FUNC_4 (struct pdu*) ;
 struct pdu* FUNC_5 (struct pdu*) ;
 int FUNC_6 (struct pdu*,int ) ;
 int FUNC_7 (struct pdu*) ;
 int FUNC_8 (struct pdu*) ;

__attribute__((used)) static void
FUNC_9(struct pdu *VAR_0, const char *VAR_1)
{
 struct pdu *VAR_2;
 struct iscsi_bhs_login_response *VAR_3;
 struct keys *VAR_4;

 VAR_2 = FUNC_5(VAR_0);
 FUNC_6(VAR_2, FUNC_4(VAR_0));
 VAR_3 = (struct iscsi_bhs_login_response *)VAR_2->pdu_bhs;
 VAR_3->bhslr_status_class = 0x01;
 VAR_3->bhslr_status_detail = 0x01;

 VAR_4 = FUNC_2();
 FUNC_0(VAR_4, "TargetAddress", VAR_1);

 FUNC_3(VAR_4, VAR_2);
 FUNC_8(VAR_2);
 FUNC_7(VAR_2);
 FUNC_1(VAR_4);
}
