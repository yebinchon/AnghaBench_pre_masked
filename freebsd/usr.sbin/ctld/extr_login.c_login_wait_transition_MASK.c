
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_login_request {int bhslr_flags; } ;
struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct connection*,int *) ;
 struct pdu* FUNC_3 (struct pdu*) ;
 struct pdu* FUNC_4 (struct connection*,int) ;
 int FUNC_5 (struct pdu*,int,int) ;
 int FUNC_6 (struct pdu*,int ) ;
 int FUNC_7 (struct pdu*) ;
 int FUNC_8 (struct pdu*) ;

__attribute__((used)) static void
FUNC_9(struct connection *VAR_2)
{
 struct pdu *VAR_3, *VAR_4;
 struct iscsi_bhs_login_request *VAR_5;

 FUNC_0("waiting for state transition request");
 VAR_3 = FUNC_4(VAR_2, 0);
 VAR_5 = (struct iscsi_bhs_login_request *)VAR_3->pdu_bhs;
 if ((VAR_5->bhslr_flags & VAR_0) == 0) {
  FUNC_5(VAR_3, 0x02, 0x00);
  FUNC_1(1, "got no \"T\" flag after answering AuthMethod");
 }

 FUNC_0("got state transition request");
 VAR_4 = FUNC_3(VAR_3);
 FUNC_7(VAR_3);
 FUNC_6(VAR_4, VAR_1);
 FUNC_8(VAR_4);
 FUNC_7(VAR_4);

 FUNC_2(VAR_2, ((void*)0));
}
