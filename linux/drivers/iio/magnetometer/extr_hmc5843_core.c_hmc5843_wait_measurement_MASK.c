
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hmc5843_data {int dev; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct hmc5843_data *VAR_3)
{
 int VAR_4 = 150;
 unsigned int VAR_5;
 int VAR_6;

 while (VAR_4-- > 0) {
  VAR_6 = FUNC_2(VAR_3->regmap, VAR_2, &VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_5 & VAR_1)
   break;
  FUNC_1(20);
 }

 if (VAR_4 < 0) {
  FUNC_0(VAR_3->dev, "data not ready\n");
  return -VAR_0;
 }

 return 0;
}
