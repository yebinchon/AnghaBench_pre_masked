
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_rect {int x1; int x2; int y2; scalar_t__ y1; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_crtc_state {struct drm_display_mode adjusted_mode; } ;
struct drm_crtc {int dummy; } ;
struct dpu_crtc_state {int num_mixers; struct drm_rect* lm_bounds; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_display_mode*) ;
 struct dpu_crtc_state* FUNC_2 (struct drm_crtc_state*) ;
 int FUNC_3 (int ,int,struct drm_rect*) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_0,
  struct drm_crtc_state *VAR_1)
{
 struct dpu_crtc_state *VAR_2 = FUNC_2(VAR_1);
 struct drm_display_mode *VAR_3 = &VAR_1->adjusted_mode;
 u32 VAR_4 = VAR_3->hdisplay / VAR_2->num_mixers;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2->num_mixers; VAR_5++) {
  struct drm_rect *VAR_6 = &VAR_2->lm_bounds[VAR_5];
  VAR_6->x1 = VAR_4 * VAR_5;
  VAR_6->y1 = 0;
  VAR_6->x2 = VAR_6->x1 + VAR_4;
  VAR_6->y2 = VAR_3->vdisplay;

  FUNC_3(FUNC_0(VAR_0), VAR_5, VAR_6);
 }

 FUNC_1(VAR_3);
}
