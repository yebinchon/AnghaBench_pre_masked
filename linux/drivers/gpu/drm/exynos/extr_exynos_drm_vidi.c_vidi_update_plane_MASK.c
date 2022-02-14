
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vidi_context {int dev; scalar_t__ suspended; } ;
struct TYPE_2__ {struct drm_plane_state* state; } ;
struct exynos_drm_plane {TYPE_1__ base; } ;
struct exynos_drm_crtc {struct vidi_context* ctx; } ;
struct drm_plane_state {int fb; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct exynos_drm_crtc *VAR_0,
         struct exynos_drm_plane *VAR_1)
{
 struct drm_plane_state *VAR_2 = VAR_1->base.state;
 struct vidi_context *VAR_3 = VAR_0->ctx;
 dma_addr_t VAR_4;

 if (VAR_3->suspended)
  return;

 VAR_4 = FUNC_1(VAR_2->fb, 0);
 FUNC_0(VAR_3->dev, "dma_addr = %pad\n", &VAR_4);
}
