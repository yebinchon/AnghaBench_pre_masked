
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fimd_context {TYPE_1__* driver_data; scalar_t__ suspended; } ;
struct exynos_drm_plane {unsigned int index; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;
struct TYPE_2__ {scalar_t__ has_shadowcon; } ;


 int FUNC_0 (struct fimd_context*,unsigned int,int) ;
 int FUNC_1 (struct fimd_context*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct exynos_drm_crtc *VAR_0,
          struct exynos_drm_plane *VAR_1)
{
 struct fimd_context *VAR_2 = VAR_0->ctx;
 unsigned int VAR_3 = VAR_1->index;

 if (VAR_2->suspended)
  return;

 FUNC_1(VAR_2, VAR_3, 0);

 if (VAR_2->driver_data->has_shadowcon)
  FUNC_0(VAR_2, VAR_3, 0);
}
