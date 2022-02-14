
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct drm_encoder {int dummy; } ;
struct drm_connector {scalar_t__ connector_type; } ;
struct amdgpu_connector_atom_dig {int dummy; } ;
struct amdgpu_connector {TYPE_1__* ddc_bus; struct amdgpu_connector_atom_dig* con_priv; } ;
struct TYPE_2__ {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int *,int ,int*) ;
 struct amdgpu_connector* FUNC_2 (struct drm_connector*) ;

int FUNC_3(struct drm_encoder *VAR_8,
          struct drm_connector *VAR_9)
{
 struct amdgpu_connector *VAR_10 = FUNC_2(VAR_9);
 struct amdgpu_connector_atom_dig *VAR_11;
 int VAR_12 = VAR_1;
 u16 VAR_13 = FUNC_0(VAR_9);
 u8 VAR_14;

 if (!VAR_10->con_priv)
  return VAR_12;

 VAR_11 = VAR_10->con_priv;

 if (VAR_13 != VAR_5) {

  if (FUNC_1(&VAR_10->ddc_bus->aux,
          VAR_0, &VAR_14) == 1) {
   if (VAR_14 & 1)
    VAR_12 = VAR_3;
   else if ((VAR_13 == VAR_6) ||
     (VAR_13 == VAR_7))
    VAR_12 = VAR_2;
   else
    VAR_12 = VAR_1;
  }
 } else if (VAR_9->connector_type == VAR_4) {

  if (FUNC_1(&VAR_10->ddc_bus->aux,
          VAR_0, &VAR_14) == 1) {
   if (VAR_14 & 1)
    VAR_12 = VAR_3;
  }
 }

 return VAR_12;
}
