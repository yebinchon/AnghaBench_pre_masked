
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_plane_state {size_t pos0_offset; size_t pos2_offset; size_t ptr0_offset; int * hw_dlist; int * dlist; int needs_bg_fill; int offsets; int is_yuv; int is_unity; int y_scaling; int x_scaling; int src_h; int src_w; int src_y; int src_x; int crtc_w; int crtc_h; int crtc_y; int crtc_x; } ;
struct drm_plane_state {int visible; int dst; int src; int color_range; int color_encoding; int normalized_zpos; int zpos; int rotation; int pixel_blend_mode; int alpha; int src_h; int src_w; int src_y; int src_x; int crtc_h; int crtc_w; int crtc_y; int crtc_x; int fb; } ;
struct drm_plane {struct drm_plane_state* state; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 struct vc4_plane_state* FUNC_2 (struct drm_plane_state*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_0,
       struct drm_plane_state *VAR_1)
{
 struct vc4_plane_state *VAR_2, *VAR_3;

 FUNC_1(VAR_0->state->fb, VAR_1->fb);
 VAR_0->state->crtc_x = VAR_1->crtc_x;
 VAR_0->state->crtc_y = VAR_1->crtc_y;
 VAR_0->state->crtc_w = VAR_1->crtc_w;
 VAR_0->state->crtc_h = VAR_1->crtc_h;
 VAR_0->state->src_x = VAR_1->src_x;
 VAR_0->state->src_y = VAR_1->src_y;
 VAR_0->state->src_w = VAR_1->src_w;
 VAR_0->state->src_h = VAR_1->src_h;
 VAR_0->state->src_h = VAR_1->src_h;
 VAR_0->state->alpha = VAR_1->alpha;
 VAR_0->state->pixel_blend_mode = VAR_1->pixel_blend_mode;
 VAR_0->state->rotation = VAR_1->rotation;
 VAR_0->state->zpos = VAR_1->zpos;
 VAR_0->state->normalized_zpos = VAR_1->normalized_zpos;
 VAR_0->state->color_encoding = VAR_1->color_encoding;
 VAR_0->state->color_range = VAR_1->color_range;
 VAR_0->state->src = VAR_1->src;
 VAR_0->state->dst = VAR_1->dst;
 VAR_0->state->visible = VAR_1->visible;

 VAR_3 = FUNC_2(VAR_1);
 VAR_2 = FUNC_2(VAR_0->state);

 VAR_2->crtc_x = VAR_3->crtc_x;
 VAR_2->crtc_y = VAR_3->crtc_y;
 VAR_2->crtc_h = VAR_3->crtc_h;
 VAR_2->crtc_w = VAR_3->crtc_w;
 VAR_2->src_x = VAR_3->src_x;
 VAR_2->src_y = VAR_3->src_y;
 FUNC_0(VAR_2->src_w, VAR_3->src_w,
        sizeof(VAR_2->src_w));
 FUNC_0(VAR_2->src_h, VAR_3->src_h,
        sizeof(VAR_2->src_h));
 FUNC_0(VAR_2->x_scaling, VAR_3->x_scaling,
        sizeof(VAR_2->x_scaling));
 FUNC_0(VAR_2->y_scaling, VAR_3->y_scaling,
        sizeof(VAR_2->y_scaling));
 VAR_2->is_unity = VAR_3->is_unity;
 VAR_2->is_yuv = VAR_3->is_yuv;
 FUNC_0(VAR_2->offsets, VAR_3->offsets,
        sizeof(VAR_2->offsets));
 VAR_2->needs_bg_fill = VAR_3->needs_bg_fill;


 VAR_2->dlist[VAR_2->pos0_offset] =
  VAR_3->dlist[VAR_2->pos0_offset];
 VAR_2->dlist[VAR_2->pos2_offset] =
  VAR_3->dlist[VAR_2->pos2_offset];
 VAR_2->dlist[VAR_2->ptr0_offset] =
  VAR_3->dlist[VAR_2->ptr0_offset];





 FUNC_3(VAR_2->dlist[VAR_2->pos0_offset],
        &VAR_2->hw_dlist[VAR_2->pos0_offset]);
 FUNC_3(VAR_2->dlist[VAR_2->pos2_offset],
        &VAR_2->hw_dlist[VAR_2->pos2_offset]);
 FUNC_3(VAR_2->dlist[VAR_2->ptr0_offset],
        &VAR_2->hw_dlist[VAR_2->ptr0_offset]);
}
