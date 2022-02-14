
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sht15_data {int read_lock; int reg; int nb; int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sht15_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (struct sht15_data*) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_2)
{
 struct sht15_data *VAR_3 = FUNC_4(VAR_2);





 FUNC_2(&VAR_3->read_lock);
 if (FUNC_7(VAR_3)) {
  FUNC_3(&VAR_3->read_lock);
  return -VAR_0;
 }
 FUNC_1(VAR_3->hwmon_dev);
 FUNC_8(&VAR_2->dev.kobj, &VAR_1);
 if (!FUNC_0(VAR_3->reg)) {
  FUNC_6(VAR_3->reg, &VAR_3->nb);
  FUNC_5(VAR_3->reg);
 }

 FUNC_3(&VAR_3->read_lock);

 return 0;
}
