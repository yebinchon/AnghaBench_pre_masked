
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct dpu_crtc {int vblank_cb_count; int vblank_cb_time; } ;


 int FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (struct drm_crtc*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 struct dpu_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct drm_crtc *VAR_0)
{
 struct dpu_crtc *VAR_1 = FUNC_6(VAR_0);


 if (FUNC_3(VAR_1->vblank_cb_time, FUNC_5(0, 0)) == 0)
  VAR_1->vblank_cb_time = FUNC_4();
 else
  VAR_1->vblank_cb_count++;
 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_7(FUNC_0(VAR_0));
}
