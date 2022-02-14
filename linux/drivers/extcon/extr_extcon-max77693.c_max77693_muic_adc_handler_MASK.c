
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_muic_info {int prev_button_type; int dev; int prev_cable_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*,int,...) ;
 int FUNC_2 (struct max77693_muic_info*) ;
 int FUNC_3 (struct max77693_muic_info*,int,int) ;
 int FUNC_4 (struct max77693_muic_info*,int,int) ;
 int FUNC_5 (struct max77693_muic_info*,int ,int*) ;
 int FUNC_6 (struct max77693_muic_info*,int,int) ;

__attribute__((used)) static int FUNC_7(struct max77693_muic_info *VAR_3)
{
 int VAR_4;
 int VAR_5;
 bool VAR_6;
 int VAR_7 = 0;


 VAR_4 = FUNC_5(VAR_3,
    VAR_2, &VAR_6);

 FUNC_1(VAR_3->dev,
  "external connector is %s (adc:0x%02x, prev_adc:0x%x)\n",
  VAR_6 ? "attached" : "detached", VAR_4,
  VAR_3->prev_cable_type);

 switch (VAR_4) {
 case 149:

  FUNC_2(VAR_3);
  break;
 case 151:
 case 150:
 case 153:
 case 152:

  VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 case 133:
 case 158:
 case 157:
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 case 142:
 case 138:
 case 136:
 case 147:
 case 145:
  if (VAR_6)
   VAR_5 = VAR_3->prev_button_type = VAR_4;
  else
   VAR_5 = VAR_3->prev_button_type;

  VAR_7 = FUNC_3(VAR_3, VAR_5,
       VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
  break;
 case 130:
 case 144:
 case 143:
 case 141:
 case 140:
 case 139:
 case 137:
 case 146:
 case 135:
 case 134:
 case 132:
 case 131:
 case 154:
 case 148:
 case 129:
 case 128:
 case 156:
 case 155:





  FUNC_1(VAR_3->dev,
   "accessory is %s but it isn't used (adc:0x%x)\n",
   VAR_6 ? "attached" : "detached", VAR_4);
  return -VAR_0;
 default:
  FUNC_0(VAR_3->dev,
   "failed to detect %s accessory (adc:0x%x)\n",
   VAR_6 ? "attached" : "detached", VAR_4);
  return -VAR_1;
 }

 return 0;
}
