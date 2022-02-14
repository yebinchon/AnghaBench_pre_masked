
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct komeda_plane {TYPE_5__* layer; } ;
struct komeda_pipeline {int dummy; } ;
struct komeda_format_caps {int fourcc; int supported_rots; } ;
struct komeda_data_flow_cfg {scalar_t__ blending_zorder; int layer_alpha; int in_x; int in_y; int in_w; int in_h; int rot; int out_h; int out_w; int out_y; int out_x; int pixel_blend_mode; } ;
struct komeda_crtc_state {scalar_t__ max_slave_zorder; } ;
struct drm_plane_state {scalar_t__ normalized_zpos; int alpha; int src_x; int src_y; int src_w; int src_h; int rotation; int crtc_h; int crtc_w; int crtc_y; int crtc_x; int pixel_blend_mode; TYPE_2__* plane; int crtc; struct drm_framebuffer* fb; } ;
struct drm_framebuffer {int modifier; } ;
struct TYPE_6__ {struct komeda_pipeline* pipeline; } ;
struct TYPE_10__ {TYPE_1__ base; } ;
struct TYPE_9__ {struct komeda_pipeline* master; } ;
struct TYPE_8__ {struct komeda_format_caps* format_caps; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (char*,int ,scalar_t__,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,struct komeda_data_flow_cfg*,struct drm_framebuffer*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct komeda_data_flow_cfg*,int ,int) ;
 TYPE_4__* FUNC_6 (int ) ;
 TYPE_3__* FUNC_7 (struct drm_framebuffer*) ;
 struct komeda_plane* FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_9(struct drm_plane_state *VAR_1,
       struct komeda_crtc_state *VAR_2,
       struct komeda_data_flow_cfg *VAR_3)
{
 struct komeda_plane *VAR_4 = FUNC_8(VAR_1->plane);
 struct drm_framebuffer *VAR_5 = VAR_1->fb;
 const struct komeda_format_caps *VAR_6 = FUNC_7(VAR_5)->format_caps;
 struct komeda_pipeline *VAR_7 = VAR_4->layer->base.pipeline;

 FUNC_5(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->blending_zorder = VAR_1->normalized_zpos;
 if (VAR_7 == FUNC_6(VAR_1->crtc)->master)
  VAR_3->blending_zorder -= VAR_2->max_slave_zorder;
 if (VAR_3->blending_zorder < 0) {
  FUNC_0("%s zorder:%d < max_slave_zorder: %d.\n",
     VAR_1->plane->name, VAR_1->normalized_zpos,
     VAR_2->max_slave_zorder);
  return -VAR_0;
 }

 VAR_3->pixel_blend_mode = VAR_1->pixel_blend_mode;
 VAR_3->layer_alpha = VAR_1->alpha >> 8;

 VAR_3->out_x = VAR_1->crtc_x;
 VAR_3->out_y = VAR_1->crtc_y;
 VAR_3->out_w = VAR_1->crtc_w;
 VAR_3->out_h = VAR_1->crtc_h;

 VAR_3->in_x = VAR_1->src_x >> 16;
 VAR_3->in_y = VAR_1->src_y >> 16;
 VAR_3->in_w = VAR_1->src_w >> 16;
 VAR_3->in_h = VAR_1->src_h >> 16;

 VAR_3->rot = FUNC_1(VAR_1->rotation, VAR_6->supported_rots);
 if (!FUNC_2(VAR_3->rot, VAR_6->supported_rots)) {
  FUNC_0("rotation(0x%x) isn't supported by %s.\n",
     VAR_3->rot,
     FUNC_4(VAR_6->fourcc,
       VAR_5->modifier));
  return -VAR_0;
 }

 FUNC_3(VAR_4->layer, VAR_3, VAR_5);

 return 0;
}
