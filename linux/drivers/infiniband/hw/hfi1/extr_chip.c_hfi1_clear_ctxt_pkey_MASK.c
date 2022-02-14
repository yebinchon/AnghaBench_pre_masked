
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {TYPE_1__* sc; } ;
struct TYPE_2__ {int hw_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ,int ) ;

int FUNC_2(struct hfi1_devdata *VAR_4, struct hfi1_ctxtdata *VAR_5)
{
 u8 VAR_6;
 u64 VAR_7;

 if (!VAR_5 || !VAR_5->sc)
  return -VAR_0;

 VAR_6 = VAR_5->sc->hw_context;
 VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_1);
 VAR_7 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_6, VAR_1, VAR_7);
 FUNC_1(VAR_4, VAR_6, VAR_3, 0);

 return 0;
}
