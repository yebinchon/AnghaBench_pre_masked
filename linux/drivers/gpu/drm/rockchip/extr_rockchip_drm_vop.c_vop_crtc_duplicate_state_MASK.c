
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct rockchip_crtc_state {struct drm_crtc_state base; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct rockchip_crtc_state* FUNC_1 (int,int ) ;

__attribute__((used)) static struct drm_crtc_state *FUNC_2(struct drm_crtc *VAR_1)
{
 struct rockchip_crtc_state *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(VAR_1, &VAR_2->base);
 return &VAR_2->base;
}
