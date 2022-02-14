
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct drm_color_lut {int dummy; } ;
struct drm_color_ctm {int dummy; } ;
struct TYPE_12__ {TYPE_3__* ctm; int gamma_lut; int degamma_lut; TYPE_2__* state; } ;
struct dm_crtc_state {int cm_has_degamma; int cm_is_degamma_srgb; TYPE_4__ base; struct dc_stream_state* stream; } ;
struct TYPE_14__ {int enable_adjustment; } ;
struct TYPE_13__ {int enable_remap; int matrix; } ;
struct dc_stream_state {TYPE_6__ csc_color_matrix; TYPE_5__ gamut_remap_matrix; TYPE_7__* out_transfer_func; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;
struct TYPE_15__ {void* tf; void* type; } ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_10__ {TYPE_1__* dev; } ;
struct TYPE_9__ {scalar_t__ dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct drm_color_ctm*,int ) ;
 struct drm_color_lut* FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct drm_color_lut const*,scalar_t__) ;
 int FUNC_3 (TYPE_7__*,struct drm_color_lut const*,scalar_t__,int) ;
 int FUNC_4 (TYPE_7__*,struct drm_color_lut const*,scalar_t__,int) ;

int FUNC_5(struct dm_crtc_state *VAR_8)
{
 struct dc_stream_state *VAR_9 = VAR_8->stream;
 struct amdgpu_device *VAR_10 =
  (struct amdgpu_device *)VAR_8->base.state->dev->dev_private;
 bool VAR_11 = VAR_10->asic_type <= VAR_0;
 struct drm_color_ctm *VAR_12 = ((void*)0);
 const struct drm_color_lut *VAR_13, *VAR_14;
 uint32_t VAR_15, VAR_16;
 bool VAR_17, VAR_18;
 bool VAR_19;
 int VAR_20;

 VAR_13 = FUNC_1(VAR_8->base.degamma_lut, &VAR_15);
 if (VAR_13 && VAR_15 != VAR_3)
  return -VAR_1;

 VAR_14 = FUNC_1(VAR_8->base.gamma_lut, &VAR_16);
 if (VAR_14 && VAR_16 != VAR_3 &&
     VAR_16 != VAR_2)
  return -VAR_1;

 VAR_18 =
  VAR_13 && !FUNC_2(VAR_13, VAR_15);

 VAR_17 =
  VAR_14 && !FUNC_2(VAR_14, VAR_16);

 VAR_19 = VAR_16 == VAR_2;


 VAR_8->cm_has_degamma = 0;
 VAR_8->cm_is_degamma_srgb = 0;


 if (VAR_19) {
  VAR_8->cm_is_degamma_srgb = 1;
  VAR_9->out_transfer_func->type = VAR_5;
  VAR_9->out_transfer_func->tf = VAR_7;

  VAR_20 = FUNC_3(VAR_9->out_transfer_func, VAR_14,
        VAR_16, VAR_11);
  if (VAR_20)
   return VAR_20;
 } else if (VAR_17) {

  VAR_9->out_transfer_func->type = VAR_5;
  VAR_9->out_transfer_func->tf = VAR_6;

  VAR_20 = FUNC_4(VAR_9->out_transfer_func, VAR_14,
        VAR_16, VAR_11);
  if (VAR_20)
   return VAR_20;
 } else {




  VAR_9->out_transfer_func->type = VAR_4;
  VAR_9->out_transfer_func->tf = VAR_6;
 }






 VAR_8->cm_has_degamma = VAR_18;


 if (VAR_8->base.ctm) {
  VAR_12 = (struct drm_color_ctm *)VAR_8->base.ctm->data;
  FUNC_0(VAR_12, VAR_9->gamut_remap_matrix.matrix);

  VAR_9->gamut_remap_matrix.enable_remap = 1;
  VAR_9->csc_color_matrix.enable_adjustment = 0;
 } else {

  VAR_9->gamut_remap_matrix.enable_remap = 0;
  VAR_9->csc_color_matrix.enable_adjustment = 0;
 }

 return 0;
}
