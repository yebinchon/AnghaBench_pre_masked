
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int crtc; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct decon_context*) ;
 int FUNC_2 (struct exynos_drm_crtc*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_0)
{
 struct decon_context *VAR_1 = VAR_0->ctx;

 FUNC_3(VAR_1->dev);

 FUNC_2(VAR_0, 1);

 FUNC_1(VAR_1);

 FUNC_0(VAR_1->crtc);
}
