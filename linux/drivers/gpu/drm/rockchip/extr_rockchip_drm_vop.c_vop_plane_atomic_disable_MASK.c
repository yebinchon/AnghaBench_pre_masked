
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_win {int dummy; } ;
struct vop {int reg_lock; } ;
struct drm_plane_state {int crtc; } ;
struct drm_plane {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vop* FUNC_2 (int ) ;
 struct vop_win* FUNC_3 (struct drm_plane*) ;
 int FUNC_4 (struct vop*,struct vop_win*) ;

__attribute__((used)) static void FUNC_5(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct vop_win *VAR_2 = FUNC_3(VAR_0);
 struct vop *VAR_3 = FUNC_2(VAR_1->crtc);

 if (!VAR_1->crtc)
  return;

 FUNC_0(&VAR_3->reg_lock);

 FUNC_4(VAR_3, VAR_2);

 FUNC_1(&VAR_3->reg_lock);
}
