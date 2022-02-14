
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_ipp_task {int ret; int ipp; int * event; } ;


 int FUNC_0 (struct exynos_drm_ipp_task*) ;
 int FUNC_1 (int ,struct exynos_drm_ipp_task*) ;

__attribute__((used)) static int FUNC_2(struct exynos_drm_ipp_task *VAR_0)
{
 int VAR_1 = VAR_0->ret;

 if (VAR_1 == 0 && VAR_0->event) {
  FUNC_0(VAR_0);

  VAR_0->event = ((void*)0);
 }

 FUNC_1(VAR_0->ipp, VAR_0);
 return VAR_1;
}
