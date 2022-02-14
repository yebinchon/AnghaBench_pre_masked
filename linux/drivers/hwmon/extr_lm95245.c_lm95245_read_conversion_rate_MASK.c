
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95245_data {int interval; int regmap; } ;


 int VAR_0 ;




 int FUNC_0 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct lm95245_data *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->regmap, VAR_0, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 switch (VAR_2) {
 case 131:
  VAR_1->interval = 63;
  break;
 case 130:
  VAR_1->interval = 364;
  break;
 case 129:
  VAR_1->interval = 1000;
  break;
 case 128:
 default:
  VAR_1->interval = 2500;
  break;
 }
 return 0;
}
