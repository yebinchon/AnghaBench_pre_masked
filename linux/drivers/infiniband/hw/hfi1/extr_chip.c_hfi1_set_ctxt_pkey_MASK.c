
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u16 ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {TYPE_1__* sc; } ;
struct TYPE_2__ {int hw_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,int ,int) ;

int FUNC_2(struct hfi1_devdata *VAR_7, struct hfi1_ctxtdata *VAR_8,
         u16 VAR_9)
{
 u8 VAR_10;
 u64 VAR_11;

 if (!VAR_8 || !VAR_8->sc)
  return -VAR_0;

 VAR_10 = VAR_8->sc->hw_context;
 VAR_11 = ((u64)VAR_9 & VAR_5) <<
  VAR_6;
 FUNC_1(VAR_7, VAR_10, VAR_4, VAR_11);
 VAR_11 = FUNC_0(VAR_7, VAR_10, VAR_1);
 VAR_11 |= VAR_2;
 VAR_11 &= ~VAR_3;
 FUNC_1(VAR_7, VAR_10, VAR_1, VAR_11);

 return 0;
}
