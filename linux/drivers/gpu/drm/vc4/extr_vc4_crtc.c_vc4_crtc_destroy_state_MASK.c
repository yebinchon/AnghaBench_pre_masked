
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {TYPE_1__* hvs; } ;
struct TYPE_4__ {scalar_t__ allocated; } ;
struct vc4_crtc_state {TYPE_2__ mm; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {int dev; } ;
struct TYPE_3__ {int mm_lock; } ;


 int FUNC_0 (struct drm_crtc*,struct drm_crtc_state*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vc4_crtc_state* FUNC_4 (struct drm_crtc_state*) ;
 struct vc4_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_0,
       struct drm_crtc_state *VAR_1)
{
 struct vc4_dev *VAR_2 = FUNC_5(VAR_0->dev);
 struct vc4_crtc_state *VAR_3 = FUNC_4(VAR_1);

 if (VAR_3->mm.allocated) {
  unsigned long VAR_4;

  FUNC_2(&VAR_2->hvs->mm_lock, VAR_4);
  FUNC_1(&VAR_3->mm);
  FUNC_3(&VAR_2->hvs->mm_lock, VAR_4);

 }

 FUNC_0(VAR_0, VAR_1);
}
