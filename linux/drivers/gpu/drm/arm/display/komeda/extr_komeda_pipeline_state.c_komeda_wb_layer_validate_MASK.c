
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct komeda_layer_state {int base; int * addr; int vsize; int hsize; } ;
struct komeda_layer {int base; } ;
struct TYPE_6__ {TYPE_2__* format; } ;
struct komeda_fb {TYPE_3__ base; } ;
struct komeda_data_flow_cfg {int input; int out_y; int out_x; int out_h; int out_w; } ;
struct komeda_component_state {int dummy; } ;
struct drm_connector_state {int crtc; int connector; int state; TYPE_1__* writeback_job; } ;
struct TYPE_5__ {int num_planes; } ;
struct TYPE_4__ {int fb; } ;


 scalar_t__ FUNC_0 (struct komeda_component_state*) ;
 int FUNC_1 (struct komeda_component_state*) ;
 int FUNC_2 (int *,int *,int ) ;
 struct komeda_component_state* FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct komeda_fb*,int ,int ,int) ;
 int FUNC_6 (struct komeda_layer*,struct komeda_fb*,struct komeda_data_flow_cfg*) ;
 struct komeda_fb* FUNC_7 (int ) ;
 struct komeda_layer_state* FUNC_8 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_9(struct komeda_layer *VAR_0,
    struct drm_connector_state *VAR_1,
    struct komeda_data_flow_cfg *VAR_2)
{
 struct komeda_fb *VAR_3 = FUNC_7(VAR_1->writeback_job->fb);
 struct komeda_component_state *VAR_4;
 struct komeda_layer_state *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_6(VAR_0, VAR_3, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_3(&VAR_0->base,
   VAR_1->state, VAR_1->connector, VAR_1->crtc);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_8(VAR_4);

 VAR_5->hsize = VAR_2->out_w;
 VAR_5->vsize = VAR_2->out_h;

 for (VAR_6 = 0; VAR_6 < VAR_3->base.format->num_planes; VAR_6++)
  VAR_5->addr[VAR_6] = FUNC_5(VAR_3, VAR_2->out_x,
             VAR_2->out_y, VAR_6);

 FUNC_2(&VAR_5->base, &VAR_2->input, 0);
 FUNC_4(&VAR_2->input, &VAR_0->base, 0);

 return 0;
}
