
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct vmw_crtc_state {struct drm_crtc_state base; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct vmw_crtc_state* FUNC_2 (int ,int,int ) ;

struct drm_crtc_state *
FUNC_3(struct drm_crtc *VAR_1)
{
 struct drm_crtc_state *VAR_2;
 struct vmw_crtc_state *VAR_3;

 if (FUNC_0(!VAR_1->state))
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_1->state, sizeof(*VAR_3), VAR_0);

 if (!VAR_3)
  return ((void*)0);

 VAR_2 = &VAR_3->base;

 FUNC_1(VAR_1, VAR_2);

 return VAR_2;
}
