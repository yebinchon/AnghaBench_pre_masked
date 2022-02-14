
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_device {int flags; scalar_t__ is_atom_bios; } ;
struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_device* dev; } ;
struct TYPE_4__ {scalar_t__ ddc_valid; } ;
struct radeon_connector {void* edid; TYPE_3__* ddc_bus; struct drm_connector base; struct radeon_connector_atom_dig* con_priv; TYPE_1__ router; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_5__ {int ddc; } ;
struct TYPE_6__ {int adapter; TYPE_2__ aux; scalar_t__ has_aux; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct drm_connector*,int *) ;
 void* FUNC_1 (struct drm_connector*,int *) ;
 void* FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct radeon_connector*) ;
 scalar_t__ VAR_8 ;
 struct radeon_connector* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct drm_connector *VAR_9)
{
 struct drm_device *VAR_10 = VAR_9->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_connector *VAR_12 = FUNC_5(VAR_9);

 if (VAR_12->edid)
  return;


 if (VAR_12->router.ddc_valid)
  FUNC_4(VAR_12);

 if ((FUNC_3(VAR_9) !=
      VAR_5) &&
     VAR_12->ddc_bus->has_aux) {
  VAR_12->edid = FUNC_0(VAR_9,
            &VAR_12->ddc_bus->aux.ddc);
 } else if ((VAR_9->connector_type == VAR_2) ||
     (VAR_9->connector_type == VAR_4)) {
  struct radeon_connector_atom_dig *VAR_13 = VAR_12->con_priv;

  if ((VAR_13->dp_sink_type == VAR_0 ||
       VAR_13->dp_sink_type == VAR_1) &&
      VAR_12->ddc_bus->has_aux)
   VAR_12->edid = FUNC_0(&VAR_12->base,
             &VAR_12->ddc_bus->aux.ddc);
  else if (VAR_12->ddc_bus)
   VAR_12->edid = FUNC_0(&VAR_12->base,
             &VAR_12->ddc_bus->adapter);
 } else if (FUNC_6() & VAR_7 &&
     VAR_9->connector_type == VAR_3 &&
     VAR_12->ddc_bus) {
  VAR_12->edid = FUNC_1(&VAR_12->base,
         &VAR_12->ddc_bus->adapter);
 } else if (VAR_12->ddc_bus) {
  VAR_12->edid = FUNC_0(&VAR_12->base,
            &VAR_12->ddc_bus->adapter);
 }

 if (!VAR_12->edid) {



  if ((VAR_11->flags & VAR_6) && (VAR_8 != 0))
   return;

  if (VAR_11->is_atom_bios) {

   if (((VAR_9->connector_type == VAR_3) ||
        (VAR_9->connector_type == VAR_4)))
    VAR_12->edid = FUNC_2(VAR_11);
  } else {

   VAR_12->edid = FUNC_2(VAR_11);
  }
 }
}
