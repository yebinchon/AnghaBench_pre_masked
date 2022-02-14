
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scaler_context {int dev; struct exynos_drm_ipp_task* task; } ;
struct exynos_drm_ipp_task {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct exynos_drm_ipp_task*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scaler_context*) ;
 int FUNC_4 (struct scaler_context*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct scaler_context *VAR_3 = VAR_2;

 u32 VAR_4 = FUNC_4(VAR_3);

 FUNC_3(VAR_3);

 if (VAR_3->task) {
  struct exynos_drm_ipp_task *VAR_5 = VAR_3->task;

  VAR_3->task = ((void*)0);
  FUNC_1(VAR_3->dev);
  FUNC_2(VAR_3->dev);
  FUNC_0(VAR_5, FUNC_5(VAR_4));
 }

 return VAR_0;
}
