
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hid_sensor_custom {int sensor_field_count; TYPE_3__* fields; TYPE_2__* pdev; } ;
struct TYPE_6__ {int hid_custom_attribute_group; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct hid_sensor_custom *
        VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->sensor_field_count; ++VAR_1)
  FUNC_1(&VAR_0->pdev->dev.kobj,
       &VAR_0->fields[VAR_1].
       hid_custom_attribute_group);

 FUNC_0(VAR_0->fields);
}
