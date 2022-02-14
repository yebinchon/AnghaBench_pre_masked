
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_4__ {TYPE_3__* driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct i2c_board_info {scalar_t__ platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i2c_encoder_driver {int (* encoder_init ) (struct i2c_client*,struct drm_device*,struct drm_encoder_slave*) ;} ;
struct drm_encoder_slave {int base; TYPE_2__* slave_funcs; struct i2c_client* bus_priv; } ;
struct drm_device {int dummy; } ;
struct TYPE_6__ {struct module* owner; } ;
struct TYPE_5__ {int (* set_config ) (int *,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i2c_client* FUNC_0 (struct i2c_adapter*,struct i2c_board_info const*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct drm_device*,struct drm_encoder_slave*) ;
 int FUNC_5 (int *,scalar_t__) ;
 struct drm_i2c_encoder_driver* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct module*) ;

int FUNC_9(struct drm_device *VAR_3,
    struct drm_encoder_slave *VAR_4,
    struct i2c_adapter *VAR_5,
    const struct i2c_board_info *VAR_6)
{
 struct module *VAR_7 = ((void*)0);
 struct i2c_client *VAR_8;
 struct drm_i2c_encoder_driver *VAR_9;
 int VAR_10 = 0;

 FUNC_3("%s%s", VAR_2, VAR_6->type);

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto fail;
 }

 if (!VAR_8->dev.driver) {
  VAR_10 = -VAR_0;
  goto fail_unregister;
 }

 VAR_7 = VAR_8->dev.driver->owner;
 if (!FUNC_8(VAR_7)) {
  VAR_10 = -VAR_0;
  goto fail_unregister;
 }

 VAR_4->bus_priv = VAR_8;

 VAR_9 = FUNC_6(FUNC_7(VAR_8->dev.driver));

 VAR_10 = VAR_9->encoder_init(VAR_8, VAR_3, VAR_4);
 if (VAR_10)
  goto fail_unregister;

 if (VAR_6->platform_data)
  VAR_4->slave_funcs->set_config(&VAR_4->base,
       VAR_6->platform_data);

 return 0;

fail_unregister:
 FUNC_1(VAR_8);
 FUNC_2(VAR_7);
fail:
 return VAR_10;
}
