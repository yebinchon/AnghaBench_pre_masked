
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_encoder_lvds {int bl_dev; } ;
struct radeon_encoder_atom_dig {int bl_dev; } ;
struct radeon_encoder {struct radeon_encoder_lvds* enc_priv; } ;
struct TYPE_4__ {scalar_t__ command_code; int enabled; } ;
struct radeon_atif {struct radeon_encoder* encoder_for_bl; TYPE_1__ notification_cfg; } ;
struct radeon_device {int flags; TYPE_3__* ddev; scalar_t__ is_atom_bios; TYPE_2__* pdev; struct radeon_atif atif; } ;
struct atif_sbios_requests {int pending; int backlight_level; } ;
struct acpi_bus_event {scalar_t__ type; int device_class; } ;
typedef int acpi_handle ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct atif_sbios_requests*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct radeon_device*,struct radeon_encoder*,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct radeon_device *VAR_7,
  struct acpi_bus_event *VAR_8)
{
 struct radeon_atif *VAR_9 = &VAR_7->atif;
 struct atif_sbios_requests VAR_10;
 acpi_handle VAR_11;
 int VAR_12;

 FUNC_1("event, device_class = %s, type = %#x\n",
   VAR_8->device_class, VAR_8->type);

 if (FUNC_10(VAR_8->device_class, VAR_0) != 0)
  return VAR_5;

 if (!VAR_9->notification_cfg.enabled ||
   VAR_8->type != VAR_9->notification_cfg.command_code)

  return VAR_5;


 VAR_11 = FUNC_0(&VAR_7->pdev->dev);
 VAR_12 = FUNC_7(VAR_11, &VAR_10);

 if (VAR_12 <= 0)
  return VAR_5;

 FUNC_1("ATIF: %d pending SBIOS requests\n", VAR_12);

 if (VAR_10.pending & VAR_2) {
  struct radeon_encoder *VAR_13 = VAR_9->encoder_for_bl;

  if (VAR_13) {
   FUNC_1("Changing brightness to %d\n",
     VAR_10.backlight_level);

   FUNC_9(VAR_7, VAR_13, VAR_10.backlight_level);
  }
 }
 if (VAR_10.pending & VAR_1) {
  if ((VAR_7->flags & VAR_6) &&
      FUNC_8()) {
   FUNC_4(VAR_7->ddev->dev);

   FUNC_3(VAR_7->ddev);
   FUNC_5(VAR_7->ddev->dev);
   FUNC_6(VAR_7->ddev->dev);
  }
 }







 return VAR_4;
}
