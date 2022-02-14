
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ allocated; } ;
struct vc4_plane_state {int base; struct drm_plane_state* dlist; TYPE_2__ lbm; } ;
struct vc4_dev {TYPE_1__* hvs; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dev; } ;
struct TYPE_3__ {int mm_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct drm_plane_state*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct vc4_dev* FUNC_5 (int ) ;
 struct vc4_plane_state* FUNC_6 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_7(struct drm_plane *VAR_0,
        struct drm_plane_state *VAR_1)
{
 struct vc4_dev *VAR_2 = FUNC_5(VAR_0->dev);
 struct vc4_plane_state *VAR_3 = FUNC_6(VAR_1);

 if (VAR_3->lbm.allocated) {
  unsigned long VAR_4;

  FUNC_3(&VAR_2->hvs->mm_lock, VAR_4);
  FUNC_1(&VAR_3->lbm);
  FUNC_4(&VAR_2->hvs->mm_lock, VAR_4);
 }

 FUNC_2(VAR_3->dlist);
 FUNC_0(&VAR_3->base);
 FUNC_2(VAR_1);
}
