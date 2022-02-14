
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_plane {int dummy; } ;
struct drm_plane_state {int src_w; int crtc_w; int src_h; int crtc_h; int crtc; } ;
struct drm_plane {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_plane*,struct drm_plane_state*) ;
 struct tegra_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_2(struct drm_plane *VAR_1,
         struct drm_plane_state *VAR_2)
{
 struct tegra_plane *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;


 if (!VAR_2->crtc)
  return 0;


 if ((VAR_2->src_w >> 16 != VAR_2->crtc_w) ||
     (VAR_2->src_h >> 16 != VAR_2->crtc_h))
  return -VAR_0;


 if (VAR_2->src_w != VAR_2->src_h)
  return -VAR_0;

 if (VAR_2->crtc_w != 32 && VAR_2->crtc_w != 64 &&
     VAR_2->crtc_w != 128 && VAR_2->crtc_w != 256)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
