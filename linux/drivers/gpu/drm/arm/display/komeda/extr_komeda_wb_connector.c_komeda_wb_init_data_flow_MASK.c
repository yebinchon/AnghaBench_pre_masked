
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* pipeline; } ;
struct komeda_layer {TYPE_5__ base; } ;
struct TYPE_7__ {int * component; } ;
struct komeda_data_flow_cfg {int rot; int pixel_blend_mode; TYPE_2__ input; int in_h; int in_w; int out_h; int out_w; } ;
struct komeda_crtc_state {int dummy; } ;
struct drm_framebuffer {int height; int width; } ;
struct drm_connector_state {TYPE_1__* writeback_job; } ;
struct TYPE_9__ {TYPE_3__* compiz; } ;
struct TYPE_8__ {int base; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct komeda_layer*,struct komeda_data_flow_cfg*,struct drm_framebuffer*) ;
 int FUNC_1 (struct komeda_data_flow_cfg*,int ,int) ;
 int FUNC_2 (struct komeda_crtc_state*,int *,int *) ;

__attribute__((used)) static int
FUNC_3(struct komeda_layer *VAR_2,
    struct drm_connector_state *VAR_3,
    struct komeda_crtc_state *VAR_4,
    struct komeda_data_flow_cfg *VAR_5)
{
 struct drm_framebuffer *VAR_6 = VAR_3->writeback_job->fb;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->out_w = VAR_6->width;
 VAR_5->out_h = VAR_6->height;


 FUNC_2(VAR_4, &VAR_5->in_w, &VAR_5->in_h);
 VAR_5->input.component = &VAR_2->base.pipeline->compiz->base;

 VAR_5->pixel_blend_mode = VAR_0;
 VAR_5->rot = VAR_1;

 FUNC_0(VAR_2, VAR_5, VAR_6);

 return 0;
}
