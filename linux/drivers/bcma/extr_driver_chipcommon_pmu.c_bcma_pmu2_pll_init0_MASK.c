
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int rev; } ;
struct bcma_drv_cc {TYPE_2__ pmu; TYPE_3__* core; } ;
struct TYPE_4__ {int id; } ;
struct bcma_bus {TYPE_1__ chipinfo; } ;
struct TYPE_6__ {struct bcma_bus* bus; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct bcma_drv_cc*,int ) ;
 int FUNC_1 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_2 (struct bcma_bus*,char*) ;
 int FUNC_3 (struct bcma_bus*,char*,int) ;
 int FUNC_4 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_5 (struct bcma_drv_cc*,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct bcma_drv_cc *VAR_11, u32 VAR_12)
{
 struct bcma_bus *VAR_13 = VAR_11->core->bus;
 u32 VAR_14 = 0, VAR_15;
 u32 VAR_16, VAR_17;

 switch (VAR_13->chipinfo.id) {
 case 128:

  switch (VAR_12) {
  case 12000:
   VAR_14 = 0x50D52;
   break;
  case 20000:
   VAR_14 = 0x307FE;
   break;
  case 26000:
   VAR_14 = 0x254EA;
   break;
  case 37400:
   VAR_14 = 0x19EF8;
   break;
  case 52000:
   VAR_14 = 0x12A75;
   break;
  }
  break;
 }

 if (!VAR_14) {
  FUNC_3(VAR_13, "Unknown TGT frequency for xtalfreq %d\n",
    VAR_12);
  return;
 }

 VAR_16 = FUNC_0(VAR_11, VAR_2);
 VAR_15 = (VAR_16 & VAR_0) >>
  VAR_1;

 if (VAR_15 == VAR_14) {
  FUNC_2(VAR_13, "Target TGT frequency already set\n");
  return;
 }


 switch (VAR_13->chipinfo.id) {
 case 128:
  VAR_17 = (u32)~(VAR_9 |
         VAR_10);

  FUNC_4(VAR_11, VAR_6, VAR_17);
  FUNC_4(VAR_11, VAR_5, VAR_17);
  FUNC_6(VAR_11->core, VAR_7,
    VAR_8, 0, 20000);
  break;
 }

 VAR_16 &= ~VAR_0;
 VAR_16 |= VAR_14 << VAR_1;
 FUNC_1(VAR_11, VAR_2, VAR_16);


 if (VAR_11->pmu.rev >= 2)
  FUNC_5(VAR_11, VAR_3, VAR_4);


}
