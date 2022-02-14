
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc {int dummy; } ;
struct drm_simple_display_pipe {struct drm_crtc crtc; } ;
struct aspeed_gfx {int dummy; } ;


 int FUNC_0 (struct aspeed_gfx*) ;
 int FUNC_1 (struct drm_crtc*) ;
 struct aspeed_gfx* FUNC_2 (struct drm_simple_display_pipe*) ;

__attribute__((used)) static void FUNC_3(struct drm_simple_display_pipe *VAR_0)
{
 struct aspeed_gfx *VAR_1 = FUNC_2(VAR_0);
 struct drm_crtc *VAR_2 = &VAR_0->crtc;

 FUNC_1(VAR_2);
 FUNC_0(VAR_1);
}
