
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_haptic {int dev_type; int type; int mode; int dev; int regmap_haptic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct max77693_haptic *VAR_9,
         bool VAR_10)
{
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 switch (VAR_9->dev_type) {
 case 129:
  VAR_11 = ((VAR_9->type << VAR_3) |
   (VAR_10 << VAR_2) |
   (VAR_9->mode << VAR_1) |
   VAR_4);
  VAR_12 = VAR_5;
  break;
 case 128:
  VAR_11 = (VAR_9->type << VAR_8) |
   (VAR_10 << VAR_7) |
   VAR_4;
  VAR_12 = VAR_6;
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = FUNC_1(VAR_9->regmap_haptic,
        VAR_12, VAR_11);
 if (VAR_13) {
  FUNC_0(VAR_9->dev,
   "failed to update haptic config: %d\n", VAR_13);
  return VAR_13;
 }

 return 0;
}
