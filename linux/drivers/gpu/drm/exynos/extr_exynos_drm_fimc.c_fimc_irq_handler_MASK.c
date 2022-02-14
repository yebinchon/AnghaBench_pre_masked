
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimc_context {int id; int dev; struct exynos_drm_ipp_task* task; } ;
struct exynos_drm_ipp_task {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct exynos_drm_ipp_task*,int ) ;
 int FUNC_2 (struct fimc_context*) ;
 scalar_t__ FUNC_3 (struct fimc_context*) ;
 int FUNC_4 (struct fimc_context*) ;
 int FUNC_5 (struct fimc_context*,int,int) ;
 int FUNC_6 (struct fimc_context*) ;
 int FUNC_7 (struct fimc_context*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_2, void *VAR_3)
{
 struct fimc_context *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_0(VAR_4->dev, "fimc id[%d]\n", VAR_4->id);

 FUNC_4(VAR_4);
 if (FUNC_3(VAR_4))
  return VAR_1;

 if (!FUNC_2(VAR_4))
  return VAR_1;

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < 0)
  return VAR_0;

 FUNC_0(VAR_4->dev, "buf_id[%d]\n", VAR_5);

 if (VAR_4->task) {
  struct exynos_drm_ipp_task *VAR_6 = VAR_4->task;

  VAR_4->task = ((void*)0);
  FUNC_8(VAR_4->dev);
  FUNC_9(VAR_4->dev);
  FUNC_1(VAR_6, 0);
 }

 FUNC_5(VAR_4, VAR_5, 0);
 FUNC_7(VAR_4);

 return VAR_0;
}
