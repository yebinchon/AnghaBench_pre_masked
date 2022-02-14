
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_connector_atom_dig {scalar_t__* dpcd; } ;
struct amdgpu_connector {TYPE_1__* ddc_bus; struct amdgpu_connector_atom_dig* con_priv; } ;
struct TYPE_2__ {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_connector*) ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (scalar_t__*,int *,int) ;

int FUNC_4(struct amdgpu_connector *VAR_3)
{
 struct amdgpu_connector_atom_dig *VAR_4 = VAR_3->con_priv;
 u8 VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_3->ddc_bus->aux, VAR_0,
          VAR_5, VAR_1);
 if (VAR_6 == VAR_1) {
  FUNC_3(VAR_4->dpcd, VAR_5, VAR_1);

  FUNC_0("DPCD: %*ph\n", (int)sizeof(VAR_4->dpcd),
         VAR_4->dpcd);

  FUNC_1(VAR_3);

  return 0;
 }

 VAR_4->dpcd[0] = 0;
 return -VAR_2;
}
