
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77843_muic_info {int dev; int edev; int prev_chg_type; } ;


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
 int VAR_12 ;
 int FUNC_0 (int ,char*,char*,int,int ) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max77843_muic_info*,int ,int*) ;
 int FUNC_4 (struct max77843_muic_info*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct max77843_muic_info *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 bool VAR_17;

 VAR_15 = FUNC_3(VAR_13,
   VAR_8, &VAR_17);

 FUNC_0(VAR_13->dev,
  "external connector is %s(chg_type:0x%x, prev_chg_type:0x%x)\n",
  VAR_17 ? "attached" : "detached",
  VAR_15, VAR_13->prev_chg_type);

 switch (VAR_15) {
 case 128:
  VAR_14 = FUNC_4(VAR_13,
          VAR_10,
          VAR_17, 0);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_2(VAR_13->edev, VAR_6, VAR_17);
  FUNC_2(VAR_13->edev, VAR_4,
     VAR_17);
  break;
 case 133:
  VAR_14 = FUNC_4(VAR_13,
          VAR_9,
          VAR_17, 0);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_2(VAR_13->edev, VAR_1,
     VAR_17);
  break;
 case 135:
  VAR_14 = FUNC_4(VAR_13,
          VAR_9,
          VAR_17, 0);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_2(VAR_13->edev, VAR_2,
     VAR_17);
  break;
 case 129:
  VAR_14 = FUNC_4(VAR_13,
          VAR_9,
          VAR_17, 0);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_2(VAR_13->edev, VAR_5,
     VAR_17);
  break;
 case 130:
  VAR_14 = FUNC_4(VAR_13,
          VAR_9,
          VAR_17, 0);
  if (VAR_14 < 0)
   return VAR_14;

  FUNC_2(VAR_13->edev, VAR_3,
     VAR_17);
  break;
 case 132:
  VAR_16 = FUNC_3(VAR_13,
    VAR_7, &VAR_17);


  if (VAR_16 == VAR_12)
   FUNC_2(VAR_13->edev, VAR_2,
      1);
  else if (VAR_16 == VAR_11)
   FUNC_2(VAR_13->edev, VAR_2,
      0);
  break;
 case 134:
  FUNC_2(VAR_13->edev, VAR_2, VAR_17);
  break;
 case 131:
  break;
 default:
  FUNC_1(VAR_13->dev,
   "failed to detect %s accessory (chg_type:0x%x)\n",
   VAR_17 ? "attached" : "detached", VAR_15);

  FUNC_4(VAR_13, VAR_9,
           VAR_17, 0);
  return -VAR_0;
 }

 return 0;
}
