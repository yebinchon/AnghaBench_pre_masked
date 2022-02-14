
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct hid_sensor_hub_device* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hid_sensor_hub_device {int usage; } ;
struct hid_sensor_custom {TYPE_3__* pdev; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct hid_sensor_custom*) ;
 int FUNC_1 (struct hid_sensor_custom*) ;
 struct hid_sensor_custom* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct hid_sensor_hub_device*,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct hid_sensor_custom *VAR_2 = FUNC_2(VAR_1);
 struct hid_sensor_hub_device *VAR_3 = VAR_1->dev.platform_data;

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->pdev->dev.kobj,
      &VAR_0);
 FUNC_3(VAR_3, VAR_3->usage);

 return 0;
}
