
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_gpadc_iio {int completion; int temp_data; int regmap; int ignore_temp_data_irq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct sun4i_gpadc_iio *VAR_4 = VAR_3;

 if (FUNC_0(&VAR_4->ignore_temp_data_irq))
  goto out;

 if (!FUNC_2(VAR_4->regmap, VAR_1, &VAR_4->temp_data))
  FUNC_1(&VAR_4->completion);

out:
 return VAR_0;
}
