
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msm_format {int dummy; } ;
struct drm_rect {int x1; int y1; int x2; int y2; } ;
struct drm_plane_state {int src_x; int src_y; int src_w; int src_h; TYPE_4__* plane; int fb; } ;
struct dpu_plane_state {void* multirect_index; void* multirect_mode; } ;
struct dpu_plane {scalar_t__ is_virtual; TYPE_2__* pipe_sblk; } ;
struct dpu_multirect_plane_states {struct drm_plane_state* r0; struct drm_plane_state* r1; } ;
struct dpu_format {unsigned int tile_height; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_3__ base; } ;
struct TYPE_6__ {TYPE_1__* common; } ;
struct TYPE_5__ {int maxlinewidth; } ;


 int FUNC_0 (struct dpu_plane*,char*,void*,void*) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (struct dpu_plane*,char*) ;
 scalar_t__ FUNC_3 (struct dpu_format const*) ;
 scalar_t__ FUNC_4 (struct dpu_format const*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 struct drm_rect FUNC_5 (struct drm_plane_state const*) ;
 int FUNC_6 (struct drm_rect*,struct drm_rect*,int,int) ;
 int FUNC_7 (struct drm_rect*,struct drm_rect*,int,int) ;
 int FUNC_8 (struct drm_rect*) ;
 struct msm_format* FUNC_9 (int ) ;
 struct dpu_format* FUNC_10 (struct msm_format const*) ;
 struct dpu_plane* FUNC_11 (TYPE_4__*) ;
 struct dpu_plane_state* FUNC_12 (struct drm_plane_state const*) ;

int FUNC_13(struct dpu_multirect_plane_states *VAR_8)
{
 struct dpu_plane_state *VAR_9[VAR_7];
 const struct drm_plane_state *VAR_10[VAR_7];
 struct drm_rect VAR_11[VAR_7], VAR_12[VAR_7];
 struct dpu_plane *VAR_13[VAR_7];
 const struct dpu_format *VAR_14[VAR_7];
 int VAR_15, VAR_16;
 unsigned int VAR_17 = 1;
 bool VAR_18 = 1;
 bool VAR_19 = 0;

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  const struct msm_format *VAR_20;

  VAR_10[VAR_15] = VAR_15 ? VAR_8->r1 : VAR_8->r0;
  VAR_20 = FUNC_9(VAR_10[VAR_15]->fb);
  VAR_14[VAR_15] = FUNC_10(VAR_20);

  if (FUNC_3(VAR_14[VAR_15])) {
   VAR_19 = 1;
   if (VAR_14[VAR_15]->tile_height > VAR_17)
    VAR_17 = VAR_14[VAR_15]->tile_height;
  }
 }

 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  int VAR_21;

  VAR_9[VAR_15] = FUNC_12(VAR_10[VAR_15]);
  VAR_13[VAR_15] = FUNC_11(VAR_10[VAR_15]->plane);

  if (VAR_9[VAR_15] == ((void*)0)) {
   FUNC_1("DPU plane state of plane id %d is NULL\n",
    VAR_10[VAR_15]->plane->base.id);
   return -VAR_4;
  }

  VAR_11[VAR_15].x1 = VAR_10[VAR_15]->src_x >> 16;
  VAR_11[VAR_15].y1 = VAR_10[VAR_15]->src_y >> 16;
  VAR_11[VAR_15].x2 = VAR_11[VAR_15].x1 + (VAR_10[VAR_15]->src_w >> 16);
  VAR_11[VAR_15].y2 = VAR_11[VAR_15].y1 + (VAR_10[VAR_15]->src_h >> 16);

  VAR_12[VAR_15] = FUNC_5(VAR_10[VAR_15]);

  if (FUNC_6(&VAR_11[VAR_15], &VAR_12[VAR_15], 1, 1) != 1 ||
      FUNC_7(&VAR_11[VAR_15], &VAR_12[VAR_15], 1, 1) != 1) {
   FUNC_2(VAR_13[VAR_15],
    "scaling is not supported in multirect mode\n");
   return -VAR_4;
  }

  if (FUNC_4(VAR_14[VAR_15])) {
   FUNC_2(VAR_13[VAR_15],
    "Unsupported format for multirect mode\n");
   return -VAR_4;
  }
  VAR_21 = VAR_13[VAR_15]->pipe_sblk->common->maxlinewidth;
  if (VAR_19)
   VAR_21 /= 2;

  if (VAR_18 &&
      FUNC_8(&VAR_11[VAR_15]) > VAR_21)
   VAR_18 = 0;

 }




 if (VAR_18) {
  VAR_9[VAR_5]->multirect_mode = VAR_0;
  VAR_9[VAR_6]->multirect_mode = VAR_0;

  goto done;
 }


 VAR_16 = 2 * VAR_17;

 if (VAR_12[VAR_6].y1 >= VAR_12[VAR_5].y2 + VAR_16 ||
     VAR_12[VAR_5].y1 >= VAR_12[VAR_6].y2 + VAR_16) {
  VAR_9[VAR_5]->multirect_mode = VAR_1;
  VAR_9[VAR_6]->multirect_mode = VAR_1;
 } else {
  FUNC_1(
   "No multirect mode possible for the planes (%d - %d)\n",
   VAR_10[VAR_5]->plane->base.id,
   VAR_10[VAR_6]->plane->base.id);
  return -VAR_4;
 }

done:
 if (VAR_13[VAR_5]->is_virtual) {
  VAR_9[VAR_5]->multirect_index = VAR_3;
  VAR_9[VAR_6]->multirect_index = VAR_2;
 } else {
  VAR_9[VAR_5]->multirect_index = VAR_2;
  VAR_9[VAR_6]->multirect_index = VAR_3;
 };

 FUNC_0(VAR_13[VAR_5], "R0: %d - %d\n",
  VAR_9[VAR_5]->multirect_mode, VAR_9[VAR_5]->multirect_index);
 FUNC_0(VAR_13[VAR_6], "R1: %d - %d\n",
  VAR_9[VAR_6]->multirect_mode, VAR_9[VAR_6]->multirect_index);
 return 0;
}
