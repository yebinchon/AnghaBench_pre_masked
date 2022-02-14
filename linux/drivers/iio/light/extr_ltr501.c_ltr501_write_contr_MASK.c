
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ltr501_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ltr501_data *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->regmap, VAR_0, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_0(VAR_2->regmap, VAR_1, VAR_4);
}
