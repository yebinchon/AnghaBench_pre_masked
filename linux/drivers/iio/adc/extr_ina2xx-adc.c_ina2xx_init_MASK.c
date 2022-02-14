
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ina2xx_chip_info*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ina2xx_chip_info *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1->regmap, VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_1);
}
