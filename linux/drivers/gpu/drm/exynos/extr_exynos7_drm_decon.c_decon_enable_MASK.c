
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int suspended; int crtc; int irq_flags; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct decon_context*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct exynos_drm_crtc *VAR_0)
{
 struct decon_context *VAR_1 = VAR_0->ctx;

 if (!VAR_1->suspended)
  return;

 FUNC_3(VAR_1->dev);

 FUNC_2(VAR_1);


 if (FUNC_4(0, &VAR_1->irq_flags))
  FUNC_1(VAR_1->crtc);

 FUNC_0(VAR_1->crtc);

 VAR_1->suspended = 0;
}
