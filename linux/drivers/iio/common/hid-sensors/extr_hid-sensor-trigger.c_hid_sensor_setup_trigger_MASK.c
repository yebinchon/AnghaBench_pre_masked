
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct TYPE_7__ {int parent; } ;
struct iio_dev {TYPE_3__ dev; int trig; int id; } ;
struct hid_sensor_common {TYPE_2__* pdev; int work; struct iio_trigger* trigger; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct iio_dev*,struct hid_sensor_common*) ;
 int VAR_2 ;
 int FUNC_3 (struct iio_dev*,struct hid_sensor_common*) ;
 struct iio_trigger* FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (struct iio_trigger*) ;
 int FUNC_6 (struct iio_trigger*) ;
 int FUNC_7 (struct iio_trigger*) ;
 int FUNC_8 (struct iio_trigger*,struct hid_sensor_common*) ;
 int FUNC_9 (struct iio_trigger*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;

int FUNC_13(struct iio_dev *VAR_3, const char *VAR_4,
    struct hid_sensor_common *VAR_5)
{
 int VAR_6;
 struct iio_trigger *VAR_7;

 VAR_7 = FUNC_4("%s-dev%d", VAR_4, VAR_3->id);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(&VAR_3->dev, "Trigger Allocate Failed\n");
  VAR_6 = -VAR_0;
  goto error_ret;
 }

 VAR_7->dev.parent = VAR_3->dev.parent;
 FUNC_8(VAR_7, VAR_5);
 VAR_7->ops = &VAR_2;
 VAR_6 = FUNC_7(VAR_7);

 if (VAR_6) {
  FUNC_1(&VAR_3->dev, "Trigger Register Failed\n");
  goto error_free_trig;
 }
 VAR_5->trigger = VAR_7;
 VAR_3->trig = FUNC_6(VAR_7);

 FUNC_2(VAR_3, VAR_5);

 VAR_6 = FUNC_10(&VAR_3->dev);
 if (VAR_6)
  goto error_unreg_trigger;

 FUNC_3(VAR_3, VAR_5);

 FUNC_0(&VAR_5->work, VAR_1);

 FUNC_12(&VAR_5->pdev->dev, 1);

 FUNC_11(&VAR_5->pdev->dev,
      3000);
 return VAR_6;
error_unreg_trigger:
 FUNC_9(VAR_7);
error_free_trig:
 FUNC_5(VAR_7);
error_ret:
 return VAR_6;
}
