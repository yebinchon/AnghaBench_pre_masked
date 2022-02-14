
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct i2c_client {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int htotal; int hsync_start; int flags; } ;
struct ch7006_tv_norm_info {int dispmode; } ;
struct ch7006_state {int* regs; } ;
struct TYPE_2__ {int* regs; } ;
struct ch7006_encoder_params {int input_format; int xcm; int pcm; scalar_t__ active_detect; scalar_t__ pout_level; scalar_t__ sync_encoding; scalar_t__ sync_direction; scalar_t__ clock_edge; scalar_t__ clock_mode; } ;
struct ch7006_priv {size_t norm; TYPE_1__ saved_state; struct ch7006_mode* mode; struct ch7006_state state; struct ch7006_encoder_params params; } ;
struct ch7006_mode {int dispmode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct i2c_client*,char*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct i2c_client*,struct ch7006_state*) ;
 struct ch7006_tv_norm_info* VAR_28 ;
 struct i2c_client* FUNC_8 (struct drm_encoder*) ;
 struct ch7006_priv* FUNC_9 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_29,
         struct drm_display_mode *VAR_30,
         struct drm_display_mode *VAR_31)
{
 struct i2c_client *VAR_32 = FUNC_8(VAR_29);
 struct ch7006_priv *VAR_33 = FUNC_9(VAR_29);
 struct ch7006_encoder_params *VAR_34 = &VAR_33->params;
 struct ch7006_state *VAR_35 = &VAR_33->state;
 uint8_t *VAR_36 = VAR_35->regs;
 const struct ch7006_mode *VAR_37 = VAR_33->mode;
 const struct ch7006_tv_norm_info *VAR_38 = &VAR_28[VAR_33->norm];
 int VAR_39;

 FUNC_1(VAR_32, "\n");

 VAR_36[VAR_9] = VAR_38->dispmode | VAR_37->dispmode;
 VAR_36[VAR_1] = 0;
 VAR_36[VAR_10] = FUNC_0(VAR_11,
      VAR_34->input_format);

 VAR_36[VAR_2] = VAR_6
  | FUNC_0(VAR_7, VAR_34->xcm)
  | FUNC_0(VAR_4, VAR_34->pcm);
 if (VAR_34->clock_mode)
  VAR_36[VAR_2] |= VAR_3;
 if (VAR_34->clock_edge)
  VAR_36[VAR_2] |= VAR_5;

 VAR_39 = (VAR_30->htotal & ~0x7) - (VAR_30->hsync_start & ~0x7);
 VAR_36[VAR_18] = FUNC_0(VAR_19, VAR_39);
 VAR_36[VAR_20] = FUNC_0(VAR_21, VAR_39);

 VAR_36[VAR_12] = 0;
 if (VAR_34->sync_direction)
  VAR_36[VAR_12] |= VAR_14;
 if (VAR_34->sync_encoding)
  VAR_36[VAR_12] |= VAR_13;
 if (VAR_30->flags & VAR_27)
  VAR_36[VAR_12] |= VAR_16;
 if (VAR_30->flags & VAR_26)
  VAR_36[VAR_12] |= VAR_15;

 VAR_36[VAR_8] = 0;
 VAR_36[VAR_0] = 0;

 VAR_36[VAR_22] = 0;
 if (VAR_34->pout_level)
  VAR_36[VAR_22] |= VAR_23;

 VAR_36[VAR_24] = 0;
 if (VAR_34->active_detect)
  VAR_36[VAR_24] |= VAR_25;

 VAR_36[VAR_17] = VAR_33->saved_state.regs[VAR_17];

 FUNC_2(VAR_29);
 FUNC_6(VAR_29);
 FUNC_3(VAR_29);
 FUNC_4(VAR_29);
 FUNC_5(VAR_29);

 FUNC_7(VAR_32, VAR_35);
}
