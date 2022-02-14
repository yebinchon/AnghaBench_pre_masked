
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_crtc_state {int base; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rockchip_crtc_state*) ;
 struct rockchip_crtc_state* FUNC_2 (struct drm_crtc_state*) ;

__attribute__((used)) static void FUNC_3(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct rockchip_crtc_state *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->base);
 FUNC_1(VAR_2);
}
