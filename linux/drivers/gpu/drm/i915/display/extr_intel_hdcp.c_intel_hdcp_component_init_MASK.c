
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct drm_i915_private {int hdcp_comp_added; int hdcp_comp_mutex; TYPE_1__ drm; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_i915_private *VAR_2)
{
 int VAR_3;

 if (!FUNC_3(VAR_2))
  return;

 FUNC_4(&VAR_2->hdcp_comp_mutex);
 FUNC_1(VAR_2->hdcp_comp_added);

 VAR_2->hdcp_comp_added = 1;
 FUNC_5(&VAR_2->hdcp_comp_mutex);
 VAR_3 = FUNC_2(VAR_2->drm.dev, &VAR_1,
      VAR_0);
 if (VAR_3 < 0) {
  FUNC_0("Failed at component add(%d)\n", VAR_3);
  FUNC_4(&VAR_2->hdcp_comp_mutex);
  VAR_2->hdcp_comp_added = 0;
  FUNC_5(&VAR_2->hdcp_comp_mutex);
  return;
 }
}
