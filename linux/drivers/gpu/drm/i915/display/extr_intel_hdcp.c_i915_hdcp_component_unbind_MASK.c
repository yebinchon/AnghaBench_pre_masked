
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int hdcp_comp_mutex; int * hdcp_master; } ;
struct device {int dummy; } ;


 int FUNC_0 (char*) ;
 struct drm_i915_private* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0,
           struct device *VAR_1, void *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_1(VAR_0);

 FUNC_0("I915 HDCP comp unbind\n");
 FUNC_2(&VAR_3->hdcp_comp_mutex);
 VAR_3->hdcp_master = ((void*)0);
 FUNC_3(&VAR_3->hdcp_comp_mutex);
}
