
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {int dlid; struct hfi1_ctxtdata* rcd; } ;
struct hfi1_ctxtdata {int dd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hfi1_packet*,int ) ;
 int FUNC_2 (int ,struct hfi1_packet*,int) ;

void FUNC_3(struct hfi1_packet *VAR_0)
{
 struct hfi1_ctxtdata *VAR_1 = VAR_0->rcd;

 FUNC_2(VAR_1->dd, VAR_0, 0);
 FUNC_1(VAR_0, FUNC_0(VAR_0->dlid));
}
