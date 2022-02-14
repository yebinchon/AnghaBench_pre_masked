
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_encoder {int devices; scalar_t__ encoder_id; } ;
struct TYPE_6__ {int atom_context; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct amdgpu_connector {int devices; } ;
typedef int args ;
struct TYPE_5__ {void* ucMisc; void* usDeviceID; int ucDacType; } ;
struct TYPE_7__ {TYPE_1__ sDacload; } ;
typedef TYPE_3__ DAC_LOAD_DETECTION_PS_ALLOCATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int*,int*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 struct amdgpu_connector* FUNC_5 (struct drm_connector*) ;
 struct amdgpu_encoder* FUNC_6 (struct drm_encoder*) ;

__attribute__((used)) static bool
FUNC_7(struct drm_encoder *VAR_13,
     struct drm_connector *VAR_14)
{
 struct drm_device *VAR_15 = VAR_13->dev;
 struct amdgpu_device *VAR_16 = VAR_15->dev_private;
 struct amdgpu_encoder *VAR_17 = FUNC_6(VAR_13);
 struct amdgpu_connector *VAR_18 = FUNC_5(VAR_14);

 if (VAR_17->devices & (VAR_7 |
           VAR_5 |
           VAR_4)) {
  DAC_LOAD_DETECTION_PS_ALLOCATION VAR_19;
  int VAR_20 = FUNC_0(VAR_8, VAR_10);
  uint8_t VAR_21, VAR_22;

  FUNC_4(&VAR_19, 0, sizeof(VAR_19));

  if (!FUNC_2(VAR_16->mode_info.atom_context, VAR_20, &VAR_21, &VAR_22))
   return 0;

  VAR_19.sDacload.ucMisc = 0;

  if ((VAR_17->encoder_id == VAR_11) ||
      (VAR_17->encoder_id == VAR_12))
   VAR_19.sDacload.ucDacType = VAR_0;
  else
   VAR_19.sDacload.ucDacType = VAR_1;

  if (VAR_18->devices & VAR_2)
   VAR_19.sDacload.usDeviceID = FUNC_3(VAR_2);
  else if (VAR_18->devices & VAR_3)
   VAR_19.sDacload.usDeviceID = FUNC_3(VAR_3);
  else if (VAR_18->devices & VAR_5) {
   VAR_19.sDacload.usDeviceID = FUNC_3(VAR_5);
   if (VAR_22 >= 3)
    VAR_19.sDacload.ucMisc = VAR_9;
  } else if (VAR_18->devices & VAR_6) {
   VAR_19.sDacload.usDeviceID = FUNC_3(VAR_6);
   if (VAR_22 >= 3)
    VAR_19.sDacload.ucMisc = VAR_9;
  }

  FUNC_1(VAR_16->mode_info.atom_context, VAR_20, (uint32_t *)&VAR_19);

  return 1;
 } else
  return 0;
}
