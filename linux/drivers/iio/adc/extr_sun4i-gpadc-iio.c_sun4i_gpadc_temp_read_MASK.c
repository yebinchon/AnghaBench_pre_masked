
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_gpadc_iio {int temp_data_irq; int regmap; scalar_t__ no_irq; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct sun4i_gpadc_iio* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (struct iio_dev*,int ,int*,int ) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_1, int *VAR_2)
{
 struct sun4i_gpadc_iio *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->no_irq) {
  FUNC_1(VAR_1->dev.parent);

  FUNC_4(VAR_3->regmap, VAR_0, VAR_2);

  FUNC_2(VAR_1->dev.parent);
  FUNC_3(VAR_1->dev.parent);

  return 0;
 }

 return FUNC_5(VAR_1, 0, VAR_2, VAR_3->temp_data_irq);
}
