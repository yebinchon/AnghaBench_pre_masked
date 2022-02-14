
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_plane_state {int crtc; int plane; int state; struct drm_framebuffer* fb; } ;
struct komeda_plane_state {struct drm_plane_state base; } ;
struct komeda_layer_state {int rot; int * addr; scalar_t__ afbc_crop_b; scalar_t__ afbc_crop_t; scalar_t__ afbc_crop_r; scalar_t__ afbc_crop_l; scalar_t__ vsize; scalar_t__ hsize; } ;
struct komeda_layer {int base; } ;
struct komeda_fb {scalar_t__ aligned_h; scalar_t__ aligned_w; } ;
struct komeda_data_flow_cfg {int input; scalar_t__ in_y; scalar_t__ in_x; scalar_t__ in_h; scalar_t__ in_w; int rot; } ;
struct komeda_component_state {int dummy; } ;
struct drm_framebuffer {TYPE_1__* format; scalar_t__ modifier; } ;
struct TYPE_2__ {int num_planes; } ;


 scalar_t__ FUNC_0 (struct komeda_component_state*) ;
 int FUNC_1 (struct komeda_component_state*) ;
 struct komeda_component_state* FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,struct komeda_component_state*) ;
 int FUNC_5 (struct komeda_fb*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (struct komeda_layer*,struct komeda_fb*,struct komeda_data_flow_cfg*) ;
 int FUNC_7 (struct komeda_data_flow_cfg*,int ) ;
 struct komeda_fb* FUNC_8 (struct drm_framebuffer*) ;
 struct komeda_layer_state* FUNC_9 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_10(struct komeda_layer *VAR_0,
        struct komeda_plane_state *VAR_1,
        struct komeda_data_flow_cfg *VAR_2)
{
 struct drm_plane_state *VAR_3 = &VAR_1->base;
 struct drm_framebuffer *VAR_4 = VAR_3->fb;
 struct komeda_fb *VAR_5 = FUNC_8(VAR_4);
 struct komeda_component_state *VAR_6;
 struct komeda_layer_state *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_6(VAR_0, VAR_5, VAR_2);
 if (VAR_9)
  return VAR_9;

 VAR_6 = FUNC_2(&VAR_0->base,
   VAR_3->state, VAR_3->plane, VAR_3->crtc);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_9(VAR_6);

 VAR_7->rot = VAR_2->rot;

 if (VAR_4->modifier) {
  VAR_7->hsize = VAR_5->aligned_w;
  VAR_7->vsize = VAR_5->aligned_h;
  VAR_7->afbc_crop_l = VAR_2->in_x;
  VAR_7->afbc_crop_r = VAR_5->aligned_w - VAR_2->in_x - VAR_2->in_w;
  VAR_7->afbc_crop_t = VAR_2->in_y;
  VAR_7->afbc_crop_b = VAR_5->aligned_h - VAR_2->in_y - VAR_2->in_h;
 } else {
  VAR_7->hsize = VAR_2->in_w;
  VAR_7->vsize = VAR_2->in_h;
  VAR_7->afbc_crop_l = 0;
  VAR_7->afbc_crop_r = 0;
  VAR_7->afbc_crop_t = 0;
  VAR_7->afbc_crop_b = 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_4->format->num_planes; VAR_8++)
  VAR_7->addr[VAR_8] = FUNC_5(VAR_5, VAR_2->in_x,
             VAR_2->in_y, VAR_8);

 VAR_9 = FUNC_4(&VAR_0->base, VAR_6);
 if (VAR_9)
  return VAR_9;


 FUNC_3(&VAR_2->input, &VAR_0->base, 0);





 FUNC_7(VAR_2, VAR_7->rot);

 return 0;
}
