
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int ireg; int imask; struct hfi1_devdata* dd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct hfi1_ctxtdata *VAR_1)
{
 struct hfi1_devdata *VAR_2 = VAR_1->dd;
 u32 VAR_3 = VAR_0 + (8 * VAR_1->ireg);

 FUNC_1(VAR_2, VAR_3, VAR_1->imask);

 (void)FUNC_0(VAR_2, VAR_3);
}
