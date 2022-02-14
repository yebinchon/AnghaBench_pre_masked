
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_packet {struct hfi1_ctxtdata* rcd; int rhf; } ;
struct hfi1_ctxtdata {int ppd; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_packet*) ;
 scalar_t__ FUNC_1 (struct hfi1_ctxtdata*,int ,struct hfi1_packet*) ;
 int FUNC_2 (struct hfi1_packet*) ;
 int FUNC_3 (struct hfi1_packet*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct hfi1_packet *VAR_1)
{
 FUNC_3(VAR_1);
 if (FUNC_5(FUNC_0(VAR_1)))
  return VAR_0;

 if (FUNC_5(FUNC_4(VAR_1->rhf))) {
  struct hfi1_ctxtdata *VAR_2 = VAR_1->rcd;

  if (FUNC_1(VAR_2, VAR_2->ppd, VAR_1))
   return VAR_0;
 }

 FUNC_2(VAR_1);
 return VAR_0;
}
