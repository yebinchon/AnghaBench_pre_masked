
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct i2c_client {int dummy; } ;
struct TYPE_9__ {int brightness_set; int name; } ;
struct TYPE_7__ {TYPE_3__ cdev; struct i2c_client* i2c_client; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 struct i2c_client* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct i2c_client *VAR_5 = FUNC_4(VAR_2->dev.parent);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_0[VAR_3].cdev.name = VAR_0[VAR_3].name;
  VAR_0[VAR_3].cdev.brightness_set = VAR_1;
  VAR_0[VAR_3].i2c_client = VAR_5;
  VAR_4 = FUNC_3(&VAR_2->dev, &VAR_0[VAR_3].cdev);
  if (VAR_4 < 0) {
   FUNC_1(&VAR_2->dev, "failed to register LED device\n");
   return VAR_4;
  }
 }
 FUNC_2(&VAR_2->dev, "MEN 140F21P00 BMC LED device enabled\n");

 return 0;

}
