
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nouveau_drm {TYPE_1__* fbcon; } ;
struct drm_connector {int dev; } ;
struct TYPE_2__ {int helper; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *,struct drm_connector*) ;
 struct nouveau_drm* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_0)
{
 struct nouveau_drm *VAR_1 = FUNC_2(VAR_0->dev);

 FUNC_1(&VAR_1->fbcon->helper, VAR_0);

 FUNC_0(VAR_0);
}
