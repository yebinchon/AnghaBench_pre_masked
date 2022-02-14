
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_plane_wm {int trans_wm; int * uv_wm; int * wm; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(struct drm_i915_private *VAR_0,
    const struct skl_plane_wm *VAR_1,
    const struct skl_plane_wm *VAR_2)
{
 int VAR_3, VAR_4 = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++) {
  if (!FUNC_1(&VAR_1->wm[VAR_3], &VAR_2->wm[VAR_3]) ||
      !FUNC_1(&VAR_1->uv_wm[VAR_3], &VAR_2->uv_wm[VAR_3]))
   return 0;
 }

 return FUNC_1(&VAR_1->trans_wm, &VAR_2->trans_wm);
}
