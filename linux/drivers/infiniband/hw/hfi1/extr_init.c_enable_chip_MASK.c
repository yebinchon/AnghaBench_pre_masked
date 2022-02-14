
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {int sc; int flags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct hfi1_ctxtdata* FUNC_2 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;
 int FUNC_4 (struct hfi1_devdata*,int,struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct hfi1_devdata *VAR_14)
{
 struct hfi1_ctxtdata *VAR_15;
 u32 VAR_16;
 u16 VAR_17;


 FUNC_5(VAR_14, VAR_12);





 for (VAR_17 = 0; VAR_17 < VAR_14->first_dyn_alloc_ctxt; ++VAR_17) {
  VAR_15 = FUNC_2(VAR_14, VAR_17);
  if (!VAR_15)
   continue;
  VAR_16 = VAR_1 | VAR_2;
  VAR_16 |= FUNC_1(VAR_15->flags, VAR_0) ?
   VAR_7 : VAR_6;
  if (!FUNC_1(VAR_15->flags, VAR_9))
   VAR_16 |= VAR_5;
  if (FUNC_1(VAR_15->flags, VAR_11))
   VAR_16 |= VAR_4;
  if (FUNC_1(VAR_15->flags, VAR_10))
   VAR_16 |= VAR_3;
  if (FUNC_0(VAR_13))
   VAR_16 |= VAR_8;
  FUNC_4(VAR_14, VAR_16, VAR_15);
  FUNC_6(VAR_15->sc);
  FUNC_3(VAR_15);
 }
}
