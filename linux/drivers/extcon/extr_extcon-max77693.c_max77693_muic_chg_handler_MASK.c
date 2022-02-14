
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_muic_info {int dev; int edev; int path_usb; int prev_chg_type; } ;


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
 int VAR_11 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max77693_muic_info*,int ,int*) ;
 int FUNC_4 (struct max77693_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct max77693_muic_info *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 bool VAR_16;
 bool VAR_17;
 int VAR_18 = 0;

 VAR_13 = FUNC_3(VAR_12,
    VAR_11, &VAR_16);

 FUNC_1(VAR_12->dev,
  "external connector is %s(chg_type:0x%x, prev_chg_type:0x%x)\n",
   VAR_16 ? "attached" : "detached",
   VAR_13, VAR_12->prev_chg_type);

 switch (VAR_13) {
 case 132:
 case 135:
 case 133:

  VAR_14 = FUNC_3(VAR_12,
     VAR_10,
     &VAR_17);
  switch (VAR_14) {
  case 129:
  case 128:
   FUNC_2(VAR_12->edev, VAR_2,
      VAR_16);
   FUNC_2(VAR_12->edev, VAR_6,
      VAR_17);
   break;
  }


  VAR_15 = FUNC_3(VAR_12,
     VAR_9,
     &VAR_17);
  switch (VAR_15) {
  case 131:
   FUNC_2(VAR_12->edev, VAR_8,
      VAR_16);
   FUNC_2(VAR_12->edev, VAR_4,
      VAR_16);

   if (!VAR_17)
    FUNC_2(VAR_12->edev, VAR_7,
       VAR_17);
   break;
  case 130:
   VAR_18 = FUNC_4(VAR_12, VAR_12->path_usb,
          VAR_16);
   if (VAR_18 < 0)
    return VAR_18;

   FUNC_2(VAR_12->edev, VAR_7,
      VAR_16);
   FUNC_2(VAR_12->edev, VAR_6,
      VAR_16);
   break;
  }


  switch (VAR_13) {
  case 133:
   break;
  case 132:

   VAR_18 = FUNC_4(VAR_12, VAR_12->path_usb,
          VAR_16);
   if (VAR_18 < 0)
    return VAR_18;

   FUNC_2(VAR_12->edev, VAR_8,
      VAR_16);
   FUNC_2(VAR_12->edev, VAR_4,
      VAR_16);
   break;
  case 135:

   FUNC_2(VAR_12->edev, VAR_2,
      VAR_16);
   break;
  }
  break;
 case 134:
  FUNC_2(VAR_12->edev, VAR_1,
     VAR_16);
  break;
 case 137:
  FUNC_2(VAR_12->edev, VAR_5,
     VAR_16);
  break;
 case 138:
  FUNC_2(VAR_12->edev, VAR_3,
     VAR_16);
  break;
 case 136:
  break;
 default:
  FUNC_0(VAR_12->dev,
   "failed to detect %s accessory (chg_type:0x%x)\n",
   VAR_16 ? "attached" : "detached", VAR_13);
  return -VAR_0;
 }

 return 0;
}
