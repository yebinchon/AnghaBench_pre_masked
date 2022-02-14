
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77843_muic_info {int dev; int edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max77843_muic_info*,int) ;
 int FUNC_4 (struct max77843_muic_info*,int ,int*) ;
 int FUNC_5 (struct max77843_muic_info*,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct max77843_muic_info *VAR_6)
{
 int VAR_7, VAR_8;
 bool VAR_9;

 VAR_8 = FUNC_4(VAR_6,
   VAR_3, &VAR_9);
 FUNC_0(VAR_6->dev, "external connector is %s (gnd:0x%02x)\n",
   VAR_9 ? "attached" : "detached", VAR_8);

 switch (VAR_8) {
 case 129:
 case 128:
  VAR_7 = FUNC_5(VAR_6,
          VAR_5,
          VAR_9, 0);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_2(VAR_6->edev, VAR_2, VAR_9);
  FUNC_3(VAR_6, VAR_9);
  break;
 case 130:
 case 131:
  VAR_7 = FUNC_5(VAR_6,
          VAR_4,
          VAR_9, 0);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_2(VAR_6->edev, VAR_1, VAR_9);
  break;
 default:
  FUNC_1(VAR_6->dev, "failed to detect %s accessory(gnd:0x%x)\n",
   VAR_9 ? "attached" : "detached", VAR_8);
  return -VAR_0;
 }

 return 0;
}
