
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {int ireg; int imask; int dd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

void FUNC_1(struct hfi1_ctxtdata *VAR_1)
{
 FUNC_0(VAR_1->dd, VAR_0 + (8 * VAR_1->ireg), VAR_1->imask);
}
