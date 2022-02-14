
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int reg_slock; int flags; int dev; } ;
struct exynos_drm_plane {int index; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mixer_context*,int ,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct exynos_drm_crtc *VAR_1,
    struct exynos_drm_plane *VAR_2)
{
 struct mixer_context *VAR_3 = VAR_1->ctx;
 unsigned long VAR_4;

 FUNC_0(VAR_3->dev, "win: %d\n", VAR_2->index);

 if (!FUNC_4(VAR_0, &VAR_3->flags))
  return;

 FUNC_2(&VAR_3->reg_slock, VAR_4);
 FUNC_1(VAR_3, VAR_2->index, 0, 0);
 FUNC_3(&VAR_3->reg_slock, VAR_4);
}
