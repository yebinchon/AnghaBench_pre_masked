
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {scalar_t__ force; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct edid* FUNC_0 (struct drm_connector*,int ,struct i2c_adapter*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct i2c_adapter*) ;

struct edid *FUNC_3(struct drm_connector *VAR_3,
     struct i2c_adapter *VAR_4)
{
 struct edid *VAR_5;

 if (VAR_3->force == VAR_0)
  return ((void*)0);

 if (VAR_3->force == VAR_1 && !FUNC_2(VAR_4))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_3, VAR_5);
 return VAR_5;
}
