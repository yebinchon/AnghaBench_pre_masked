
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8997_muic_info {int dev; int edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct max8997_muic_info*,int ,int*) ;
 int FUNC_4 (struct max8997_muic_info*,int,int) ;
 int FUNC_5 (struct max8997_muic_info*,int) ;
 int FUNC_6 (struct max8997_muic_info*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct max8997_muic_info *VAR_6)
{
 int VAR_7;
 bool VAR_8;
 int VAR_9 = 0;


 VAR_7 = FUNC_3(VAR_6,
    VAR_3, &VAR_8);

 switch (VAR_7) {
 case 149:
  VAR_9 = FUNC_6(VAR_6, VAR_5, VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  break;
 case 148:
  FUNC_2(VAR_6->edev, VAR_2, VAR_8);
  break;
 case 151:
 case 150:
  VAR_9 = FUNC_6(VAR_6,
          VAR_4, VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  break;
 case 157:
 case 152:
  VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  break;
 case 153:
  VAR_9 = FUNC_5(VAR_6, VAR_8);
  break;
 case 143:
 case 142:
 case 141:
 case 140:
 case 139:
 case 138:
 case 137:
 case 136:
 case 135:
 case 146:
 case 145:
 case 144:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 154:
 case 147:
 case 129:
 case 128:
 case 156:
 case 155:
 case 158:





  FUNC_1(VAR_6->dev,
   "cable is %s but it isn't used (type:0x%x)\n",
   VAR_8 ? "attached" : "detached", VAR_7);
  return -VAR_0;
 default:
  FUNC_0(VAR_6->dev,
   "failed to detect %s unknown cable (type:0x%x)\n",
   VAR_8 ? "attached" : "detached", VAR_7);
  return -VAR_1;
 }

 return 0;
}
