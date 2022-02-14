
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {TYPE_2__* fbdev; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct drm_connector {int name; TYPE_1__ base; int dev; } ;
struct TYPE_4__ {int helper; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (int *,struct drm_connector*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_dp_mst_topology_mgr *VAR_0,
        struct drm_connector *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_1->dev);

 FUNC_0("[CONNECTOR:%d:%s]\n", VAR_1->base.id, VAR_1->name);
 FUNC_2(VAR_1);

 if (VAR_2->fbdev)
  FUNC_3(&VAR_2->fbdev->helper,
         VAR_1);

 FUNC_1(VAR_1);
}
