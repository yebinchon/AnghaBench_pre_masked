
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rot_context {int dev; struct exynos_drm_ipp_task* task; } ;
struct exynos_drm_ipp_task {int dummy; } ;
typedef int irqreturn_t ;
typedef enum rot_irq_status { ____Placeholder_rot_irq_status } rot_irq_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct exynos_drm_ipp_task*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct rot_context*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct rot_context *VAR_6 = VAR_5;
 enum rot_irq_status VAR_7;
 u32 VAR_8;


 VAR_7 = FUNC_6(VAR_6);


 VAR_8 = FUNC_4(VAR_3);
 VAR_8 |= FUNC_0((u32)VAR_7);
 FUNC_5(VAR_8, VAR_3);

 if (VAR_6->task) {
  struct exynos_drm_ipp_task *VAR_9 = VAR_6->task;

  VAR_6->task = ((void*)0);
  FUNC_2(VAR_6->dev);
  FUNC_3(VAR_6->dev);
  FUNC_1(VAR_9,
   VAR_7 == VAR_2 ? 0 : -VAR_0);
 }

 return VAR_1;
}
