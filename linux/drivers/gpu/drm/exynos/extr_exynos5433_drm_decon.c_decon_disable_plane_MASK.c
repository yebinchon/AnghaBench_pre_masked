
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_plane {unsigned int index; } ;
struct exynos_drm_crtc {struct decon_context* ctx; } ;
struct decon_context {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct decon_context*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct exynos_drm_crtc *VAR_1,
    struct exynos_drm_plane *VAR_2)
{
 struct decon_context *VAR_3 = VAR_1->ctx;
 unsigned int VAR_4 = VAR_2->index;

 FUNC_1(VAR_3, FUNC_0(VAR_4), VAR_0, 0);
}
