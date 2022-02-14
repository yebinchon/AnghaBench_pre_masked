
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int left; int top; int width; int height; } ;
struct TYPE_12__ {int left; int top; int width; int height; } ;
struct vsp1_du_atomic_config {int alpha; int pixelformat; scalar_t__* mem; TYPE_3__ dst; TYPE_2__ src; int zpos; int pitch; } ;
struct TYPE_19__ {int x1; int y1; } ;
struct TYPE_14__ {int alpha; TYPE_9__ dst; TYPE_9__ src; int zpos; int crtc; } ;
struct rcar_du_vsp_plane_state {TYPE_6__* format; TYPE_5__* sg_tables; TYPE_4__ state; } ;
struct TYPE_11__ {TYPE_8__* state; } ;
struct rcar_du_vsp_plane {int index; TYPE_7__* vsp; TYPE_1__ plane; } ;
struct rcar_du_format_info {int v4l2; } ;
struct rcar_du_crtc {int vsp_pipe; } ;
struct drm_framebuffer {scalar_t__* offsets; int * pitches; } ;
struct TYPE_18__ {struct drm_framebuffer* fb; } ;
struct TYPE_17__ {int vsp; } ;
struct TYPE_16__ {unsigned int planes; int fourcc; } ;
struct TYPE_15__ {int sgl; } ;


 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (TYPE_9__*) ;
 struct rcar_du_format_info* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct rcar_du_crtc* FUNC_4 (int ) ;
 struct rcar_du_vsp_plane_state* FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int ,int ,int ,struct vsp1_du_atomic_config*) ;

__attribute__((used)) static void FUNC_7(struct rcar_du_vsp_plane *VAR_0)
{
 struct rcar_du_vsp_plane_state *VAR_1 =
  FUNC_5(VAR_0->plane.state);
 struct rcar_du_crtc *VAR_2 = FUNC_4(VAR_1->state.crtc);
 struct drm_framebuffer *VAR_3 = VAR_0->plane.state->fb;
 const struct rcar_du_format_info *VAR_4;
 struct vsp1_du_atomic_config VAR_5 = {
  .pixelformat = 0,
  .pitch = VAR_3->pitches[0],
  .alpha = VAR_1->state.alpha >> 8,
  .zpos = VAR_1->state.zpos,
 };
 unsigned int VAR_6;

 VAR_5.src.left = VAR_1->state.src.x1 >> 16;
 VAR_5.src.top = VAR_1->state.src.y1 >> 16;
 VAR_5.src.width = FUNC_1(&VAR_1->state.src) >> 16;
 VAR_5.src.height = FUNC_0(&VAR_1->state.src) >> 16;

 VAR_5.dst.left = VAR_1->state.dst.x1;
 VAR_5.dst.top = VAR_1->state.dst.y1;
 VAR_5.dst.width = FUNC_1(&VAR_1->state.dst);
 VAR_5.dst.height = FUNC_0(&VAR_1->state.dst);

 for (VAR_6 = 0; VAR_6 < VAR_1->format->planes; ++VAR_6)
  VAR_5.mem[VAR_6] = FUNC_3(VAR_1->sg_tables[VAR_6].sgl)
      + VAR_3->offsets[VAR_6];

 VAR_4 = FUNC_2(VAR_1->format->fourcc);
 VAR_5.pixelformat = VAR_4->v4l2;

 FUNC_6(VAR_0->vsp->vsp, VAR_2->vsp_pipe,
         VAR_0->index, &VAR_5);
}
