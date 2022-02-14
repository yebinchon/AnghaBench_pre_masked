
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max14577_muic_info {int dev; int prev_cable_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,int,int ) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (struct max14577_muic_info*,int ,int*) ;
 int FUNC_4 (struct max14577_muic_info*,int,int) ;

__attribute__((used)) static int FUNC_5(struct max14577_muic_info *VAR_3)
{
 int VAR_4;
 bool VAR_5;
 int VAR_6 = 0;


 VAR_4 = FUNC_3(VAR_3,
    VAR_2, &VAR_5);

 FUNC_0(VAR_3->dev,
  "external connector is %s (adc:0x%02x, prev_adc:0x%x)\n",
  VAR_5 ? "attached" : "detached", VAR_4,
  VAR_3->prev_cable_type);

 switch (VAR_4) {
 case 151:
 case 150:
 case 153:

  VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  break;
 case 149:
 case 130:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 147:
 case 146:
 case 145:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 157:
 case 148:
 case 129:
 case 128:
 case 155:
 case 156:
 case 154:
 case 152:
 case 158:





  FUNC_2(VAR_3->dev,
   "accessory is %s but it isn't used (adc:0x%x)\n",
   VAR_5 ? "attached" : "detached", VAR_4);
  return -VAR_0;
 default:
  FUNC_1(VAR_3->dev,
   "failed to detect %s accessory (adc:0x%x)\n",
   VAR_5 ? "attached" : "detached", VAR_4);
  return -VAR_1;
 }

 return 0;
}
