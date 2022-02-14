
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max14577_muic_info {int dev; int edev; int path_usb; int prev_chg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (int ,char*,char*,int,int ) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max14577_muic_info*,int ,int*) ;
 int FUNC_4 (struct max14577_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct max14577_muic_info *VAR_8)
{
 int VAR_9;
 bool VAR_10;
 int VAR_11 = 0;

 VAR_9 = FUNC_3(VAR_8,
    VAR_7, &VAR_10);

 FUNC_0(VAR_8->dev,
  "external connector is %s(chg_type:0x%x, prev_chg_type:0x%x)\n",
   VAR_10 ? "attached" : "detached",
   VAR_9, VAR_8->prev_chg_type);

 switch (VAR_9) {
 case 128:

  VAR_11 = FUNC_4(VAR_8, VAR_8->path_usb, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;

  FUNC_2(VAR_8->edev, VAR_6, VAR_10);
  FUNC_2(VAR_8->edev, VAR_4,
     VAR_10);
  break;
 case 133:
  FUNC_2(VAR_8->edev, VAR_2,
     VAR_10);
  break;
 case 132:
  FUNC_2(VAR_8->edev, VAR_1,
     VAR_10);
  break;
 case 129:
  FUNC_2(VAR_8->edev, VAR_5,
     VAR_10);
  break;
 case 130:
  FUNC_2(VAR_8->edev, VAR_3,
     VAR_10);
  break;
 case 131:
 case 134:
  break;
 default:
  FUNC_1(VAR_8->dev,
   "failed to detect %s accessory (chg_type:0x%x)\n",
   VAR_10 ? "attached" : "detached", VAR_9);
  return -VAR_0;
 }

 return 0;
}
