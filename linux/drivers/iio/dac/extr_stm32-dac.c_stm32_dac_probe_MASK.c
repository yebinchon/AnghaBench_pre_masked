
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stm32_dac {int common; } ;
struct TYPE_6__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct iio_dev {int modes; int * info; TYPE_1__ dev; int name; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 struct iio_dev* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,struct iio_dev*) ;
 struct stm32_dac* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct platform_device*,struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct iio_dev *VAR_6;
 struct stm32_dac *VAR_7;
 int VAR_8;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_2(&VAR_4->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_1;
 FUNC_5(VAR_4, VAR_6);

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->common = FUNC_0(VAR_4->dev.parent);
 VAR_6->name = FUNC_1(&VAR_4->dev);
 VAR_6->dev.parent = &VAR_4->dev;
 VAR_6->dev.of_node = VAR_4->dev.of_node;
 VAR_6->info = &VAR_3;
 VAR_6->modes = VAR_2;

 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 return FUNC_3(&VAR_4->dev, VAR_6);
}
