
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int dummy; } ;
struct vkms_crtc_state {struct drm_crtc_state base; int composer_work; } ;
struct drm_crtc {int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_crtc*,struct drm_crtc_state*) ;
 struct vkms_crtc_state* FUNC_3 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct drm_crtc_state *
FUNC_4(struct drm_crtc *VAR_2)
{
 struct vkms_crtc_state *VAR_3;

 if (FUNC_1(!VAR_2->state))
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_2, &VAR_3->base);

 FUNC_0(&VAR_3->composer_work, VAR_1);

 return &VAR_3->base;
}
