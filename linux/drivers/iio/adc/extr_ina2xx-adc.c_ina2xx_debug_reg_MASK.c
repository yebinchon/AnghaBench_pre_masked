
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int regmap; } ;
struct iio_dev {int dummy; } ;


 struct ina2xx_chip_info* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,unsigned int,unsigned int*) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_0,
       unsigned VAR_1, unsigned VAR_2, unsigned *VAR_3)
{
 struct ina2xx_chip_info *VAR_4 = FUNC_0(VAR_0);

 if (!VAR_3)
  return FUNC_2(VAR_4->regmap, VAR_1, VAR_2);

 return FUNC_1(VAR_4->regmap, VAR_1, VAR_3);
}
