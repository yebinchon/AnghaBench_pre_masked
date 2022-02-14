
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gma_encoder {TYPE_1__* i2c_bus; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int adapter; } ;


 int FUNC_0 (struct drm_connector*,struct edid*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_2 (struct drm_connector*,int *) ;
 struct gma_encoder* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct edid*) ;

__attribute__((used)) static int FUNC_5(struct drm_connector *VAR_0)
{
 struct gma_encoder *VAR_1 = FUNC_3(VAR_0);
 struct edid *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 VAR_2 = FUNC_2(VAR_0, &VAR_1->i2c_bus->adapter);
 if (VAR_2) {
  FUNC_1(VAR_0, VAR_2);
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  FUNC_4(VAR_2);
 }
 return VAR_3;
}
