
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radeon_connector_atom_dig {scalar_t__* dpcd; } ;
struct radeon_connector {TYPE_1__* ddc_bus; struct radeon_connector_atom_dig* con_priv; } ;
struct TYPE_2__ {int aux; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__*) ;
 int FUNC_1 (int *,int ,int *,int) ;
 int FUNC_2 (scalar_t__*,int *,int) ;
 int FUNC_3 (struct radeon_connector*) ;

bool FUNC_4(struct radeon_connector *VAR_2)
{
 struct radeon_connector_atom_dig *VAR_3 = VAR_2->con_priv;
 u8 VAR_4[VAR_1];
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_2->ddc_bus->aux, VAR_0, VAR_4,
          VAR_1);
 if (VAR_5 == VAR_1) {
  FUNC_2(VAR_3->dpcd, VAR_4, VAR_1);

  FUNC_0("DPCD: %*ph\n", (int)sizeof(VAR_3->dpcd),
         VAR_3->dpcd);

  FUNC_3(VAR_2);

  return 1;
 }

 VAR_3->dpcd[0] = 0;
 return 0;
}
