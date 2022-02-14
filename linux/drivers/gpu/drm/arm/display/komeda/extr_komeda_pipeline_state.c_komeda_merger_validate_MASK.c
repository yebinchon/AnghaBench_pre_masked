
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_merger_state {int vsize_merged; int hsize_merged; } ;
struct komeda_merger {int base; int vsize_merged; int hsize_merged; } ;
struct komeda_data_flow_cfg {int input; int out_h; int out_w; } ;
struct TYPE_2__ {int crtc; int state; } ;
struct komeda_crtc_state {TYPE_1__ base; } ;
struct komeda_component_state {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct komeda_component_state*) ;
 int FUNC_2 (struct komeda_component_state*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct komeda_component_state*,int *,int) ;
 struct komeda_component_state* FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 struct komeda_merger_state* FUNC_7 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_8(struct komeda_merger *VAR_1,
         void *VAR_2,
         struct komeda_crtc_state *VAR_3,
         struct komeda_data_flow_cfg *VAR_4,
         struct komeda_data_flow_cfg *VAR_5,
         struct komeda_data_flow_cfg *VAR_6)
{
 struct komeda_component_state *VAR_7;
 struct komeda_merger_state *VAR_8;
 int VAR_9 = 0;

 if (!VAR_1) {
  FUNC_0("No merger is available");
  return -VAR_0;
 }

 if (!FUNC_3(&VAR_1->hsize_merged, VAR_6->out_w)) {
  FUNC_0("merged_w: %d is out of the accepted range.\n",
     VAR_6->out_w);
  return -VAR_0;
 }

 if (!FUNC_3(&VAR_1->vsize_merged, VAR_6->out_h)) {
  FUNC_0("merged_h: %d is out of the accepted range.\n",
     VAR_6->out_h);
  return -VAR_0;
 }

 VAR_7 = FUNC_5(&VAR_1->base,
   VAR_3->base.state, VAR_3->base.crtc, VAR_3->base.crtc);

 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_8 = FUNC_7(VAR_7);
 VAR_8->hsize_merged = VAR_6->out_w;
 VAR_8->vsize_merged = VAR_6->out_h;

 FUNC_4(VAR_7, &VAR_4->input, 0);
 FUNC_4(VAR_7, &VAR_5->input, 1);
 FUNC_6(&VAR_6->input, &VAR_1->base, 0);

 return VAR_9;
}
