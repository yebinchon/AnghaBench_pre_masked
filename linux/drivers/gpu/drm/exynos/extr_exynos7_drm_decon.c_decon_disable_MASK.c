
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int suspended; int dev; int * planes; } ;


 int VAR_0 ;
 int FUNC_0 (struct exynos_drm_crtc*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct exynos_drm_crtc *VAR_1)
{
 struct decon_context *VAR_2 = VAR_1->ctx;
 int VAR_3;

 if (VAR_2->suspended)
  return;






 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_1, &VAR_2->planes[VAR_3]);

 FUNC_1(VAR_2->dev);

 VAR_2->suspended = 1;
}
