
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_ipp_task {TYPE_1__* event; int dst; int src; int dev; } ;
struct exynos_drm_ipp {int drm_dev; } ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (int ,char*,struct exynos_drm_ipp_task*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct exynos_drm_ipp_task*) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_ipp *VAR_0,
     struct exynos_drm_ipp_task *VAR_1)
{
 FUNC_0(VAR_1->dev, "Freeing task %pK\n", VAR_1);

 FUNC_2(&VAR_1->src);
 FUNC_2(&VAR_1->dst);
 if (VAR_1->event)
  FUNC_1(VAR_0->drm_dev, &VAR_1->event->base);
 FUNC_3(VAR_1);
}
