
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {struct pdu* pdu_bhs; struct pdu* pdu_data; } ;


 int FUNC_0 (struct pdu*) ;

void
FUNC_1(struct pdu *VAR_0)
{

 FUNC_0(VAR_0->pdu_data);
 FUNC_0(VAR_0->pdu_bhs);
 FUNC_0(VAR_0);
}
