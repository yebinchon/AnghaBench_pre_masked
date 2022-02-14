
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct radeon_encoder_atom_dig {scalar_t__ linkb; scalar_t__ dig_encoder; } ;
struct radeon_encoder {struct radeon_encoder_atom_dig* enc_priv; } ;
struct radeon_dp_link_train_info {int use_dpencoder; int tp3_supported; int * aux; int dp_clock; int dp_lane_count; struct drm_connector* connector; struct drm_encoder* encoder; struct radeon_device* rdev; int dpcd; int enc_id; } ;
struct TYPE_3__ {int atom_context; } ;
struct radeon_device {TYPE_1__ mode_info; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; int dp_clock; int dp_lane_count; int dpcd; } ;
struct radeon_connector {TYPE_2__* ddc_bus; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct TYPE_4__ {int aux; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int,int*,int*) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct radeon_dp_link_train_info*) ;
 scalar_t__ FUNC_6 (struct radeon_dp_link_train_info*) ;
 scalar_t__ FUNC_7 (struct radeon_dp_link_train_info*) ;
 scalar_t__ FUNC_8 (struct radeon_dp_link_train_info*) ;
 struct radeon_connector* FUNC_9 (struct drm_connector*) ;
 struct radeon_encoder* FUNC_10 (struct drm_encoder*) ;

void FUNC_11(struct drm_encoder *VAR_11,
     struct drm_connector *VAR_12)
{
 struct drm_device *VAR_13 = VAR_11->dev;
 struct radeon_device *VAR_14 = VAR_13->dev_private;
 struct radeon_encoder *VAR_15 = FUNC_10(VAR_11);
 struct radeon_encoder_atom_dig *VAR_16;
 struct radeon_connector *VAR_17;
 struct radeon_connector_atom_dig *VAR_18;
 struct radeon_dp_link_train_info VAR_19;
 int VAR_20;
 u8 VAR_21, VAR_22, VAR_23;

 if (!VAR_15->enc_priv)
  return;
 VAR_16 = VAR_15->enc_priv;

 VAR_17 = FUNC_9(VAR_12);
 if (!VAR_17->con_priv)
  return;
 VAR_18 = VAR_17->con_priv;

 if ((VAR_18->dp_sink_type != VAR_5) &&
     (VAR_18->dp_sink_type != VAR_6))
  return;





 VAR_19.use_dpencoder = 1;
 VAR_20 = FUNC_1(VAR_4, VAR_7);
 if (FUNC_2(VAR_14->mode_info.atom_context, VAR_20, &VAR_22, &VAR_23)) {
  if (VAR_23 > 1) {
   VAR_19.use_dpencoder = 0;
  }
 }

 VAR_19.enc_id = 0;
 if (VAR_16->dig_encoder)
  VAR_19.enc_id |= VAR_1;
 else
  VAR_19.enc_id |= VAR_0;
 if (VAR_16->linkb)
  VAR_19.enc_id |= VAR_3;
 else
  VAR_19.enc_id |= VAR_2;

 if (FUNC_3(&VAR_17->ddc_bus->aux, VAR_8, &VAR_21)
     == 1) {
  if (FUNC_0(VAR_14) && (VAR_21 & VAR_10))
   VAR_19.tp3_supported = 1;
  else
   VAR_19.tp3_supported = 0;
 } else {
  VAR_19.tp3_supported = 0;
 }

 FUNC_4(VAR_19.dpcd, VAR_18->dpcd, VAR_9);
 VAR_19.rdev = VAR_14;
 VAR_19.encoder = VAR_11;
 VAR_19.connector = VAR_12;
 VAR_19.dp_lane_count = VAR_18->dp_lane_count;
 VAR_19.dp_clock = VAR_18->dp_clock;
 VAR_19.aux = &VAR_17->ddc_bus->aux;

 if (FUNC_8(&VAR_19))
  goto done;
 if (FUNC_6(&VAR_19))
  goto done;
 if (FUNC_5(&VAR_19))
  goto done;
done:
 if (FUNC_7(&VAR_19))
  return;
}
