
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sch5636_data {scalar_t__ hwmon_dev; scalar_t__ watchdog; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {int dev_attr; } ;
struct TYPE_6__ {int dev_attr; } ;
struct TYPE_5__ {int dev_attr; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 struct sch5636_data* FUNC_3 (struct platform_device*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_5)
{
 struct sch5636_data *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 if (VAR_6->watchdog)
  FUNC_4(VAR_6->watchdog);

 if (VAR_6->hwmon_dev)
  FUNC_2(VAR_6->hwmon_dev);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++)
  FUNC_1(&VAR_5->dev, &VAR_2[VAR_7].dev_attr);

 for (VAR_7 = 0; VAR_7 < VAR_1 * 3; VAR_7++)
  FUNC_1(&VAR_5->dev,
       &VAR_4[VAR_7].dev_attr);

 for (VAR_7 = 0; VAR_7 < VAR_0 * 3; VAR_7++)
  FUNC_1(&VAR_5->dev,
       &VAR_3[VAR_7].dev_attr);

 return 0;
}
