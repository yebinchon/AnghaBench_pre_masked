
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sm5502_muic_info {int dev; int regmap; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct sm5502_muic_info *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7,
    bool VAR_8)
{
 int VAR_9;

 if (!VAR_8) {
  VAR_6 = 134;
  VAR_7 = 130;
 }

 switch (VAR_6) {
 case 134:
 case 132:
 case 135:
 case 133:
  VAR_9 = FUNC_1(VAR_5->regmap, VAR_1,
      VAR_3 |
      VAR_2,
      VAR_6);
  if (VAR_9 < 0) {
   FUNC_0(VAR_5->dev,
    "cannot update DM_CON/DP_CON switch\n");
   return VAR_9;
  }
  break;
 default:
  FUNC_0(VAR_5->dev, "Unknown DM_CON/DP_CON switch type (%d)\n",
    VAR_6);
  return -VAR_0;
 };

 switch (VAR_7) {
 case 130:
 case 129:
 case 131:
 case 128:
  VAR_9 = FUNC_1(VAR_5->regmap, VAR_1,
      VAR_4,
      VAR_7);
  if (VAR_9 < 0) {
   FUNC_0(VAR_5->dev,
    "cannot update VBUSIN switch\n");
   return VAR_9;
  }
  break;
 default:
  FUNC_0(VAR_5->dev, "Unknown VBUS switch type (%d)\n", VAR_7);
  return -VAR_0;
 };

 return 0;
}
