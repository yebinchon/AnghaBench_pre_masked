
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct drm_i915_private {int hdcp_comp_added; TYPE_1__ drm; int hdcp_comp_mutex; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_i915_private *VAR_1)
{
 FUNC_1(&VAR_1->hdcp_comp_mutex);
 if (!VAR_1->hdcp_comp_added) {
  FUNC_2(&VAR_1->hdcp_comp_mutex);
  return;
 }

 VAR_1->hdcp_comp_added = 0;
 FUNC_2(&VAR_1->hdcp_comp_mutex);

 FUNC_0(VAR_1->drm.dev, &VAR_0);
}
