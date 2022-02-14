
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {int rhf; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ctxtdata {int ppd; } ;


 int FUNC_0 (struct hfi1_ctxtdata*,int ,struct hfi1_packet*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct hfi1_packet*) ;

void FUNC_3(struct hfi1_packet *VAR_0)
{
 struct hfi1_ctxtdata *VAR_1 = VAR_0->rcd;

 FUNC_0(VAR_1, VAR_1->ppd, VAR_0);
 if (FUNC_1(VAR_0->rhf))
  FUNC_2(VAR_0);
}
