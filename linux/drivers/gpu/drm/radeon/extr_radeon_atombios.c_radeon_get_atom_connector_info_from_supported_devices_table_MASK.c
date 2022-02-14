
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_19__ {TYPE_5__* asIntSrcInfo; } ;
struct TYPE_14__ {TYPE_7__* asConnInfo; int usDeviceSupport; } ;
union atom_supported_devices {TYPE_6__ info_2d1; TYPE_1__ info; } ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int u8 ;
struct radeon_router {int ddc_valid; int cd_valid; } ;
struct radeon_mode_info {struct atom_context* atom_context; } ;
struct radeon_device {struct radeon_mode_info mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_13__ {void* hpd; } ;
struct TYPE_21__ {int valid; } ;
struct bios_connector {int valid; int line_mux; int devices; TYPE_10__ hpd; TYPE_8__ ddc_bus; scalar_t__ connector_type; } ;
struct atom_context {int bios; } ;
struct TYPE_17__ {int ucAccess; } ;
struct TYPE_15__ {size_t bfConnectorType; int bfAssociatedDAC; } ;
struct TYPE_16__ {TYPE_2__ sbfAccess; } ;
struct TYPE_20__ {TYPE_4__ sucI2cId; TYPE_3__ sucConnectorInfo; } ;
struct TYPE_18__ {int ucIntSrcBitmap; } ;
typedef TYPE_7__ ATOM_CONNECTOR_INFO_I2C ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int ) ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (struct atom_context*,int,int*,int*,int*,int*) ;
 int FUNC_4 (struct drm_device*,scalar_t__,int) ;
 int FUNC_5 (struct bios_connector*) ;
 struct bios_connector* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct drm_device*,int,int,scalar_t__,TYPE_8__*,int ,int,TYPE_10__*,struct radeon_router*) ;
 int FUNC_9 (struct drm_device*,int ,int,int ) ;
 int FUNC_10 (struct drm_device*,int ,int) ;
 int FUNC_11 (struct drm_device*,int,scalar_t__*,TYPE_8__*,int*,TYPE_10__*) ;
 int FUNC_12 (struct drm_device*,int,int) ;
 int FUNC_13 (struct drm_device*) ;
 TYPE_8__ FUNC_14 (struct radeon_device*,int) ;
 scalar_t__ VAR_21 ;
 scalar_t__* VAR_22 ;

