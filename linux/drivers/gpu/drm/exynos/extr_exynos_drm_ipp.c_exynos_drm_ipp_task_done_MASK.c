
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp_task {int flags; int ret; int cleanup_work; int dev; struct exynos_drm_ipp* ipp; } ;
struct exynos_drm_ipp {int done_wq; int lock; struct exynos_drm_ipp_task* task; int id; } ;


 int FUNC_0 (int ,char*,int ,struct exynos_drm_ipp_task*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct exynos_drm_ipp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct exynos_drm_ipp_task *VAR_3, int VAR_4)
{
 struct exynos_drm_ipp *VAR_5 = VAR_3->ipp;
 unsigned long VAR_6;

 FUNC_0(VAR_3->dev, "ipp: %d, task %pK done: %d\n",
        VAR_5->id, VAR_3, VAR_4);

 FUNC_4(&VAR_5->lock, VAR_6);
 if (VAR_5->task == VAR_3)
  VAR_5->task = ((void*)0);
 VAR_3->flags |= VAR_1;
 VAR_3->ret = VAR_4;
 FUNC_5(&VAR_5->lock, VAR_6);

 FUNC_2(VAR_5);
 FUNC_6(&VAR_5->done_wq);

 if (VAR_3->flags & VAR_0) {
  FUNC_1(&VAR_3->cleanup_work, VAR_2);
  FUNC_3(&VAR_3->cleanup_work);
 }
}
