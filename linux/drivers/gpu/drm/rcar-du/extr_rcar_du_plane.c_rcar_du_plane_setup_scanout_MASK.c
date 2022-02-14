
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_12__ {int x1; int y1; } ;
struct TYPE_10__ {TYPE_6__ src; struct drm_framebuffer* fb; TYPE_3__* crtc; } ;
struct rcar_du_plane_state {unsigned int hwindex; scalar_t__ source; TYPE_5__* format; TYPE_4__ state; } ;
struct rcar_du_group {int dummy; } ;
struct drm_gem_cma_object {unsigned int paddr; } ;
struct drm_framebuffer {unsigned int* pitches; unsigned int* offsets; } ;
struct TYPE_11__ {int planes; int bpp; } ;
struct TYPE_9__ {TYPE_2__* state; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct drm_gem_cma_object* FUNC_0 (struct drm_framebuffer*,unsigned int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct rcar_du_group*,unsigned int,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct rcar_du_group *VAR_6,
     const struct rcar_du_plane_state *VAR_7)
{
 unsigned int VAR_8 = VAR_7->state.src.x1 >> 16;
 unsigned int VAR_9 = VAR_7->state.src.y1 >> 16;
 unsigned int VAR_10 = VAR_7->hwindex;
 unsigned int VAR_11;
 bool VAR_12;
 u32 VAR_13[2];

 VAR_12 = VAR_7->state.crtc->state->adjusted_mode.flags
     & VAR_0;

 if (VAR_7->source == VAR_5) {
  struct drm_framebuffer *VAR_14 = VAR_7->state.fb;
  struct drm_gem_cma_object *VAR_15;
  unsigned int VAR_16;

  if (VAR_7->format->planes == 2)
   VAR_11 = VAR_14->pitches[0];
  else
   VAR_11 = VAR_14->pitches[0] * 8 / VAR_7->format->bpp;

  for (VAR_16 = 0; VAR_16 < VAR_7->format->planes; ++VAR_16) {
   VAR_15 = FUNC_0(VAR_14, VAR_16);
   VAR_13[VAR_16] = VAR_15->paddr + VAR_14->offsets[VAR_16];
  }
 } else {
  VAR_11 = FUNC_1(&VAR_7->state.src) >> 16;
  VAR_13[0] = 0;
  VAR_13[1] = 0;
 }





 FUNC_2(VAR_6, VAR_10, VAR_2,
       (VAR_12 && VAR_7->format->bpp == 32) ?
       VAR_11 * 2 : VAR_11);
 FUNC_2(VAR_6, VAR_10, VAR_3, VAR_8);
 FUNC_2(VAR_6, VAR_10, VAR_4, VAR_9 *
       (!VAR_12 && VAR_7->format->bpp == 32 ? 2 : 1));

 FUNC_2(VAR_6, VAR_10, VAR_1, VAR_13[0]);

 if (VAR_7->format->planes == 2) {
  VAR_10 = (VAR_10 + 1) % 8;

  FUNC_2(VAR_6, VAR_10, VAR_2, VAR_11);

  FUNC_2(VAR_6, VAR_10, VAR_3, VAR_8);
  FUNC_2(VAR_6, VAR_10, VAR_4, VAR_9 *
        (VAR_7->format->bpp == 16 ? 2 : 1) / 2);

  FUNC_2(VAR_6, VAR_10, VAR_1, VAR_13[1]);
 }
}
