
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_ctxtdata {int ctxt; int dd; scalar_t__ rcvhdrtail_kvaddr; } ;


 int FUNC_0 (struct qib_ctxtdata*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_2(struct qib_ctxtdata *VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2->dd, VAR_0, VAR_2->ctxt);
 if (VAR_2->rcvhdrtail_kvaddr)
  VAR_4 = FUNC_0(VAR_2);
 else
  VAR_4 = FUNC_1(VAR_2->dd, VAR_1, VAR_2->ctxt);
 return VAR_3 == VAR_4;
}
