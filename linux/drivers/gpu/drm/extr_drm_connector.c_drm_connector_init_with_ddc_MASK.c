
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector_funcs {int dummy; } ;
struct drm_connector {struct i2c_adapter* ddc; } ;


 int FUNC_0 (struct drm_device*,struct drm_connector*,struct drm_connector_funcs const*,int) ;

int FUNC_1(struct drm_device *VAR_0,
    struct drm_connector *VAR_1,
    const struct drm_connector_funcs *VAR_2,
    int VAR_3,
    struct i2c_adapter *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;


 VAR_1->ddc = VAR_4;

 return VAR_5;
}
