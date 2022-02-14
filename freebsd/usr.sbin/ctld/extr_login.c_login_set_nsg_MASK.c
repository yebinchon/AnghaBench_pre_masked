
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_login_response {int bhslr_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct pdu *VAR_4, int VAR_5)
{
 struct iscsi_bhs_login_response *VAR_6;

 FUNC_0(VAR_5 == VAR_3 ||
     VAR_5 == VAR_2 ||
     VAR_5 == VAR_1);

 VAR_6 = (struct iscsi_bhs_login_response *)VAR_4->pdu_bhs;

 VAR_6->bhslr_flags &= 0xFC;
 VAR_6->bhslr_flags |= VAR_5;
 VAR_6->bhslr_flags |= VAR_0;
}
