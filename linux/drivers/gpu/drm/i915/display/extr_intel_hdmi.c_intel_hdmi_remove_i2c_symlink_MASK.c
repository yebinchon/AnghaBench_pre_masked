
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int name; } ;
struct TYPE_3__ {struct kobject kobj; } ;
struct i2c_adapter {TYPE_1__ dev; } ;
struct drm_connector {TYPE_2__* kdev; } ;
struct TYPE_4__ {struct kobject kobj; } ;


 struct i2c_adapter* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct kobject*,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_0)
{
 struct i2c_adapter *VAR_1 = FUNC_0(VAR_0);
 struct kobject *VAR_2 = &VAR_1->dev.kobj;
 struct kobject *VAR_3 = &VAR_0->kdev->kobj;

 FUNC_1(VAR_3, VAR_2->name);
}
