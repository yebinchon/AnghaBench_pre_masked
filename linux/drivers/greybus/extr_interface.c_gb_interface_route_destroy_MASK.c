
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_svc {int device_id_map; int ap_intf_id; } ;
struct gb_interface {int device_id; int interface_id; TYPE_1__* hd; } ;
struct TYPE_2__ {struct gb_svc* svc; } ;


 int VAR_0 ;
 int FUNC_0 (struct gb_svc*,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct gb_interface *VAR_1)
{
 struct gb_svc *VAR_2 = VAR_1->hd->svc;

 if (VAR_1->device_id == VAR_0)
  return;

 FUNC_0(VAR_2, VAR_2->ap_intf_id, VAR_1->interface_id);
 FUNC_1(&VAR_2->device_id_map, VAR_1->device_id);
 VAR_1->device_id = VAR_0;
}
