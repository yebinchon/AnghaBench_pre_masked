
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_7__ {struct drm_plane_state* state; } ;
struct rcar_du_plane {TYPE_1__ plane; } ;
struct rcar_du_device {TYPE_2__* info; } ;
struct rcar_du_crtc {int index; TYPE_4__* group; int crtc; struct rcar_du_device* dev; } ;
struct drm_plane_state {int visible; int * crtc; } ;
struct TYPE_11__ {int planes; } ;
struct TYPE_10__ {unsigned int num_planes; unsigned int dptsr_planes; int lock; scalar_t__ need_restart; scalar_t__ used_crtcs; struct rcar_du_plane* planes; } ;
struct TYPE_9__ {unsigned int hwindex; } ;
struct TYPE_8__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_6__* FUNC_2 (struct rcar_du_plane*) ;
 scalar_t__ FUNC_3 (struct rcar_du_plane*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,int ,unsigned int) ;
 scalar_t__ FUNC_6 (struct rcar_du_device*,int ) ;
 TYPE_3__* FUNC_7 (struct drm_plane_state*) ;

__attribute__((used)) static void FUNC_8(struct rcar_du_crtc *VAR_5)
{
 struct rcar_du_plane *VAR_6[VAR_4];
 struct rcar_du_device *VAR_7 = VAR_5->dev;
 unsigned int VAR_8 = 0;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12;
 u32 VAR_13 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_5->group->num_planes; ++VAR_12) {
  struct rcar_du_plane *VAR_14 = &VAR_5->group->planes[VAR_12];
  unsigned int VAR_15;

  if (VAR_14->plane.state->crtc != &VAR_5->crtc ||
      !VAR_14->plane.state->visible)
   continue;


  for (VAR_15 = VAR_8++; VAR_15 > 0; --VAR_15) {
   if (FUNC_3(VAR_6[VAR_15-1]) <= FUNC_3(VAR_14))
    break;
   VAR_6[VAR_15] = VAR_6[VAR_15-1];
  }

  VAR_6[VAR_15] = VAR_14;
  VAR_11 += FUNC_2(VAR_14)->planes * 4;
 }

 for (VAR_12 = 0; VAR_12 < VAR_8; ++VAR_12) {
  struct rcar_du_plane *VAR_16 = VAR_6[VAR_12];
  struct drm_plane_state *VAR_17 = VAR_16->plane.state;
  unsigned int VAR_18 = FUNC_7(VAR_17)->hwindex;

  VAR_11 -= 4;
  VAR_13 |= (VAR_18 + 1) << VAR_11;
  VAR_10 |= 1 << VAR_18;

  if (FUNC_2(VAR_16)->planes == 2) {
   VAR_18 = (VAR_18 + 1) % 8;

   VAR_11 -= 4;
   VAR_13 |= (VAR_18 + 1) << VAR_11;
   VAR_10 |= 1 << VAR_18;
  }
 }


 if (FUNC_6(VAR_7, VAR_3)) {
  if (VAR_7->info->gen < 3) {
   VAR_13 = (VAR_5->index % 2) + 1;
   VAR_10 = 1 << (VAR_5->index % 2);
  } else {
   VAR_13 = (VAR_5->index % 2) ? 3 : 1;
   VAR_10 = 1 << ((VAR_5->index % 2) ? 2 : 0);
  }
 }
 FUNC_0(&VAR_5->group->lock);

 VAR_9 = VAR_5->index % 2 ? VAR_5->group->dptsr_planes | VAR_10
       : VAR_5->group->dptsr_planes & ~VAR_10;

 if (VAR_9 != VAR_5->group->dptsr_planes) {
  FUNC_5(VAR_5->group, VAR_0,
        (VAR_9 << 16) | VAR_9);
  VAR_5->group->dptsr_planes = VAR_9;

  if (VAR_5->group->used_crtcs)
   FUNC_4(VAR_5->group);
 }


 if (VAR_5->group->need_restart)
  FUNC_4(VAR_5->group);

 FUNC_1(&VAR_5->group->lock);

 FUNC_5(VAR_5->group, VAR_5->index % 2 ? VAR_2 : VAR_1,
       VAR_13);
}
