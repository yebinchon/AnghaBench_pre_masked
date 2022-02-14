
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {scalar_t__ pdu_bhs; } ;
struct iscsi_bhs_login_request {int bhslr_flags; } ;



__attribute__((used)) static int
FUNC_0(const struct pdu *VAR_0)
{
 struct iscsi_bhs_login_request *VAR_1;

 VAR_1 = (struct iscsi_bhs_login_request *)VAR_0->pdu_bhs;

 return ((VAR_1->bhslr_flags & 0x0C) >> 2);
}
