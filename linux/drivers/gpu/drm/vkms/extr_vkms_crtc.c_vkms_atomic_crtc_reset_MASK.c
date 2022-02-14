
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vkms_crtc_state {int composer_work; int base; } ;
struct drm_crtc {scalar_t__ state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct drm_crtc*,int *) ;
 struct vkms_crtc_state* FUNC_2 (int,int ) ;
 int FUNC_3 (struct drm_crtc*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_2)
{
 struct vkms_crtc_state *VAR_3 =
  FUNC_2(sizeof(*VAR_3), VAR_0);

 if (VAR_2->state)
  FUNC_3(VAR_2, VAR_2->state);

 FUNC_1(VAR_2, &VAR_3->base);
 if (VAR_3)
  FUNC_0(&VAR_3->composer_work, VAR_1);
}
