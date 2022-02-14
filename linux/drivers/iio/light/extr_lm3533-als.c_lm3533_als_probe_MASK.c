
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int parent; struct lm3533_als_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct lm3533_als_platform_data {int dummy; } ;
struct lm3533_als {scalar_t__ irq; int thresh_mutex; int zone; struct platform_device* pdev; struct lm3533* lm3533; } ;
struct lm3533 {scalar_t__ irq; } ;
struct TYPE_5__ {int parent; } ;
struct iio_dev {int modes; TYPE_1__ dev; int name; int num_channels; int channels; int * info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct lm3533* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 struct iio_dev* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (scalar_t__,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct lm3533_als* FUNC_8 (struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_9 (struct lm3533_als*) ;
 int FUNC_10 (struct lm3533_als*) ;
 int VAR_4 ;
 int FUNC_11 (struct lm3533_als*,struct lm3533_als_platform_data*) ;
 int FUNC_12 (struct lm3533_als*,struct iio_dev*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct platform_device*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct lm3533 *VAR_6;
 struct lm3533_als_platform_data *VAR_7;
 struct lm3533_als *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_3(VAR_5->dev.parent);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = VAR_5->dev.platform_data;
 if (!VAR_7) {
  FUNC_2(&VAR_5->dev, "no platform data\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_5->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;

 VAR_9->info = &VAR_4;
 VAR_9->channels = VAR_3;
 VAR_9->num_channels = FUNC_0(VAR_3);
 VAR_9->name = FUNC_4(&VAR_5->dev);
 VAR_9->dev.parent = VAR_5->dev.parent;
 VAR_9->modes = VAR_2;

 VAR_8 = FUNC_8(VAR_9);
 VAR_8->lm3533 = VAR_6;
 VAR_8->pdev = VAR_5;
 VAR_8->irq = VAR_6->irq;
 FUNC_1(&VAR_8->zone, 0);
 FUNC_13(&VAR_8->thresh_mutex);

 FUNC_14(VAR_5, VAR_9);

 if (VAR_8->irq) {
  VAR_10 = FUNC_12(VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_11(VAR_8, VAR_7);
 if (VAR_10)
  goto err_free_irq;

 VAR_10 = FUNC_10(VAR_8);
 if (VAR_10)
  goto err_free_irq;

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10) {
  FUNC_2(&VAR_5->dev, "failed to register ALS\n");
  goto err_disable;
 }

 return 0;

err_disable:
 FUNC_9(VAR_8);
err_free_irq:
 if (VAR_8->irq)
  FUNC_6(VAR_8->irq, VAR_9);

 return VAR_10;
}
