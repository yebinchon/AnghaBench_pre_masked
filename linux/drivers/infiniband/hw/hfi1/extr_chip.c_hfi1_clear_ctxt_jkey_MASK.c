
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {int ctxt; TYPE_1__* sc; } ;
struct TYPE_2__ {int hw_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_2 (struct hfi1_devdata*,int ,int ,int ) ;

int FUNC_3(struct hfi1_devdata *VAR_5, struct hfi1_ctxtdata *VAR_6)
{
 u8 VAR_7;
 u64 VAR_8;

 if (!VAR_6 || !VAR_6->sc)
  return -VAR_0;

 VAR_7 = VAR_6->sc->hw_context;
 FUNC_2(VAR_5, VAR_7, VAR_4, 0);





 if (!FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5, VAR_7, VAR_2);
  VAR_8 &= ~VAR_3;
  FUNC_2(VAR_5, VAR_7, VAR_2, VAR_8);
 }

 FUNC_2(VAR_5, VAR_6->ctxt, VAR_1, 0);

 return 0;
}
