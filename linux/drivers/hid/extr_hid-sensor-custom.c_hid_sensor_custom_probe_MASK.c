
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; struct hid_sensor_hub_device* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct hid_sensor_hub_device {int usage; } ;
struct TYPE_4__ {struct platform_device* pdev; int send_event; int capture_sample; } ;
struct hid_sensor_custom {struct platform_device* pdev; TYPE_1__ callbacks; int mutex; struct hid_sensor_hub_device* hsdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct hid_sensor_custom* FUNC_1 (TYPE_2__*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct hid_sensor_custom*) ;
 int FUNC_3 (struct hid_sensor_custom*) ;
 int FUNC_4 (struct hid_sensor_custom*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct hid_sensor_custom*) ;
 int FUNC_7 (struct hid_sensor_hub_device*,int ,TYPE_1__*) ;
 int FUNC_8 (struct hid_sensor_hub_device*,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct hid_sensor_custom *VAR_6;
 struct hid_sensor_hub_device *VAR_7 = VAR_5->dev.platform_data;
 int VAR_8;

 VAR_6 = FUNC_1(&VAR_5->dev, sizeof(*VAR_6),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->callbacks.capture_sample = VAR_3;
 VAR_6->callbacks.send_event = VAR_4;
 VAR_6->callbacks.pdev = VAR_5;
 VAR_6->hsdev = VAR_7;
 VAR_6->pdev = VAR_5;
 FUNC_5(&VAR_6->mutex);
 FUNC_6(VAR_5, VAR_6);
 VAR_8 = FUNC_7(VAR_7, VAR_7->usage,
        &VAR_6->callbacks);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_5->dev, "callback reg failed\n");
  return VAR_8;
 }

 VAR_8 = FUNC_9(&VAR_6->pdev->dev.kobj,
     &VAR_2);
 if (VAR_8)
  goto err_remove_callback;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  goto err_remove_group;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  goto err_remove_attributes;

 return 0;

err_remove_attributes:
 FUNC_4(VAR_6);
err_remove_group:
 FUNC_10(&VAR_6->pdev->dev.kobj,
      &VAR_2);
err_remove_callback:
 FUNC_8(VAR_7, VAR_7->usage);

 return VAR_8;
}
