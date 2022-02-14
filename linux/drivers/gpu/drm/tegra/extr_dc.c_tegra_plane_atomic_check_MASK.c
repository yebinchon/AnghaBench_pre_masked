
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_bo_tiling {scalar_t__ mode; } ;
struct tegra_plane_state {int bottom_up; int swap; int format; struct tegra_bo_tiling tiling; } ;
struct tegra_plane {int dummy; } ;
struct tegra_dc {TYPE_1__* soc; } ;
struct drm_plane_state {TYPE_3__* fb; int rotation; int crtc; } ;
struct drm_plane {int dummy; } ;
struct TYPE_6__ {scalar_t__* pitches; TYPE_2__* format; } ;
struct TYPE_5__ {int num_planes; int format; } ;
struct TYPE_4__ {int supports_block_linear; scalar_t__ has_legacy_blending; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (TYPE_3__*,struct tegra_bo_tiling*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct tegra_plane*,struct tegra_plane_state*) ;
 int FUNC_5 (struct tegra_plane*,struct drm_plane_state*) ;
 struct tegra_dc* FUNC_6 (int ) ;
 struct tegra_plane* FUNC_7 (struct drm_plane*) ;
 struct tegra_plane_state* FUNC_8 (struct drm_plane_state*) ;

__attribute__((used)) static int FUNC_9(struct drm_plane *VAR_4,
        struct drm_plane_state *VAR_5)
{
 struct tegra_plane_state *VAR_6 = FUNC_8(VAR_5);
 unsigned int VAR_7 = VAR_1 | VAR_0;
 struct tegra_bo_tiling *VAR_8 = &VAR_6->tiling;
 struct tegra_plane *VAR_9 = FUNC_7(VAR_4);
 struct tegra_dc *VAR_10 = FUNC_6(VAR_5->crtc);
 int VAR_11;


 if (!VAR_5->crtc)
  return 0;

 VAR_11 = FUNC_3(VAR_5->fb->format->format,
     &VAR_6->format,
     &VAR_6->swap);
 if (VAR_11 < 0)
  return VAR_11;







 if (VAR_10->soc->has_legacy_blending) {
  VAR_11 = FUNC_4(VAR_9, VAR_6);
  if (VAR_11 < 0)
   return VAR_11;
 }

 VAR_11 = FUNC_2(VAR_5->fb, VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_8->mode == VAR_3 &&
     !VAR_10->soc->supports_block_linear) {
  FUNC_0("hardware doesn't support block linear mode\n");
  return -VAR_2;
 }

 VAR_7 = FUNC_1(VAR_5->rotation, VAR_7);

 if (VAR_7 & VAR_0)
  VAR_6->bottom_up = 1;
 else
  VAR_6->bottom_up = 0;






 if (VAR_5->fb->format->num_planes > 2) {
  if (VAR_5->fb->pitches[2] != VAR_5->fb->pitches[1]) {
   FUNC_0("unsupported UV-plane configuration\n");
   return -VAR_2;
  }
 }

 VAR_11 = FUNC_5(VAR_9, VAR_5);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
