
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radeon_connector_atom_dig {int is_mst; } ;
struct radeon_connector {int mst_mgr; TYPE_1__* ddc_bus; struct radeon_connector_atom_dig* con_priv; } ;
struct TYPE_2__ {int aux; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,scalar_t__,int *,int) ;
 int FUNC_2 (int *,scalar_t__,int *,int) ;
 int FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int *,int) ;

int
FUNC_5(struct radeon_connector *VAR_2)
{
 struct radeon_connector_atom_dig *VAR_3 = VAR_2->con_priv;
 int VAR_4;

 if (VAR_3->is_mst) {
  u8 VAR_5[16] = { 0 };
  int VAR_6;
  int VAR_7 = 0;
  bool VAR_8;

  VAR_6 = FUNC_1(&VAR_2->ddc_bus->aux,
           VAR_0, VAR_5, 8);
go_again:
  if (VAR_6 == 8) {
   FUNC_0("got esi %3ph\n", VAR_5);
   VAR_7 = FUNC_3(&VAR_2->mst_mgr, VAR_5, &VAR_8);

   if (VAR_8) {
    for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
     int VAR_9;
     VAR_9 = FUNC_2(&VAR_2->ddc_bus->aux,
         VAR_0 + 1, &VAR_5[1], 3);
     if (VAR_9 == 3)
      break;
    }

    VAR_6 = FUNC_1(&VAR_2->ddc_bus->aux,
       VAR_0, VAR_5, 8);
    if (VAR_6 == 8) {
     FUNC_0("got esi2 %3ph\n", VAR_5);
     goto go_again;
    }
   } else
    VAR_7 = 0;

   return VAR_7;
  } else {
   FUNC_0("failed to get ESI - device may have failed %d\n", VAR_7);
   VAR_3->is_mst = 0;
   FUNC_4(&VAR_2->mst_mgr,
       VAR_3->is_mst);

  }
 }
 return -VAR_1;
}
