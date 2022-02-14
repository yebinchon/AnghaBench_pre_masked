
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_ipp_task {int flags; int head; } ;
struct exynos_drm_ipp {int lock; TYPE_1__* funcs; struct exynos_drm_ipp_task* task; } ;
struct TYPE_2__ {int (* abort ) (struct exynos_drm_ipp*,struct exynos_drm_ipp_task*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct exynos_drm_ipp_task*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct exynos_drm_ipp*,struct exynos_drm_ipp_task*) ;

__attribute__((used)) static void FUNC_5(struct exynos_drm_ipp *VAR_2,
          struct exynos_drm_ipp_task *VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 if (VAR_3->flags & VAR_1) {

  FUNC_0(VAR_3);
 } else if (VAR_2->task != VAR_3) {

  FUNC_1(&VAR_3->head);
  FUNC_0(VAR_3);
 } else {




  VAR_3->flags |= VAR_0;
  FUNC_3(&VAR_2->lock, VAR_4);
  if (VAR_2->funcs->abort)
   VAR_2->funcs->abort(VAR_2, VAR_3);
  return;
 }
 FUNC_3(&VAR_2->lock, VAR_4);
}
