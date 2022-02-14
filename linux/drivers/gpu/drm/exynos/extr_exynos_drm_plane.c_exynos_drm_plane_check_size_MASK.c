
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_6__ {scalar_t__ w; scalar_t__ h; } ;
struct TYPE_5__ {struct drm_crtc* crtc; } ;
struct exynos_drm_plane_state {int h_ratio; int v_ratio; TYPE_3__ crtc; TYPE_2__ src; TYPE_1__ base; } ;
struct exynos_drm_plane_config {int capabilities; } ;
struct drm_crtc {TYPE_4__* dev; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(const struct exynos_drm_plane_config *VAR_3,
       struct exynos_drm_plane_state *VAR_4)
{
 struct drm_crtc *VAR_5 = VAR_4->base.crtc;
 bool VAR_6 = 0, VAR_7 = 0;

 if (VAR_3->capabilities & VAR_2)
  return 0;

 if (VAR_4->src.w == VAR_4->crtc.w)
  VAR_6 = 1;

 if (VAR_4->src.h == VAR_4->crtc.h)
  VAR_7 = 1;

 if ((VAR_3->capabilities & VAR_1) &&
     VAR_4->h_ratio == (1 << 15))
  VAR_6 = 1;

 if ((VAR_3->capabilities & VAR_1) &&
     VAR_4->v_ratio == (1 << 15))
  VAR_7 = 1;

 if (VAR_6 && VAR_7)
  return 0;

 FUNC_0(VAR_5->dev->dev, "scaling mode is not supported");
 return -VAR_0;
}
