
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int ctxt; int flags; TYPE_1__* sc; } ;
struct TYPE_2__ {int hw_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
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
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_3 (struct hfi1_devdata*,int ,int ,int) ;

int FUNC_4(struct hfi1_devdata *VAR_13, struct hfi1_ctxtdata *VAR_14,
         u16 VAR_15)
{
 u8 VAR_16;
 u64 VAR_17;

 if (!VAR_14 || !VAR_14->sc)
  return -VAR_1;

 VAR_16 = VAR_14->sc->hw_context;
 VAR_17 = VAR_10 |
  ((VAR_15 & VAR_11) <<
   VAR_12);

 if (FUNC_0(VAR_14->flags, VAR_0))
  VAR_17 |= VAR_9;
 FUNC_3(VAR_13, VAR_16, VAR_8, VAR_17);



 if (!FUNC_1(VAR_13)) {
  VAR_17 = FUNC_2(VAR_13, VAR_16, VAR_6);
  VAR_17 |= VAR_7;
  FUNC_3(VAR_13, VAR_16, VAR_6, VAR_17);
 }


 VAR_17 = VAR_3 |
  ((VAR_15 & VAR_4) <<
   VAR_5);
 FUNC_3(VAR_13, VAR_14->ctxt, VAR_2, VAR_17);

 return 0;
}
