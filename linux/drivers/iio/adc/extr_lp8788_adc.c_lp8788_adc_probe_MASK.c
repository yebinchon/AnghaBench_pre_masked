
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct lp8788_adc {int lock; struct lp8788* lp; } ;
struct lp8788 {int pdata; } ;
struct TYPE_4__ {TYPE_2__* parent; int of_node; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 struct lp8788* FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct lp8788_adc* FUNC_6 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct iio_dev*,int ,struct lp8788_adc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct lp8788 *VAR_5 = FUNC_2(VAR_4->dev.parent);
 struct iio_dev *VAR_6;
 struct lp8788_adc *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(&VAR_4->dev, sizeof(*VAR_7));
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_6);
 VAR_7->lp = VAR_5;
 FUNC_9(VAR_4, VAR_6);

 VAR_6->dev.of_node = VAR_4->dev.of_node;
 VAR_8 = FUNC_7(VAR_6, VAR_5->pdata, VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_8(&VAR_7->lock);

 VAR_6->dev.parent = &VAR_4->dev;
 VAR_6->name = VAR_4->name;
 VAR_6->modes = VAR_1;
 VAR_6->info = &VAR_3;
 VAR_6->channels = VAR_2;
 VAR_6->num_channels = FUNC_0(VAR_2);

 VAR_8 = FUNC_4(VAR_6);
 if (VAR_8) {
  FUNC_1(&VAR_4->dev, "iio dev register err: %d\n", VAR_8);
  goto err_iio_device;
 }

 return 0;

err_iio_device:
 FUNC_5(VAR_6);
 return VAR_8;
}
