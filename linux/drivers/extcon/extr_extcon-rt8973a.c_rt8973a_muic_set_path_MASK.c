
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt8973a_muic_info {int dev; int regmap; scalar_t__ auto_config; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct rt8973a_muic_info *VAR_4,
    unsigned int VAR_5, bool VAR_6)
{
 int VAR_7;





 if (VAR_4->auto_config)
  return 0;

 if (!VAR_6)
  VAR_5 = 129;

 switch (VAR_5) {
 case 130:
 case 128:
 case 129:
  VAR_7 = FUNC_1(VAR_4->regmap, VAR_1,
     VAR_3 |
     VAR_2,
     VAR_5);
  if (VAR_7 < 0) {
   FUNC_0(VAR_4->dev,
    "cannot update DM_CON/DP_CON switch\n");
   return VAR_7;
  }
  break;
 default:
  FUNC_0(VAR_4->dev, "Unknown DM_CON/DP_CON switch type (%d)\n",
    VAR_5);
  return -VAR_0;
 }

 return 0;
}
