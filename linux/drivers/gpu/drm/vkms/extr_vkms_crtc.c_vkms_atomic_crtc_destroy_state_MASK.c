
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_crtc_state {struct vkms_crtc_state* active_planes; int composer_work; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_crtc_state*) ;
 int FUNC_2 (struct vkms_crtc_state*) ;
 struct vkms_crtc_state* FUNC_3 (struct drm_crtc_state*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_0,
        struct drm_crtc_state *VAR_1)
{
 struct vkms_crtc_state *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_1);

 FUNC_0(FUNC_4(&VAR_2->composer_work));
 FUNC_2(VAR_2->active_planes);
 FUNC_2(VAR_2);
}
