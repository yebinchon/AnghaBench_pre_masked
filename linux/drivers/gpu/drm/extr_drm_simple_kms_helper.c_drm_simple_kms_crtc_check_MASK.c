
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_crtc_state {int plane_mask; int enable; int state; } ;
struct drm_crtc {int primary; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct drm_crtc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_crtc *VAR_1,
         struct drm_crtc_state *VAR_2)
{
 bool VAR_3 = VAR_2->plane_mask &
      FUNC_1(VAR_1->primary);


 if (VAR_3 != VAR_2->enable)
  return -VAR_0;

 return FUNC_0(VAR_2->state, VAR_1);
}
