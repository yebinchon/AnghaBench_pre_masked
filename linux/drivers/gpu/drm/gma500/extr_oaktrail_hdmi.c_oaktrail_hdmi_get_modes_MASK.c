
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 struct i2c_adapter* FUNC_3 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_1)
{
 struct i2c_adapter *VAR_2;
 struct edid *VAR_3;
 int VAR_4 = 0;






 VAR_2 = FUNC_3(3);
 if (VAR_2 == ((void*)0)) {
  FUNC_0("No ddc adapter available!\n");
  VAR_3 = (struct edid *)VAR_0;
 } else {
  VAR_3 = (struct edid *)VAR_0;

 }

 if (VAR_3) {
  FUNC_2(VAR_1, VAR_3);
  VAR_4 = FUNC_1(VAR_1, VAR_3);
 }
 return VAR_4;
}
