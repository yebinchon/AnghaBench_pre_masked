
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skl_plane_wm {int trans_wm; int * wm; } ;
struct skl_ddb_entry {int dummy; } ;
struct TYPE_5__ {int dev; } ;
struct intel_plane {int id; int pipe; TYPE_1__ base; } ;
struct TYPE_6__ {struct skl_plane_wm* planes; } ;
struct TYPE_7__ {struct skl_ddb_entry* plane_ddb_y; TYPE_2__ optimal; } ;
struct TYPE_8__ {TYPE_3__ skl; } ;
struct intel_crtc_state {TYPE_4__ wm; } ;
struct drm_i915_private {int dummy; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*,int ,struct skl_ddb_entry const*) ;
 int FUNC_5 (struct drm_i915_private*,int ,int *) ;
 struct drm_i915_private* FUNC_6 (int ) ;

void FUNC_7(struct intel_plane *VAR_0,
    const struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_0->base.dev);
 int VAR_3, VAR_4 = FUNC_3(VAR_2);
 enum plane_id VAR_5 = VAR_0->id;
 enum pipe VAR_6 = VAR_0->pipe;
 const struct skl_plane_wm *VAR_7 =
  &VAR_1->wm.skl.optimal.planes[VAR_5];
 const struct skl_ddb_entry *VAR_8 =
  &VAR_1->wm.skl.plane_ddb_y[VAR_5];

 for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++) {
  FUNC_5(VAR_2, FUNC_1(VAR_6, VAR_3),
       &VAR_7->wm[VAR_3]);
 }
 FUNC_5(VAR_2, FUNC_2(VAR_6), &VAR_7->trans_wm);

 FUNC_4(VAR_2, FUNC_0(VAR_6), VAR_8);
}
