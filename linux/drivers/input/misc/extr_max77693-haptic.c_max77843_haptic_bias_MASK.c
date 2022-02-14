
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_haptic {scalar_t__ dev_type; int dev; int regmap_haptic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct max77693_haptic *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (VAR_4->dev_type != VAR_3)
  return 0;

 VAR_6 = FUNC_1(VAR_4->regmap_haptic,
       VAR_2,
       VAR_1,
       VAR_5 << VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "failed to %s bias: %d\n",
   VAR_5 ? "enable" : "disable", VAR_6);
  return VAR_6;
 }

 return 0;
}
