
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_shared_plane {int base; } ;
struct tegra_bo_tiling {scalar_t__ mode; } ;
struct tegra_plane_state {int swap; int format; struct tegra_bo_tiling tiling; } ;
struct tegra_dc {TYPE_1__* soc; } ;
struct drm_plane_state {TYPE_3__* fb; int crtc; } ;
struct drm_plane {int dummy; } ;
struct TYPE_6__ {scalar_t__* pitches; TYPE_2__* format; } ;
struct TYPE_5__ {int num_planes; int format; } ;
struct TYPE_4__ {int supports_block_linear; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,struct tegra_bo_tiling*) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *,struct drm_plane_state*) ;
 struct tegra_dc* FUNC_4 (int ) ;
 struct tegra_plane_state* FUNC_5 (struct drm_plane_state*) ;
 struct tegra_shared_plane* FUNC_6 (struct drm_plane*) ;

__attribute__((used)) static int FUNC_7(struct drm_plane *VAR_2,
        struct drm_plane_state *VAR_3)
{
 struct tegra_plane_state *VAR_4 = FUNC_5(VAR_3);
 struct tegra_shared_plane *VAR_5 = FUNC_6(VAR_2);
 struct tegra_bo_tiling *VAR_6 = &VAR_4->tiling;
 struct tegra_dc *VAR_7 = FUNC_4(VAR_3->crtc);
 int VAR_8;


 if (!VAR_3->crtc || !VAR_3->fb)
  return 0;

 VAR_8 = FUNC_2(VAR_3->fb->format->format,
     &VAR_4->format,
     &VAR_4->swap);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_3->fb, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_6->mode == VAR_1 &&
     !VAR_7->soc->supports_block_linear) {
  FUNC_0("hardware doesn't support block linear mode\n");
  return -VAR_0;
 }






 if (VAR_3->fb->format->num_planes > 2) {
  if (VAR_3->fb->pitches[2] != VAR_3->fb->pitches[1]) {
   FUNC_0("unsupported UV-plane configuration\n");
   return -VAR_0;
  }
 }



 VAR_8 = FUNC_3(&VAR_5->base, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
