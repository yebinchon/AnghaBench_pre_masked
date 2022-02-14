
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int window ;
struct tegra_plane_state {int swap; int format; int tiling; scalar_t__ bottom_up; } ;
struct tegra_plane {int dummy; } ;
struct TYPE_8__ {int x; int y; int w; int h; } ;
struct TYPE_7__ {int x; int y; int w; int h; } ;
struct tegra_dc_window {int bits_per_pixel; int bottom_up; int * stride; scalar_t__* base; int swap; int format; int tiling; int zpos; TYPE_2__ dst; TYPE_1__ src; } ;
struct tegra_bo {scalar_t__ paddr; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {TYPE_4__* state; } ;
struct drm_framebuffer {int * pitches; scalar_t__* offsets; TYPE_3__* format; } ;
struct TYPE_11__ {int x1; int y1; } ;
struct TYPE_10__ {int normalized_zpos; TYPE_5__ dst; TYPE_5__ src; int visible; struct drm_framebuffer* fb; int crtc; } ;
struct TYPE_9__ {int* cpp; unsigned int num_planes; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct tegra_dc_window*,int ,int) ;
 int FUNC_3 (struct tegra_plane*,struct tegra_dc_window*) ;
 struct tegra_bo* FUNC_4 (struct drm_framebuffer*,unsigned int) ;
 scalar_t__ FUNC_5 (struct drm_framebuffer*) ;
 void FUNC_6 (struct drm_plane*,struct drm_plane_state*) ;
 struct tegra_plane* FUNC_7 (struct drm_plane*) ;
 struct tegra_plane_state* FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_9(struct drm_plane *VAR_0,
          struct drm_plane_state *VAR_1)
{
 struct tegra_plane_state *VAR_2 = FUNC_8(VAR_0->state);
 struct drm_framebuffer *VAR_3 = VAR_0->state->fb;
 struct tegra_plane *VAR_4 = FUNC_7(VAR_0);
 struct tegra_dc_window VAR_5;
 unsigned int VAR_6;


 if (!VAR_0->state->crtc || !VAR_0->state->fb)
  return;

 if (!VAR_0->state->visible)
  return FUNC_6(VAR_0, VAR_1);

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.src.x = VAR_0->state->src.x1 >> 16;
 VAR_5.src.y = VAR_0->state->src.y1 >> 16;
 VAR_5.src.w = FUNC_1(&VAR_0->state->src) >> 16;
 VAR_5.src.h = FUNC_0(&VAR_0->state->src) >> 16;
 VAR_5.dst.x = VAR_0->state->dst.x1;
 VAR_5.dst.y = VAR_0->state->dst.y1;
 VAR_5.dst.w = FUNC_1(&VAR_0->state->dst);
 VAR_5.dst.h = FUNC_0(&VAR_0->state->dst);
 VAR_5.bits_per_pixel = VAR_3->format->cpp[0] * 8;
 VAR_5.bottom_up = FUNC_5(VAR_3) || VAR_2->bottom_up;


 VAR_5.zpos = VAR_0->state->normalized_zpos;
 VAR_5.tiling = VAR_2->tiling;
 VAR_5.format = VAR_2->format;
 VAR_5.swap = VAR_2->swap;

 for (VAR_6 = 0; VAR_6 < VAR_3->format->num_planes; VAR_6++) {
  struct tegra_bo *VAR_7 = FUNC_4(VAR_3, VAR_6);

  VAR_5.base[VAR_6] = VAR_7->paddr + VAR_3->offsets[VAR_6];






  if (VAR_6 < 2)
   VAR_5.stride[VAR_6] = VAR_3->pitches[VAR_6];
 }

 FUNC_3(VAR_4, &VAR_5);
}
