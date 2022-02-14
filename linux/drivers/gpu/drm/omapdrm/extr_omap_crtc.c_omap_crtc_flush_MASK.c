
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_crtc_state {int manually_updated; } ;
struct omap_crtc {int update_work; } ;
struct drm_crtc {int state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct omap_crtc* FUNC_2 (struct drm_crtc*) ;
 struct omap_crtc_state* FUNC_3 (int ) ;

void FUNC_4(struct drm_crtc *VAR_0)
{
 struct omap_crtc *VAR_1 = FUNC_2(VAR_0);
 struct omap_crtc_state *VAR_2 = FUNC_3(VAR_0->state);

 if (!VAR_2->manually_updated)
  return;

 if (!FUNC_0(&VAR_1->update_work))
  FUNC_1(&VAR_1->update_work, 0);
}
