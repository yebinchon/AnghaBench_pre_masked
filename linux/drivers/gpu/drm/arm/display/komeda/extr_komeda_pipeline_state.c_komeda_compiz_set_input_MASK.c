
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct komeda_data_flow_cfg {int blending_zorder; scalar_t__ out_x; scalar_t__ out_w; scalar_t__ out_y; scalar_t__ out_h; int input; int layer_alpha; int pixel_blend_mode; } ;
struct TYPE_3__ {int crtc; struct drm_atomic_state* state; } ;
struct komeda_crtc_state {TYPE_1__ base; } ;
struct komeda_component_state {int changed_active_inputs; } ;
struct komeda_compiz_input_cfg {scalar_t__ hsize; scalar_t__ vsize; scalar_t__ hoffset; scalar_t__ voffset; int layer_alpha; int pixel_blend_mode; } ;
struct komeda_compiz {int base; } ;
struct drm_atomic_state {int dummy; } ;
struct TYPE_4__ {struct komeda_compiz_input_cfg* cins; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct komeda_component_state*) ;
 int FUNC_3 (struct komeda_component_state*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct komeda_component_state*,int *,int) ;
 scalar_t__ FUNC_6 (struct komeda_component_state*,int *,int) ;
 struct komeda_component_state* FUNC_7 (int *,struct drm_atomic_state*) ;
 struct komeda_component_state* FUNC_8 (int *,struct drm_atomic_state*,int ,int ) ;
 int FUNC_9 (int *,int *,int ) ;
 scalar_t__ FUNC_10 (struct komeda_compiz_input_cfg*,struct komeda_compiz_input_cfg*,int) ;
 int FUNC_11 (struct komeda_crtc_state*,scalar_t__*,scalar_t__*) ;
 TYPE_2__* FUNC_12 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_13(struct komeda_compiz *VAR_1,
   struct komeda_crtc_state *VAR_2,
   struct komeda_data_flow_cfg *VAR_3)
{
 struct drm_atomic_state *VAR_4 = VAR_2->base.state;
 struct komeda_component_state *VAR_5, *VAR_6;
 struct komeda_compiz_input_cfg *VAR_7;
 u16 VAR_8, VAR_9;
 int VAR_10 = VAR_3->blending_zorder;

 FUNC_11(VAR_2, &VAR_8, &VAR_9);

 if ((VAR_3->out_x + VAR_3->out_w > VAR_8) ||
     (VAR_3->out_y + VAR_3->out_h > VAR_9) ||
      VAR_3->out_w == 0 || VAR_3->out_h == 0) {
  FUNC_1("invalid disp rect [x=%d, y=%d, w=%d, h=%d]\n",
     VAR_3->out_x, VAR_3->out_y,
     VAR_3->out_w, VAR_3->out_h);
  return -VAR_0;
 }

 VAR_5 = FUNC_8(&VAR_1->base, VAR_4,
   VAR_2->base.crtc, VAR_2->base.crtc);
 if (FUNC_2(VAR_5))
  return FUNC_3(VAR_5);

 if (FUNC_6(VAR_5, &VAR_3->input, VAR_10))
  return -VAR_0;

 VAR_7 = &(FUNC_12(VAR_5)->cins[VAR_10]);

 VAR_7->hsize = VAR_3->out_w;
 VAR_7->vsize = VAR_3->out_h;
 VAR_7->hoffset = VAR_3->out_x;
 VAR_7->voffset = VAR_3->out_y;
 VAR_7->pixel_blend_mode = VAR_3->pixel_blend_mode;
 VAR_7->layer_alpha = VAR_3->layer_alpha;

 VAR_6 = FUNC_7(&VAR_1->base, VAR_4);
 FUNC_4(!VAR_6);


 if (FUNC_10(&(FUNC_12(VAR_6)->cins[VAR_10]), VAR_7, sizeof(*VAR_7)))
  VAR_5->changed_active_inputs |= FUNC_0(VAR_10);

 FUNC_5(VAR_5, &VAR_3->input, VAR_10);
 FUNC_9(&VAR_3->input, &VAR_1->base, 0);

 return 0;
}
