
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct drm_plane* plane; } ;
struct komeda_plane_state {TYPE_1__ base; } ;
struct komeda_pipeline {int compiz; int merger; int * scalers; } ;
struct TYPE_6__ {int name; struct komeda_pipeline* pipeline; } ;
struct komeda_layer {TYPE_2__ base; struct komeda_layer* right; } ;
struct TYPE_8__ {scalar_t__ component; } ;
struct komeda_data_flow_cfg {TYPE_4__ input; int rot; int out_h; int out_w; int out_y; int out_x; int in_h; int in_w; int in_y; int in_x; } ;
struct komeda_crtc_state {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct drm_plane {int name; TYPE_3__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct komeda_layer*,struct komeda_plane_state*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_2 (int ,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_3 (int ,struct drm_plane*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*) ;
 int FUNC_4 (struct komeda_data_flow_cfg*,int ) ;
 int FUNC_5 (int ,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*) ;

int FUNC_6(struct komeda_layer *VAR_0,
           struct komeda_plane_state *VAR_1,
           struct komeda_crtc_state *VAR_2,
           struct komeda_data_flow_cfg *VAR_3)
{
 struct drm_plane *VAR_4 = VAR_1->base.plane;
 struct komeda_pipeline *VAR_5 = VAR_0->base.pipeline;
 struct komeda_layer *VAR_6 = VAR_0->right;
 struct komeda_data_flow_cfg VAR_7, VAR_8;
 int VAR_9;

 FUNC_5(VAR_5->scalers[0], VAR_3, &VAR_7, &VAR_8);

 FUNC_0("Assign %s + %s to [PLANE:%d:%s]: "
    "src[x/y:%d/%d, w/h:%d/%d] disp[x/y:%d/%d, w/h:%d/%d]",
    VAR_0->base.name, VAR_6->base.name,
    VAR_4->base.id, VAR_4->name,
    VAR_3->in_x, VAR_3->in_y, VAR_3->in_w, VAR_3->in_h,
    VAR_3->out_x, VAR_3->out_y, VAR_3->out_w, VAR_3->out_h);

 VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_1, VAR_2, &VAR_8);
 if (VAR_9)
  return VAR_9;


 FUNC_4(VAR_3, VAR_3->rot);




 if (VAR_8.input.component == VAR_7.input.component)
  return 0;


 VAR_9 = FUNC_3(VAR_5->merger, VAR_4, VAR_2,
         &VAR_7, &VAR_8, VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_5->compiz, VAR_2, VAR_3);

 return VAR_9;
}
