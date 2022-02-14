
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt8973a_muic_info {int edev; int dev; } ;
typedef enum rt8973a_event_type { ____Placeholder_rt8973a_event_type } rt8973a_event_type ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (struct rt8973a_muic_info*) ;
 int FUNC_4 (struct rt8973a_muic_info*,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct rt8973a_muic_info *VAR_9,
     enum rt8973a_event_type VAR_10)
{
 static unsigned int VAR_11;
 unsigned int VAR_12 = VAR_1;
 int VAR_13, VAR_14;
 unsigned int VAR_15;
 bool VAR_16 = 0;

 switch (VAR_10) {
 case 164:
  VAR_14 = FUNC_3(VAR_9);
  VAR_16 = 1;
  break;
 case 163:
  VAR_14 = VAR_11;
  VAR_16 = 0;
  break;
 case 161:
 case 162:
  FUNC_1(VAR_9->dev,
   "happen Over %s issue. Need to disconnect all cables\n",
   VAR_10 == 161 ? "Voltage" : "Temperature");
  VAR_14 = VAR_11;
  VAR_16 = 0;
  break;
 default:
  FUNC_0(VAR_9->dev,
   "Cannot handle this event (event:%d)\n", VAR_10);
  return -VAR_3;
 }
 VAR_11 = VAR_14;

 switch (VAR_14) {
 case 141:
  VAR_15 = VAR_8;
  VAR_12 = VAR_2;
  break;
 case 134:
  VAR_15 = VAR_4;
  VAR_12 = VAR_0;
  break;
 case 145:
 case 143:
  VAR_15 = VAR_6;
  VAR_12 = VAR_2;
  break;
 case 146:
 case 144:
  VAR_15 = VAR_6;
  VAR_12 = VAR_1;
  break;
 case 128:
  VAR_15 = VAR_7;
  VAR_12 = VAR_2;
  break;
 case 142:
  return 0;
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  FUNC_1(VAR_9->dev,
   "Unknown accessory type (adc:0x%x)\n", VAR_14);
  return 0;
 case 148:
 case 157:
 case 156:
 case 155:
 case 154:
 case 153:
 case 152:
 case 151:
 case 150:
 case 149:
 case 160:
 case 159:
 case 158:
 case 147:
  FUNC_1(VAR_9->dev,
   "Audio device/button type (adc:0x%x)\n", VAR_14);
  return 0;
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 140:
  return 0;
 default:
  FUNC_0(VAR_9->dev,
   "Cannot handle this cable_type (adc:0x%x)\n",
   VAR_14);
  return -VAR_3;
 }


 VAR_13 = FUNC_4(VAR_9, VAR_12, VAR_16);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_2(VAR_9->edev, VAR_15, VAR_16);
 if (VAR_15 == VAR_7)
  FUNC_2(VAR_9->edev, VAR_5,
     VAR_16);

 return 0;
}
