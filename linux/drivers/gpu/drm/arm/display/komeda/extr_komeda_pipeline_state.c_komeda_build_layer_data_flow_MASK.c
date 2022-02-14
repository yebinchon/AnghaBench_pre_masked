
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct drm_plane* plane; } ;
struct komeda_plane_state {TYPE_1__ base; } ;
struct komeda_pipeline {int compiz; } ;
struct TYPE_5__ {int name; struct komeda_pipeline* pipeline; } ;
struct komeda_layer {TYPE_2__ base; } ;
struct komeda_data_flow_cfg {scalar_t__ en_split; int out_h; int out_w; int out_y; int out_x; int in_h; int in_w; int in_y; int in_x; } ;
struct komeda_crtc_state {int dummy; } ;
struct TYPE_6__ {int id; } ;
struct drm_plane {int name; TYPE_3__ base; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_2 (struct komeda_layer*,struct komeda_plane_state*,struct komeda_data_flow_cfg*) ;
 int FUNC_3 (struct drm_plane*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 scalar_t__ FUNC_4 (struct komeda_pipeline*,struct komeda_data_flow_cfg*) ;

int FUNC_5(struct komeda_layer *VAR_0,
     struct komeda_plane_state *VAR_1,
     struct komeda_crtc_state *VAR_2,
     struct komeda_data_flow_cfg *VAR_3)
{
 struct drm_plane *VAR_4 = VAR_1->base.plane;
 struct komeda_pipeline *VAR_5 = VAR_0->base.pipeline;
 int VAR_6;

 FUNC_0("%s handling [PLANE:%d:%s]: src[x/y:%d/%d, w/h:%d/%d] disp[x/y:%d/%d, w/h:%d/%d]",
    VAR_0->base.name, VAR_4->base.id, VAR_4->name,
    VAR_3->in_x, VAR_3->in_y, VAR_3->in_w, VAR_3->in_h,
    VAR_3->out_x, VAR_3->out_y, VAR_3->out_w, VAR_3->out_h);

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;


 if (VAR_3->en_split && FUNC_4(VAR_5, VAR_3))
  return 0;

 VAR_6 = FUNC_1(VAR_5->compiz, VAR_2, VAR_3);

 return VAR_6;
}
