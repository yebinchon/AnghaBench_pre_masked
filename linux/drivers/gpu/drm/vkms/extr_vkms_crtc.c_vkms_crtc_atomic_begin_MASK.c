
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_output {int lock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dummy; } ;


 struct vkms_output* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct vkms_output *VAR_2 = FUNC_0(VAR_0);




 FUNC_1(&VAR_2->lock);
}
