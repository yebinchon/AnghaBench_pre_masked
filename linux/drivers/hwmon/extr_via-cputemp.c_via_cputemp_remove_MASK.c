
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_cputemp_data {scalar_t__ vrm; int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;
 struct via_cputemp_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct via_cputemp_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3->hwmon_dev);
 if (VAR_3->vrm)
  FUNC_0(&VAR_2->dev, &VAR_0);
 FUNC_3(&VAR_2->dev.kobj, &VAR_1);
 return 0;
}
