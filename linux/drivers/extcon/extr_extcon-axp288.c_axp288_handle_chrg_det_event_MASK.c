
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct axp288_extcon_info {unsigned int previous_cable; int vbus_attach; int dev; int role_work; scalar_t__ role_sw; int edev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct axp288_extcon_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,unsigned int,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct axp288_extcon_info *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 u8 VAR_14;
 unsigned int VAR_15 = VAR_10->previous_cable;
 bool VAR_16 = 0;

 VAR_16 = FUNC_0(VAR_10);
 if (!VAR_16)
  goto no_vbus;


 VAR_11 = FUNC_6(VAR_10->regmap, VAR_1, &VAR_13);
 if (VAR_11 < 0)
  goto dev_det_ret;
 if (VAR_13 & VAR_2) {
  FUNC_1(VAR_10->dev, "can't complete the charger detection\n");
  goto dev_det_ret;
 }

 VAR_11 = FUNC_6(VAR_10->regmap, VAR_0, &VAR_12);
 if (VAR_11 < 0)
  goto dev_det_ret;

 VAR_14 = (VAR_12 & VAR_3) >> VAR_4;

 switch (VAR_14) {
 case 128:
  FUNC_1(VAR_10->dev, "sdp cable is connected\n");
  VAR_15 = VAR_7;
  break;
 case 130:
  FUNC_1(VAR_10->dev, "cdp cable is connected\n");
  VAR_15 = VAR_5;
  break;
 case 129:
  FUNC_1(VAR_10->dev, "dcp cable is connected\n");
  VAR_15 = VAR_6;
  break;
 default:
  FUNC_3(VAR_10->dev, "unknown (reserved) bc detect result\n");
  VAR_15 = VAR_7;
 }

no_vbus:
 FUNC_4(VAR_10->edev, VAR_10->previous_cable, 0);
 if (VAR_10->previous_cable == VAR_7)
  FUNC_4(VAR_10->edev, VAR_8, 0);

 if (VAR_16) {
  FUNC_4(VAR_10->edev, VAR_15, VAR_16);
  if (VAR_15 == VAR_7)
   FUNC_4(VAR_10->edev, VAR_8,
      VAR_16);

  VAR_10->previous_cable = VAR_15;
 }

 if (VAR_10->role_sw && VAR_10->vbus_attach != VAR_16) {
  VAR_10->vbus_attach = VAR_16;

  FUNC_5(VAR_9, &VAR_10->role_work);
 }

 return 0;

dev_det_ret:
 if (VAR_11 < 0)
  FUNC_2(VAR_10->dev, "failed to detect BC Mod\n");

 return VAR_11;
}
