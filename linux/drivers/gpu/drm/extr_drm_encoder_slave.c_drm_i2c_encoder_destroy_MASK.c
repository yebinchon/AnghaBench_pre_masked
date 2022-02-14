
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct drm_encoder_slave {int * bus_priv; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_3__ {struct module* owner; } ;


 struct i2c_client* FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct module*) ;
 struct drm_encoder_slave* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_0)
{
 struct drm_encoder_slave *VAR_1 = FUNC_3(VAR_0);
 struct i2c_client *VAR_2 = FUNC_0(VAR_0);
 struct module *VAR_3 = VAR_2->dev.driver->owner;

 FUNC_1(VAR_2);
 VAR_1->bus_priv = ((void*)0);

 FUNC_2(VAR_3);
}
