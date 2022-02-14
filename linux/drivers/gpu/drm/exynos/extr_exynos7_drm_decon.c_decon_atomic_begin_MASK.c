
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {scalar_t__ suspended; } ;


 int VAR_0 ;
 int FUNC_0 (struct decon_context*,int,int) ;

__attribute__((used)) static void FUNC_1(struct exynos_drm_crtc *VAR_1)
{
 struct decon_context *VAR_2 = VAR_1->ctx;
 int VAR_3;

 if (VAR_2->suspended)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, VAR_3, 1);
}
