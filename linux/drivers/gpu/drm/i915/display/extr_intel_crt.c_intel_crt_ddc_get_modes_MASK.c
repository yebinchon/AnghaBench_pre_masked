
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_1 (struct drm_connector*,struct i2c_adapter*) ;
 int FUNC_2 (struct edid*) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_0,
    struct i2c_adapter *VAR_1)
{
 struct edid *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 FUNC_2(VAR_2);

 return VAR_3;
}
