
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimd_context {int suspended; int dev; scalar_t__ regs; int * planes; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct exynos_drm_crtc*,int *) ;
 int FUNC_1 (struct exynos_drm_crtc*) ;
 int FUNC_2 (struct exynos_drm_crtc*) ;
 int FUNC_3 (struct exynos_drm_crtc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct exynos_drm_crtc *VAR_2)
{
 struct fimd_context *VAR_3 = VAR_2->ctx;
 int VAR_4;

 if (VAR_3->suspended)
  return;






 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(VAR_2, &VAR_3->planes[VAR_4]);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 FUNC_5(0, VAR_3->regs + VAR_0);

 FUNC_4(VAR_3->dev);
 VAR_3->suspended = 1;
}
