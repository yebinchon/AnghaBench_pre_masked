
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dirty; int config; } ;
struct mtk_plane_state {TYPE_2__ pending; } ;
struct mtk_drm_private {TYPE_3__* data; } ;
struct mtk_drm_crtc {int pending_needs_vblank; int layer_nr; int pending_planes; int ddp_comp_nr; int mutex; int * ddp_comp; struct drm_plane* planes; scalar_t__ event; } ;
struct drm_plane {int state; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_4__* state; TYPE_1__* dev; } ;
struct TYPE_8__ {scalar_t__ color_mgmt_changed; } ;
struct TYPE_7__ {scalar_t__ shadow_register; } ;
struct TYPE_5__ {struct mtk_drm_private* dev_private; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mtk_drm_crtc* FUNC_5 (struct drm_crtc*) ;
 struct mtk_plane_state* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_0,
          struct drm_crtc_state *VAR_1)
{
 struct mtk_drm_crtc *VAR_2 = FUNC_5(VAR_0);
 struct mtk_drm_private *VAR_3 = VAR_0->dev->dev_private;
 unsigned int VAR_4 = 0;
 int VAR_5;

 if (VAR_2->event)
  VAR_2->pending_needs_vblank = 1;
 for (VAR_5 = 0; VAR_5 < VAR_2->layer_nr; VAR_5++) {
  struct drm_plane *VAR_6 = &VAR_2->planes[VAR_5];
  struct mtk_plane_state *VAR_7;

  VAR_7 = FUNC_6(VAR_6->state);
  if (VAR_7->pending.dirty) {
   VAR_7->pending.config = 1;
   VAR_7->pending.dirty = 0;
   VAR_4 |= FUNC_0(VAR_5);
  }
 }
 if (VAR_4)
  VAR_2->pending_planes = 1;
 if (VAR_0->state->color_mgmt_changed)
  for (VAR_5 = 0; VAR_5 < VAR_2->ddp_comp_nr; VAR_5++)
   FUNC_2(VAR_2->ddp_comp[VAR_5], VAR_0->state);

 if (VAR_3->data->shadow_register) {
  FUNC_3(VAR_2->mutex);
  FUNC_1(VAR_0);
  FUNC_4(VAR_2->mutex);
 }
}
