
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mixer_context {int flags; } ;
struct exynos_drm_crtc {struct mixer_context* ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mixer_context*,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct exynos_drm_crtc *VAR_6)
{
 struct mixer_context *VAR_7 = VAR_6->ctx;

 FUNC_0(VAR_1, &VAR_7->flags);
 if (!FUNC_2(VAR_0, &VAR_7->flags))
  return 0;


 FUNC_1(VAR_7, VAR_5, ~0, VAR_2);
 FUNC_1(VAR_7, VAR_3, ~0, VAR_4);

 return 0;
}
