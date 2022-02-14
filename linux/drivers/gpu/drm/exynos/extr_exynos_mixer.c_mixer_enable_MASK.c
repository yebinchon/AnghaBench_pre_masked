
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int flags; int dev; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct exynos_drm_crtc*,int) ;
 int FUNC_1 (struct mixer_context*) ;
 int FUNC_2 (struct mixer_context*) ;
 int FUNC_3 (struct mixer_context*) ;
 int FUNC_4 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_5 (struct mixer_context*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct exynos_drm_crtc *VAR_8)
{
 struct mixer_context *VAR_9 = VAR_8->ctx;

 if (FUNC_8(VAR_0, &VAR_9->flags))
  return;

 FUNC_6(VAR_9->dev);

 FUNC_0(VAR_8, 1);

 FUNC_2(VAR_9);

 FUNC_4(VAR_9, VAR_6, ~0, VAR_7);

 if (FUNC_8(VAR_1, &VAR_9->flags)) {
  FUNC_4(VAR_9, VAR_5, ~0,
     VAR_2);
  FUNC_4(VAR_9, VAR_3, ~0, VAR_4);
 }
 FUNC_5(VAR_9);

 FUNC_1(VAR_9);

 FUNC_3(VAR_9);

 FUNC_7(VAR_0, &VAR_9->flags);
}
