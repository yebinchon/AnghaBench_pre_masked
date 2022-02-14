
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edid {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 int FUNC_2 (struct drm_connector*,struct edid*) ;
 struct edid* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct edid*) ;

int FUNC_5(struct drm_connector *VAR_0)
{
 struct edid *VAR_1;
 int VAR_2 = 0;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_0, VAR_1);
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  FUNC_4(VAR_1);

  FUNC_0("[CONNECTOR:%d:%s] adding %d modes via fallback override/firmware EDID\n",
         VAR_0->base.id, VAR_0->name, VAR_2);
 }

 return VAR_2;
}
