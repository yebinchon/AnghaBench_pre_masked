
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hfi1_ctxtdata {int ctxt; int ireg; int imask; int msix_intr; int dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct hfi1_ctxtdata*,int ,int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(struct hfi1_ctxtdata *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->dd, VAR_4, VAR_2,
         VAR_3, VAR_4->ctxt, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;





 VAR_4->ireg = (VAR_1 + VAR_4->ctxt) / 64;
 VAR_4->imask = ((u64)1) << ((VAR_1 + VAR_4->ctxt) % 64);
 VAR_4->msix_intr = VAR_5;
 FUNC_1(VAR_4->dd, VAR_1 + VAR_4->ctxt, VAR_5);

 return 0;
}
