
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int * channels; int modes; int * info; int name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct iio_dev* FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct iio_dev *VAR_6;

 VAR_6 = FUNC_1(VAR_5, 0);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev.parent = VAR_5;
 VAR_6->dev.of_node = VAR_5->of_node;
 VAR_6->name = FUNC_0(VAR_5);
 VAR_6->info = &VAR_3;
 VAR_6->modes = VAR_1;

 VAR_6->num_channels = 1;
 VAR_6->channels = &VAR_2;

 FUNC_3(VAR_4, VAR_6);

 return FUNC_2(&VAR_4->dev, VAR_6);
}
