
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int flags; int dev; int * planes; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct exynos_drm_crtc*,int) ;
 int FUNC_2 (struct exynos_drm_crtc*,int *) ;
 int FUNC_3 (struct mixer_context*) ;
 int FUNC_4 (struct mixer_context*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct exynos_drm_crtc *VAR_2)
{
 struct mixer_context *VAR_3 = VAR_2->ctx;
 int VAR_4;

 if (!FUNC_6(VAR_1, &VAR_3->flags))
  return;

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_2(VAR_2, &VAR_3->planes[VAR_4]);

 FUNC_1(VAR_2, 0);

 FUNC_5(VAR_3->dev);

 FUNC_0(VAR_1, &VAR_3->flags);
}
