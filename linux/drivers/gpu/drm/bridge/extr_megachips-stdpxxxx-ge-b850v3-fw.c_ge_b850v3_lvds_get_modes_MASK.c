
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {struct edid* edid; struct i2c_client* stdp2690_i2c; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct edid*) ;
 scalar_t__ FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_1)
{
 struct i2c_client *VAR_2;
 int VAR_3 = 0;

 VAR_2 = VAR_0->stdp2690_i2c;

 FUNC_2(VAR_0->edid);
 VAR_0->edid = (struct edid *)FUNC_3(VAR_2);

 if (VAR_0->edid) {
  FUNC_1(VAR_1,
            VAR_0->edid);
  VAR_3 = FUNC_0(VAR_1,
            VAR_0->edid);
 }

 return VAR_3;
}
