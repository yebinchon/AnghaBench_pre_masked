
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_connector_atom_dig {scalar_t__ dp_sink_type; } ;
struct TYPE_4__ {scalar_t__ ddc_valid; } ;
struct amdgpu_connector {void* edid; TYPE_3__* ddc_bus; struct amdgpu_connector_atom_dig* con_priv; TYPE_1__ router; } ;
struct TYPE_5__ {int ddc; } ;
struct TYPE_6__ {int adapter; TYPE_2__ aux; scalar_t__ has_aux; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct drm_connector*) ;
 void* FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_connector*) ;
 void* FUNC_3 (struct drm_connector*,int *) ;
 struct amdgpu_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_6)
{
 struct drm_device *VAR_7 = VAR_6->dev;
 struct amdgpu_device *VAR_8 = VAR_7->dev_private;
 struct amdgpu_connector *VAR_9 = FUNC_4(VAR_6);

 if (VAR_9->edid)
  return;


 if (VAR_9->router.ddc_valid)
  FUNC_2(VAR_9);

 if ((FUNC_0(VAR_6) !=
      VAR_5) &&
     VAR_9->ddc_bus->has_aux) {
  VAR_9->edid = FUNC_3(VAR_6,
            &VAR_9->ddc_bus->aux.ddc);
 } else if ((VAR_6->connector_type == VAR_2) ||
     (VAR_6->connector_type == VAR_4)) {
  struct amdgpu_connector_atom_dig *VAR_10 = VAR_9->con_priv;

  if ((VAR_10->dp_sink_type == VAR_0 ||
       VAR_10->dp_sink_type == VAR_1) &&
      VAR_9->ddc_bus->has_aux)
   VAR_9->edid = FUNC_3(VAR_6,
             &VAR_9->ddc_bus->aux.ddc);
  else if (VAR_9->ddc_bus)
   VAR_9->edid = FUNC_3(VAR_6,
             &VAR_9->ddc_bus->adapter);
 } else if (VAR_9->ddc_bus) {
  VAR_9->edid = FUNC_3(VAR_6,
            &VAR_9->ddc_bus->adapter);
 }

 if (!VAR_9->edid) {

  if (((VAR_6->connector_type == VAR_3) ||
       (VAR_6->connector_type == VAR_4)))
   VAR_9->edid = FUNC_1(VAR_8);
 }
}
