
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimd_context {int suspended; int crtc; int irq_flags; int dev; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_0)
{
 struct fimd_context *VAR_1 = VAR_0->ctx;

 if (!VAR_1->suspended)
  return;

 VAR_1->suspended = 0;

 FUNC_2(VAR_1->dev);


 if (FUNC_3(0, &VAR_1->irq_flags))
  FUNC_1(VAR_1->crtc);

 FUNC_0(VAR_1->crtc);
}
