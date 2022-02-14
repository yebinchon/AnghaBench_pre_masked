
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int flags; int dev; } ;
struct exynos_drm_plane {int index; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mixer_context*,struct exynos_drm_plane*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mixer_context*,struct exynos_drm_plane*) ;

__attribute__((used)) static void FUNC_4(struct exynos_drm_crtc *VAR_2,
          struct exynos_drm_plane *VAR_3)
{
 struct mixer_context *VAR_4 = VAR_2->ctx;

 FUNC_0(VAR_4->dev, "win: %d\n", VAR_3->index);

 if (!FUNC_2(VAR_0, &VAR_4->flags))
  return;

 if (VAR_3->index == VAR_1)
  FUNC_3(VAR_4, VAR_3);
 else
  FUNC_1(VAR_4, VAR_3);
}
