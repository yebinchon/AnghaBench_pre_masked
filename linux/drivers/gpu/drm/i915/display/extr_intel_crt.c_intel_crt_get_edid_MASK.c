
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 struct edid* FUNC_1 (struct drm_connector*,struct i2c_adapter*) ;
 int FUNC_2 (struct i2c_adapter*,int) ;
 int FUNC_3 (struct i2c_adapter*) ;

__attribute__((used)) static struct edid *FUNC_4(struct drm_connector *VAR_0,
    struct i2c_adapter *VAR_1)
{
 struct edid *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_2 && !FUNC_3(VAR_1)) {
  FUNC_0("CRT GMBUS EDID read failed, retry using GPIO bit-banging\n");
  FUNC_2(VAR_1, 1);
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  FUNC_2(VAR_1, 0);
 }

 return VAR_2;
}
