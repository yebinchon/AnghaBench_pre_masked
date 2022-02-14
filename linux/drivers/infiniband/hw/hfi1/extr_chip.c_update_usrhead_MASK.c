
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int ctxt; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_ctxtdata*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct hfi1_devdata*,int,int ,int) ;

void FUNC_2(struct hfi1_ctxtdata *VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11,
      u32 VAR_12, u32 VAR_13)
{
 struct hfi1_devdata *VAR_14 = VAR_8->dd;
 u64 VAR_15;
 u32 VAR_16 = VAR_8->ctxt;





 if (VAR_12)
  FUNC_0(VAR_8, VAR_13);
 if (VAR_10) {
  VAR_15 = (VAR_11 & VAR_1)
   << VAR_2;
  FUNC_1(VAR_14, VAR_16, VAR_0, VAR_15);
 }
 VAR_15 = ((u64)VAR_7 << VAR_4) |
  (((u64)VAR_9 & VAR_5)
   << VAR_6);
 FUNC_1(VAR_14, VAR_16, VAR_3, VAR_15);
}
