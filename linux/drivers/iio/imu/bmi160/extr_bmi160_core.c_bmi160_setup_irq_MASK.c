
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_data {int dummy; } ;
struct iio_dev {int dev; } ;
typedef enum bmi160_int_pin { ____Placeholder_bmi160_int_pin } bmi160_int_pin ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int ,int) ;
 int FUNC_1 (struct iio_dev*,int,int ) ;
 int FUNC_2 (int *,char*,int) ;
 struct irq_data* FUNC_3 (int) ;
 int FUNC_4 (struct irq_data*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_1, int VAR_2,
       enum bmi160_int_pin VAR_3)
{
 struct irq_data *VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4) {
  FUNC_2(&VAR_1->dev, "Could not find IRQ %d\n", VAR_2);
  return -VAR_0;
 }

 VAR_5 = FUNC_4(VAR_4);

 VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_3);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_1, VAR_2, VAR_5);
}