bool FUNC_15(struct
         drm_device
         *VAR_23)
{
 struct radeon_device *VAR_24 = VAR_23->dev_private;
 struct radeon_mode_info *VAR_25 = &VAR_24->mode_info;
 struct atom_context *VAR_26 = VAR_25->atom_context;
 int VAR_27 = FUNC_2(VAR_12, VAR_20);
 uint16_t VAR_28, VAR_29;
 uint8_t VAR_30, VAR_31;
 uint16_t VAR_32;
 uint8_t VAR_33;
 union atom_supported_devices *VAR_34;
 int VAR_35, VAR_36, VAR_37;
 struct bios_connector *VAR_38;
 size_t VAR_39 = sizeof(*VAR_38) * VAR_10;
 struct radeon_router VAR_40;

 VAR_40.ddc_valid = 0;
 VAR_40.cd_valid = 0;

 VAR_38 = FUNC_6(VAR_39, VAR_16);
 if (!VAR_38)
  return 0;

 if (!FUNC_3(VAR_26, VAR_27, &VAR_28, &VAR_30, &VAR_31,
        &VAR_29)) {
  FUNC_5(VAR_38);
  return 0;
 }

 VAR_34 =
     (union atom_supported_devices *)(VAR_26->bios + VAR_29);

 VAR_32 = FUNC_7(VAR_34->info.usDeviceSupport);

 if (VAR_30 > 1)
  VAR_37 = VAR_10;
 else
  VAR_37 = VAR_11;

 for (VAR_35 = 0; VAR_35 < VAR_37; VAR_35++) {
  ATOM_CONNECTOR_INFO_I2C VAR_41 =
      VAR_34->info.asConnInfo[VAR_35];

  VAR_38[VAR_35].valid = 0;

  if (!(VAR_32 & (1 << VAR_35))) {
   continue;
  }

  if (VAR_35 == VAR_3) {
   FUNC_1("Skipping Component Video\n");
   continue;
  }

  VAR_38[VAR_35].connector_type =
      VAR_22[VAR_41.sucConnectorInfo.
       sbfAccess.
       bfConnectorType];

  if (VAR_38[VAR_35].connector_type ==
      VAR_14)
   continue;

  VAR_33 = VAR_41.sucConnectorInfo.sbfAccess.bfAssociatedDAC;

  VAR_38[VAR_35].line_mux =
   VAR_41.sucI2cId.ucAccess;


  if (VAR_35 == VAR_8) {
   VAR_38[VAR_35].ddc_bus.valid = 0;
   VAR_38[VAR_35].line_mux = 50;
  } else if (VAR_35 == VAR_9) {
   VAR_38[VAR_35].ddc_bus.valid = 0;
   VAR_38[VAR_35].line_mux = 51;
  } else if (VAR_35 == VAR_3) {
   VAR_38[VAR_35].ddc_bus.valid = 0;
   VAR_38[VAR_35].line_mux = 52;
  } else
   VAR_38[VAR_35].ddc_bus =
       FUNC_14(VAR_24,
         VAR_38[VAR_35].line_mux);

  if ((VAR_31 > 1) && (VAR_30 > 1)) {
   u8 VAR_42 = VAR_34->info_2d1.asIntSrcInfo[VAR_35].ucIntSrcBitmap;
   switch (VAR_42) {
   case 0x4:
    VAR_38[VAR_35].hpd.hpd = VAR_17;
    break;
   case 0xa:
    VAR_38[VAR_35].hpd.hpd = VAR_18;
    break;
   default:
    VAR_38[VAR_35].hpd.hpd = VAR_19;
    break;
   }
  } else {
   if (VAR_35 == VAR_4)
    VAR_38[VAR_35].hpd.hpd = VAR_17;
   else if (VAR_35 == VAR_5)
    VAR_38[VAR_35].hpd.hpd = VAR_18;
   else
    VAR_38[VAR_35].hpd.hpd = VAR_19;
  }





  if (VAR_35 == VAR_0 || VAR_35 == VAR_1)
   VAR_38[VAR_35].connector_type =
       VAR_15;

  if (!FUNC_11
      (VAR_23, (1 << VAR_35), &VAR_38[VAR_35].connector_type,
       &VAR_38[VAR_35].ddc_bus, &VAR_38[VAR_35].line_mux,
       &VAR_38[VAR_35].hpd))
   continue;

  VAR_38[VAR_35].valid = 1;
  VAR_38[VAR_35].devices = (1 << VAR_35);

  if (FUNC_0(VAR_24) || VAR_21)
   FUNC_9(VAR_23,
      FUNC_12(VAR_23,
              (1 << VAR_35),
              VAR_33),
      (1 << VAR_35),
      0);
  else
   FUNC_10(VAR_23,
        FUNC_12(VAR_23,
         (1 << VAR_35),
         VAR_33),
        (1 << VAR_35));
 }


 for (VAR_35 = 0; VAR_35 < VAR_37; VAR_35++) {
  if (VAR_38[VAR_35].valid) {
   for (VAR_36 = 0; VAR_36 < VAR_37; VAR_36++) {
    if (VAR_38[VAR_36].valid && (VAR_35 != VAR_36)) {
     if (VAR_38[VAR_35].line_mux ==
         VAR_38[VAR_36].line_mux) {

      if (VAR_38[VAR_35].devices & (VAR_7)) {
       VAR_38[VAR_35].line_mux = 53;
       VAR_38[VAR_35].ddc_bus.valid = 0;
       continue;
      }
      if (VAR_38[VAR_36].devices & (VAR_7)) {
       VAR_38[VAR_36].line_mux = 53;
       VAR_38[VAR_36].ddc_bus.valid = 0;
       continue;
      }

      if (((VAR_38[VAR_35].devices & (VAR_6)) &&
           (VAR_38[VAR_36].devices & (VAR_2))) ||
          ((VAR_38[VAR_36].devices & (VAR_6)) &&
           (VAR_38[VAR_35].devices & (VAR_2)))) {
       VAR_38[VAR_35].devices |=
        VAR_38[VAR_36].devices;
       VAR_38[VAR_35].connector_type =
        VAR_13;
       if (VAR_38[VAR_36].devices & (VAR_6))
        VAR_38[VAR_35].hpd =
         VAR_38[VAR_36].hpd;
       VAR_38[VAR_36].valid = 0;
      }
     }
    }
   }
  }
 }


 for (VAR_35 = 0; VAR_35 < VAR_37; VAR_35++) {
  if (VAR_38[VAR_35].valid) {
   uint16_t VAR_43 =
    FUNC_4(VAR_23,
            VAR_38[VAR_35].connector_type,
            VAR_38[VAR_35].devices);
   FUNC_8(VAR_23,
        VAR_38[VAR_35].line_mux,
        VAR_38[VAR_35].devices,
        VAR_38[VAR_35].
        connector_type,
        &VAR_38[VAR_35].ddc_bus,
        0,
        VAR_43,
        &VAR_38[VAR_35].hpd,
        &VAR_40);
  }
 }

 FUNC_13(VAR_23);

 FUNC_5(VAR_38);
 return 1;
}
