
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int dev; int flags; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mixer_context*) ;
 scalar_t__ FUNC_2 (struct mixer_context*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_1)
{
 struct mixer_context *VAR_2 = VAR_1->ctx;

 if (!FUNC_3(VAR_0, &VAR_2->flags))
  return;

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2->dev, "timeout waiting for VSYNC\n");
 FUNC_1(VAR_2);
}
