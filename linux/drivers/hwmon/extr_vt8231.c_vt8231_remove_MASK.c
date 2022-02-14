
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vt8231_data {int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct vt8231_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct vt8231_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_1(VAR_4->hwmon_dev);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  FUNC_3(&VAR_3->dev.kobj, &VAR_2[VAR_5]);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  FUNC_3(&VAR_3->dev.kobj, &VAR_1[VAR_5]);

 FUNC_3(&VAR_3->dev.kobj, &VAR_0);

 return 0;
}
