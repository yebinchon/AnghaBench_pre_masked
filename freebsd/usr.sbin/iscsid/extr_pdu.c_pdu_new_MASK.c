
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdu {struct connection* pdu_connection; int * pdu_bhs; } ;
struct connection {int dummy; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;

struct pdu *
FUNC_2(struct connection *VAR_0)
{
 struct pdu *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(*VAR_1));
 if (VAR_1 == ((void*)0))
  FUNC_1(1, "calloc");

 VAR_1->pdu_bhs = FUNC_0(1, sizeof(*VAR_1->pdu_bhs));
 if (VAR_1->pdu_bhs == ((void*)0))
  FUNC_1(1, "calloc");

 VAR_1->pdu_connection = VAR_0;

 return (VAR_1);
}
