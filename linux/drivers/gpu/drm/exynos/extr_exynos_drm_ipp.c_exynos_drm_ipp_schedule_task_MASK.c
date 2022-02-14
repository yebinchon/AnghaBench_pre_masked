
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp_task {int head; } ;
struct exynos_drm_ipp {int lock; int todo_list; } ;


 int FUNC_0 (struct exynos_drm_ipp*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_ipp *VAR_0,
      struct exynos_drm_ipp_task *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->lock, VAR_2);
 FUNC_1(&VAR_1->head, &VAR_0->todo_list);
 FUNC_3(&VAR_0->lock, VAR_2);

 FUNC_0(VAR_0);
}
