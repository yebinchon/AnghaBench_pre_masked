
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config; } ;
struct mtk_plane_state {TYPE_2__ pending; } ;
struct TYPE_3__ {int state; } ;
struct mtk_drm_crtc {int pending_planes; unsigned int layer_nr; struct drm_plane* planes; struct mtk_ddp_comp** ddp_comp; TYPE_1__ base; } ;
struct mtk_ddp_comp {int dummy; } ;
struct mtk_crtc_state {int pending_config; int pending_vrefresh; int pending_height; int pending_width; } ;
struct drm_plane {int state; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (struct mtk_ddp_comp*,int ,int ,int ,int ) ;
 int FUNC_1 (struct mtk_ddp_comp*,unsigned int,struct mtk_plane_state*) ;
 struct mtk_drm_crtc* FUNC_2 (struct drm_crtc*) ;
 struct mtk_crtc_state* FUNC_3 (int ) ;
 struct mtk_plane_state* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0)
{
 struct mtk_drm_crtc *VAR_1 = FUNC_2(VAR_0);
 struct mtk_crtc_state *VAR_2 = FUNC_3(VAR_1->base.state);
 struct mtk_ddp_comp *VAR_3 = VAR_1->ddp_comp[0];
 unsigned int VAR_4;






 if (VAR_2->pending_config) {
  FUNC_0(VAR_3, VAR_2->pending_width,
        VAR_2->pending_height,
        VAR_2->pending_vrefresh, 0);

  VAR_2->pending_config = 0;
 }

 if (VAR_1->pending_planes) {
  for (VAR_4 = 0; VAR_4 < VAR_1->layer_nr; VAR_4++) {
   struct drm_plane *VAR_5 = &VAR_1->planes[VAR_4];
   struct mtk_plane_state *VAR_6;

   VAR_6 = FUNC_4(VAR_5->state);

   if (VAR_6->pending.config) {
    FUNC_1(VAR_3, VAR_4, VAR_6);
    VAR_6->pending.config = 0;
   }
  }
  VAR_1->pending_planes = 0;
 }
}
