
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sun4i_gpadc_iio {int dummy; } ;
struct sun4i_gpadc_dev {int regmap_irqc; } ;
struct TYPE_4__ {struct TYPE_4__* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
typedef int irq_handler_t ;
typedef int atomic_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,...) ;
 struct sun4i_gpadc_dev* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned int,int ,int ,char const*,struct sun4i_gpadc_iio*) ;
 int FUNC_4 (unsigned int) ;
 struct sun4i_gpadc_iio* FUNC_5 (struct sun4i_gpadc_dev*) ;
 int FUNC_6 (struct platform_device*,char const*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0, const char *VAR_1,
     irq_handler_t VAR_2, const char *VAR_3,
     unsigned int *VAR_4, atomic_t *VAR_5)
{
 int VAR_6;
 struct sun4i_gpadc_dev *VAR_7 = FUNC_2(VAR_0->dev.parent);
 struct sun4i_gpadc_iio *VAR_8 = FUNC_5(FUNC_2(&VAR_0->dev));
 FUNC_0(VAR_5, 1);

 VAR_6 = FUNC_6(VAR_0, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_7(VAR_7->regmap_irqc, VAR_6);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_0->dev, "failed to get virq for irq %s\n", VAR_1);
  return VAR_6;
 }

 *VAR_4 = VAR_6;
 VAR_6 = FUNC_3(&VAR_0->dev, *VAR_4, VAR_2, 0,
        VAR_3, VAR_8);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_0->dev, "could not request %s interrupt: %d\n",
   VAR_1, VAR_6);
  return VAR_6;
 }

 FUNC_4(*VAR_4);
 FUNC_0(VAR_5, 0);

 return 0;
}
