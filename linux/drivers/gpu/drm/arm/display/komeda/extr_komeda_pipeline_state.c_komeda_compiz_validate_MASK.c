
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct komeda_data_flow_cfg {int layer_alpha; scalar_t__ blending_zorder; int pixel_blend_mode; int in_h; int out_h; int in_w; int out_w; int input; } ;
struct TYPE_2__ {int crtc; int state; } ;
struct komeda_crtc_state {TYPE_1__ base; } ;
struct komeda_component_state {int dummy; } ;
struct komeda_compiz_state {int vsize; int hsize; } ;
struct komeda_compiz {int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct komeda_component_state*) ;
 int FUNC_1 (struct komeda_component_state*) ;
 struct komeda_component_state* FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct komeda_crtc_state*,int *,int *) ;
 struct komeda_compiz_state* FUNC_5 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_6(struct komeda_compiz *VAR_1,
         struct komeda_crtc_state *VAR_2,
         struct komeda_data_flow_cfg *VAR_3)
{
 struct komeda_component_state *VAR_4;
 struct komeda_compiz_state *VAR_5;

 VAR_4 = FUNC_2(&VAR_1->base,
   VAR_2->base.state, VAR_2->base.crtc, VAR_2->base.crtc);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_5(VAR_4);

 FUNC_4(VAR_2, &VAR_5->hsize, &VAR_5->vsize);

 FUNC_3(&VAR_3->input, &VAR_1->base, 0);




 if (VAR_3) {
  VAR_3->in_w = VAR_5->hsize;
  VAR_3->in_h = VAR_5->vsize;
  VAR_3->out_w = VAR_3->in_w;
  VAR_3->out_h = VAR_3->in_h;



  VAR_3->pixel_blend_mode = VAR_0;
  VAR_3->layer_alpha = 0xFF;
  VAR_3->blending_zorder = 0;
 }

 return 0;
}
