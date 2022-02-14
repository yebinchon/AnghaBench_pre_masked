
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct komeda_scaler_state {int en_alpha; int base; int right_part; int en_split; scalar_t__ en_img_enhancement; scalar_t__ en_scaling; int total_hsize_out; int total_hsize_in; int total_vsize_in; int left_crop; int right_crop; int vsize_out; int hsize_out; int vsize_in; int hsize_in; } ;
struct komeda_scaler {int base; } ;
struct TYPE_5__ {int component; } ;
struct komeda_data_flow_cfg {scalar_t__ pixel_blend_mode; TYPE_2__ input; int right_part; int en_split; scalar_t__ en_img_enhancement; scalar_t__ en_scaling; int total_out_w; int total_in_w; int total_in_h; int left_crop; int right_crop; int out_h; int out_w; int in_h; int in_w; } ;
struct TYPE_4__ {int crtc; struct drm_atomic_state* state; } ;
struct komeda_crtc_state {TYPE_1__ base; } ;
struct komeda_component_state {int dummy; } ;
struct drm_atomic_state {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct komeda_component_state*) ;
 int FUNC_2 (struct komeda_component_state*) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 struct komeda_scaler* FUNC_4 (int ,struct drm_atomic_state*) ;
 struct komeda_component_state* FUNC_5 (int *,struct drm_atomic_state*,void*,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (struct komeda_scaler*,struct komeda_crtc_state*,struct komeda_data_flow_cfg*) ;
 struct komeda_scaler_state* FUNC_8 (struct komeda_component_state*) ;

__attribute__((used)) static int
FUNC_9(void *VAR_2,
         struct komeda_crtc_state *VAR_3,
         struct komeda_data_flow_cfg *VAR_4)
{
 struct drm_atomic_state *VAR_5 = VAR_3->base.state;
 struct komeda_component_state *VAR_6;
 struct komeda_scaler_state *VAR_7;
 struct komeda_scaler *VAR_8;
 int VAR_9 = 0;

 if (!(VAR_4->en_scaling || VAR_4->en_img_enhancement))
  return 0;

 VAR_8 = FUNC_4(VAR_4->input.component,
         VAR_5);
 if (!VAR_8) {
  FUNC_0("No scaler available");
  return -VAR_1;
 }

 VAR_9 = FUNC_7(VAR_8, VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_6 = FUNC_5(&VAR_8->base,
   VAR_5, VAR_2, VAR_3->base.crtc);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_7 = FUNC_8(VAR_6);

 VAR_7->hsize_in = VAR_4->in_w;
 VAR_7->vsize_in = VAR_4->in_h;
 VAR_7->hsize_out = VAR_4->out_w;
 VAR_7->vsize_out = VAR_4->out_h;
 VAR_7->right_crop = VAR_4->right_crop;
 VAR_7->left_crop = VAR_4->left_crop;
 VAR_7->total_vsize_in = VAR_4->total_in_h;
 VAR_7->total_hsize_in = VAR_4->total_in_w;
 VAR_7->total_hsize_out = VAR_4->total_out_w;


 VAR_7->en_alpha = VAR_4->pixel_blend_mode != VAR_0;
 VAR_7->en_scaling = VAR_4->en_scaling;
 VAR_7->en_img_enhancement = VAR_4->en_img_enhancement;
 VAR_7->en_split = VAR_4->en_split;
 VAR_7->right_part = VAR_4->right_part;

 FUNC_3(&VAR_7->base, &VAR_4->input, 0);
 FUNC_6(&VAR_4->input, &VAR_8->base, 0);
 return VAR_9;
}
