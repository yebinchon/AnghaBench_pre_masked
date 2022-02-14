
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sx9500_data {int regmap; scalar_t__ gpiod_rst; } ;
struct iio_dev {int dummy; } ;
struct TYPE_3__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 struct sx9500_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5)
{
 struct sx9500_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7, VAR_8;
 unsigned int VAR_9;

 if (VAR_6->gpiod_rst) {
  FUNC_1(VAR_6->gpiod_rst, 0);
  FUNC_6(1000, 2000);
  FUNC_1(VAR_6->gpiod_rst, 1);
  FUNC_6(1000, 2000);
 }

 VAR_7 = FUNC_4(VAR_6->regmap, VAR_0, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_6->regmap, VAR_2,
      VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_6->regmap, VAR_1, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_7 = FUNC_4(VAR_6->regmap,
       VAR_4[VAR_8].reg,
       VAR_4[VAR_8].def);
  if (VAR_7 < 0)
   return VAR_7;
 }

 return FUNC_5(VAR_5);
}
