
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ina2xx_chip_info {int regmap; TYPE_1__* config; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ chip_id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ina2xx_chip_info* FUNC_0 (struct iio_dev*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5)
{
 struct ina2xx_chip_info *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;
 unsigned int VAR_8;
 if (VAR_6->config->chip_id == VAR_4) {
  VAR_7 = FUNC_1(VAR_6->regmap,
      VAR_2, &VAR_8);
  VAR_8 &= VAR_1;
 } else {
  VAR_7 = FUNC_1(VAR_6->regmap,
      VAR_3, &VAR_8);
  VAR_8 &= VAR_0;
 }

 if (VAR_7 < 0)
  return VAR_7;

 return !!VAR_8;
}
