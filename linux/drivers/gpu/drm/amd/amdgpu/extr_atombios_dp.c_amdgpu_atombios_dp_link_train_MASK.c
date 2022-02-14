
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder_atom_dig {int dummy; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_connector_atom_dig {scalar_t__ dp_sink_type; int dp_clock; int dp_lane_count; int dpcd; } ;
struct amdgpu_connector {TYPE_1__* ddc_bus; struct amdgpu_connector_atom_dig* con_priv; } ;
struct amdgpu_atombios_dp_link_train_info {int tp3_supported; int * aux; int dp_clock; int dp_lane_count; struct drm_connector* connector; struct drm_encoder* encoder; struct amdgpu_device* adev; int dpcd; } ;
struct TYPE_2__ {int aux; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct amdgpu_atombios_dp_link_train_info*) ;
 scalar_t__ FUNC_1 (struct amdgpu_atombios_dp_link_train_info*) ;
 scalar_t__ FUNC_2 (struct amdgpu_atombios_dp_link_train_info*) ;
 scalar_t__ FUNC_3 (struct amdgpu_atombios_dp_link_train_info*) ;
 int FUNC_4 (int *,int ,int*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct amdgpu_connector* FUNC_6 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_7 (struct drm_encoder*) ;

void FUNC_8(struct drm_encoder *VAR_5,
       struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 struct amdgpu_encoder *VAR_9 = FUNC_7(VAR_5);
 struct amdgpu_encoder_atom_dig *VAR_10;
 struct amdgpu_connector *VAR_11;
 struct amdgpu_connector_atom_dig *VAR_12;
 struct amdgpu_atombios_dp_link_train_info VAR_13;
 u8 VAR_14;

 if (!VAR_9->enc_priv)
  return;
 VAR_10 = VAR_9->enc_priv;

 VAR_11 = FUNC_6(VAR_6);
 if (!VAR_11->con_priv)
  return;
 VAR_12 = VAR_11->con_priv;

 if ((VAR_12->dp_sink_type != VAR_0) &&
     (VAR_12->dp_sink_type != VAR_1))
  return;

 if (FUNC_4(&VAR_11->ddc_bus->aux, VAR_2, &VAR_14)
     == 1) {
  if (VAR_14 & VAR_4)
   VAR_13.tp3_supported = 1;
  else
   VAR_13.tp3_supported = 0;
 } else {
  VAR_13.tp3_supported = 0;
 }

 FUNC_5(VAR_13.dpcd, VAR_12->dpcd, VAR_3);
 VAR_13.adev = VAR_8;
 VAR_13.encoder = VAR_5;
 VAR_13.connector = VAR_6;
 VAR_13.dp_lane_count = VAR_12->dp_lane_count;
 VAR_13.dp_clock = VAR_12->dp_clock;
 VAR_13.aux = &VAR_11->ddc_bus->aux;

 if (FUNC_3(&VAR_13))
  goto done;
 if (FUNC_1(&VAR_13))
  goto done;
 if (FUNC_0(&VAR_13))
  goto done;
done:
 if (FUNC_2(&VAR_13))
  return;
}
