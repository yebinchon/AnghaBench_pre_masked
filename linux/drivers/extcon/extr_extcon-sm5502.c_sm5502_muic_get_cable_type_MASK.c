
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm5502_muic_info {int dev; int regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_3(struct sm5502_muic_info *VAR_7)
{
 unsigned int VAR_8 = -1, VAR_9, VAR_10;
 int VAR_11;


 VAR_11 = FUNC_2(VAR_7->regmap, VAR_4, &VAR_9);
 if (VAR_11) {
  FUNC_1(VAR_7->dev, "failed to read ADC register\n");
  return VAR_11;
 }





 VAR_8 = VAR_9 & VAR_5;
 if (VAR_8 == 155)
  return 155;

 switch (VAR_8) {
 case 155:
 case 135:
 case 149:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 152:
 case 151:
 case 150:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 161:
 case 153:
 case 134:
 case 131:
 case 133:
 case 158:
 case 156:
 case 160:
 case 132:
 case 159:
 case 157:
  break;
 case 162:






  break;
 case 154:
  VAR_11 = FUNC_2(VAR_7->regmap, VAR_6,
      &VAR_10);
  if (VAR_11) {
   FUNC_1(VAR_7->dev, "failed to read DEV_TYPE1 reg\n");
   return VAR_11;
  }

  switch (VAR_10) {
  case 128:
   VAR_8 = VAR_2;
   break;
  case 130:
   VAR_8 = VAR_1;
   break;
  case 129:
   VAR_8 = VAR_3;
   break;
  default:
   FUNC_0(VAR_7->dev,
    "cannot identify the cable type: adc(0x%x)\n",
    VAR_9);
   return -VAR_0;
  };
  break;
 default:
  FUNC_1(VAR_7->dev,
   "failed to identify the cable type: adc(0x%x)\n", VAR_9);
  return -VAR_0;
 };

 return VAR_8;
}
