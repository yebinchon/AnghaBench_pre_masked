
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_timer_trigger {int dummy; } ;
struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; TYPE_1__ dev; int * channels; int modes; int * info; int name; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 struct stm32_timer_trigger* FUNC_3 (struct iio_dev*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct stm32_timer_trigger *FUNC_4(struct device *VAR_3)
{
 struct iio_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_3,
       sizeof(struct stm32_timer_trigger));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->name = FUNC_0(VAR_3);
 VAR_4->dev.parent = VAR_3;
 VAR_4->info = &VAR_2;
 VAR_4->modes = VAR_0;
 VAR_4->num_channels = 1;
 VAR_4->channels = &VAR_1;
 VAR_4->dev.of_node = VAR_3->of_node;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  return ((void*)0);

 return FUNC_3(VAR_4);
}
