
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_dp_device {int dev; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int self_refresh_active; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 struct drm_crtc_state* FUNC_1 (struct drm_atomic_state*,struct drm_crtc*) ;
 struct drm_crtc* FUNC_2 (struct drm_encoder*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_crtc*,int ) ;
 struct rockchip_dp_device* FUNC_4 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_1,
         struct drm_atomic_state *VAR_2)
{
 struct rockchip_dp_device *VAR_3 = FUNC_4(VAR_1);
 struct drm_crtc *VAR_4;
 struct drm_crtc_state *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (!VAR_4)
  return;

 VAR_5 = FUNC_1(VAR_2, VAR_4);

 if (!VAR_5 || !VAR_5->self_refresh_active)
  return;

 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_6)
  FUNC_0(VAR_3->dev, "line flag irq timed out\n");
}
