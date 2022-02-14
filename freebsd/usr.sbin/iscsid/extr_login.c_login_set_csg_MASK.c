
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_login_request {int bhslr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct pdu *VAR_3, int VAR_4)
{
 struct iscsi_bhs_login_request *VAR_5;

 FUNC_0(VAR_4 == VAR_2 ||
     VAR_4 == VAR_1 ||
     VAR_4 == VAR_0);

 VAR_5 = (struct iscsi_bhs_login_request *)VAR_3->pdu_bhs;

 VAR_5->bhslr_flags &= 0xF3;
 VAR_5->bhslr_flags |= VAR_4 << 2;
}
