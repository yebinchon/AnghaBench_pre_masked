
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt8973a_muic_info {int dev; int regmap; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct rt8973a_muic_info *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 int VAR_10, VAR_11;


 VAR_10 = FUNC_1(VAR_7->regmap, VAR_2, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_7->dev, "failed to read ADC register\n");
  return VAR_10;
 }
 VAR_11 = VAR_8 & VAR_3;


 VAR_10 = FUNC_1(VAR_7->regmap, VAR_4, &VAR_9);
 if (VAR_10) {
  FUNC_0(VAR_7->dev, "failed to read DEV1 register\n");
  return VAR_10;
 }

 switch (VAR_8) {
 case 128:
  if (VAR_9 & VAR_6)
   VAR_11 = VAR_1;
  else if (VAR_9 & VAR_5)
   VAR_11 = VAR_0;
  else
   VAR_11 = 128;
  break;
 default:
  break;
 }

 return VAR_11;
}
