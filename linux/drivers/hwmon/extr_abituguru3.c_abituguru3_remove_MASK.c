
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct abituguru3_data {TYPE_2__* sysfs_attr; int hwmon_dev; } ;
struct TYPE_6__ {scalar_t__ name; } ;
struct TYPE_8__ {TYPE_1__ attr; } ;
struct TYPE_9__ {TYPE_3__ dev_attr; } ;
struct TYPE_7__ {TYPE_3__ dev_attr; } ;


 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 struct abituguru3_data* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 int VAR_2;
 struct abituguru3_data *VAR_3 = FUNC_3(VAR_1);

 FUNC_2(VAR_3->hwmon_dev);
 for (VAR_2 = 0; VAR_3->sysfs_attr[VAR_2].dev_attr.attr.name; VAR_2++)
  FUNC_1(&VAR_1->dev, &VAR_3->sysfs_attr[VAR_2].dev_attr);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_1(&VAR_1->dev,
   &VAR_0[VAR_2].dev_attr);
 return 0;
}
