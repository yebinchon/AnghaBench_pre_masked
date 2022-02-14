
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct komeda_splitter_state {int base; int overlap; int vsize; int hsize; } ;
struct TYPE_5__ {TYPE_1__* pipeline; } ;
struct komeda_splitter {TYPE_2__ base; int vsize; int hsize; } ;
struct komeda_data_flow_cfg {int input; int overlap; int in_h; int in_w; } ;
struct komeda_component_state {int dummy; } ;
struct drm_connector_state {int crtc; int connector; int state; } ;
struct TYPE_4__ {int * scalers; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct komeda_component_state*) ;
 int FUNC_2 (struct komeda_component_state*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 struct komeda_component_state* FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (int *,TYPE_2__*,int) ;
 int FUNC_7 (int ,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*,struct komeda_data_flow_cfg*) ;
 struct komeda_splitter_state* FUNC_8 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_9(struct komeda_splitter *VAR_1,
    struct drm_connector_state *VAR_2,
    struct komeda_data_flow_cfg *VAR_3,
    struct komeda_data_flow_cfg *VAR_4,
    struct komeda_data_flow_cfg *VAR_5)
{
 struct komeda_component_state *VAR_6;
 struct komeda_splitter_state *VAR_7;

 if (!VAR_1) {
  FUNC_0("Current HW doesn't support splitter.\n");
  return -VAR_0;
 }

 if (!FUNC_3(&VAR_1->hsize, VAR_3->in_w)) {
  FUNC_0("split in_w:%d is out of the acceptable range.\n",
     VAR_3->in_w);
  return -VAR_0;
 }

 if (!FUNC_3(&VAR_1->vsize, VAR_3->in_h)) {
  FUNC_0("split in_h: %d exceeds the acceptable range.\n",
     VAR_3->in_h);
  return -VAR_0;
 }

 VAR_6 = FUNC_5(&VAR_1->base,
   VAR_2->state, VAR_2->connector, VAR_2->crtc);

 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 FUNC_7(VAR_1->base.pipeline->scalers[0],
          VAR_3, VAR_4, VAR_5);

 VAR_7 = FUNC_8(VAR_6);
 VAR_7->hsize = VAR_3->in_w;
 VAR_7->vsize = VAR_3->in_h;
 VAR_7->overlap = VAR_3->overlap;

 FUNC_4(&VAR_7->base, &VAR_3->input, 0);
 FUNC_6(&VAR_4->input, &VAR_1->base, 0);
 FUNC_6(&VAR_5->input, &VAR_1->base, 1);

 return 0;
}
