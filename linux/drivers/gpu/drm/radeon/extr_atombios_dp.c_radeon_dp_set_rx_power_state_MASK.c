
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radeon_connector_atom_dig {int* dpcd; } ;
struct radeon_connector {TYPE_1__* ddc_bus; struct radeon_connector_atom_dig* con_priv; } ;
struct drm_connector {int dummy; } ;
struct TYPE_2__ {int aux; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int,int) ;

void FUNC_3(struct drm_connector *VAR_1,
      u8 VAR_2)
{
 struct radeon_connector *VAR_3 = FUNC_1(VAR_1);
 struct radeon_connector_atom_dig *VAR_4;

 if (!VAR_3->con_priv)
  return;

 VAR_4 = VAR_3->con_priv;


 if (VAR_4->dpcd[0] >= 0x11) {
  FUNC_0(&VAR_3->ddc_bus->aux,
       VAR_0, VAR_2);
  FUNC_2(1000, 2000);
 }
}
