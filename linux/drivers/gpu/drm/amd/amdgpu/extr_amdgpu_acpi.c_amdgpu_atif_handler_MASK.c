
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct atif_sbios_requests {int pending; int backlight_level; } ;
struct amdgpu_encoder_atom_dig {int bl_dev; } ;
struct amdgpu_encoder {struct amdgpu_encoder_atom_dig* enc_priv; } ;
struct amdgpu_device {int flags; TYPE_3__* ddev; struct amdgpu_atif* atif; } ;
struct TYPE_5__ {scalar_t__ sbios_requests; } ;
struct TYPE_4__ {scalar_t__ command_code; int enabled; } ;
struct amdgpu_atif {struct amdgpu_encoder* encoder_for_bl; TYPE_2__ functions; TYPE_1__ notification_cfg; } ;
struct acpi_bus_event {scalar_t__ type; int device_class; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct amdgpu_atif*,struct atif_sbios_requests*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_encoder*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_8,
          struct acpi_bus_event *VAR_9)
{
 struct amdgpu_atif *VAR_10 = VAR_8->atif;
 int VAR_11;

 FUNC_0("event, device_class = %s, type = %#x\n",
   VAR_9->device_class, VAR_9->type);

 if (FUNC_9(VAR_9->device_class, VAR_0) != 0)
  return VAR_7;


 if (!VAR_10 ||
     !VAR_10->notification_cfg.enabled ||
     VAR_9->type != VAR_10->notification_cfg.command_code) {

  if (VAR_9->type == VAR_1)
   return VAR_6;
  else
   return VAR_7;
 }

 if (VAR_10->functions.sbios_requests) {
  struct atif_sbios_requests VAR_12;


  VAR_11 = FUNC_1(VAR_10, &VAR_12);

  if (VAR_11 <= 0)
   return VAR_6;

  FUNC_0("ATIF: %d pending SBIOS requests\n", VAR_11);


  if ((VAR_12.pending & VAR_4) &&
      !FUNC_2(VAR_8)) {
   struct amdgpu_encoder *VAR_13 = VAR_10->encoder_for_bl;

   if (VAR_13) {
    struct amdgpu_encoder_atom_dig *VAR_14 = VAR_13->enc_priv;

    FUNC_0("Changing brightness to %d\n",
       VAR_12.backlight_level);

    FUNC_3(VAR_8, VAR_13, VAR_12.backlight_level);





   }
  }
  if (VAR_12.pending & VAR_3) {
   if (VAR_8->flags & VAR_2) {
    FUNC_6(VAR_8->ddev->dev);

    FUNC_5(VAR_8->ddev);
    FUNC_7(VAR_8->ddev->dev);
    FUNC_8(VAR_8->ddev->dev);
   }
  }

 }






 return VAR_6;
}
