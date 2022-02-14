
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct radeon_device {int dummy; } ;
struct radeon_connector_atom_dig {int* dpcd; int is_mst; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_connector {int mst_mgr; TYPE_2__* ddc_bus; TYPE_1__ base; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_4__ {int aux; } ;


 int FUNC_0 (struct radeon_device*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int*,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;

int
FUNC_4(struct radeon_connector *VAR_4)
{
 struct radeon_connector_atom_dig *VAR_5 = VAR_4->con_priv;
 struct drm_device *VAR_6 = VAR_4->base.dev;
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 int VAR_8;
 u8 VAR_9[1];

 if (!VAR_3)
  return 0;

 if (!FUNC_0(VAR_7))
  return 0;

 if (VAR_5->dpcd[VAR_0] < 0x12)
  return 0;

 VAR_8 = FUNC_2(&VAR_4->ddc_bus->aux, VAR_1, VAR_9,
          1);
 if (VAR_8) {
  if (VAR_9[0] & VAR_2) {
   FUNC_1("Sink is MST capable\n");
   VAR_5->is_mst = 1;
  } else {
   FUNC_1("Sink is not MST capable\n");
   VAR_5->is_mst = 0;
  }

 }
 FUNC_3(&VAR_4->mst_mgr,
     VAR_5->is_mst);
 return VAR_5->is_mst;
}
