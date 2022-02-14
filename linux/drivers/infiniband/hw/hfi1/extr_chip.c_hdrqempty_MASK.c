
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hfi1_ctxtdata {int ctxt; int dd; scalar_t__ rcvhdrtail_kvaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (int ,int ,int ) ;

u32 FUNC_2(struct hfi1_ctxtdata *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = (FUNC_1(VAR_4->dd, VAR_4->ctxt, VAR_0)
  & VAR_2) >> VAR_1;

 if (VAR_4->rcvhdrtail_kvaddr)
  VAR_6 = FUNC_0(VAR_4);
 else
  VAR_6 = FUNC_1(VAR_4->dd, VAR_4->ctxt, VAR_3);

 return VAR_5 == VAR_6;
}
