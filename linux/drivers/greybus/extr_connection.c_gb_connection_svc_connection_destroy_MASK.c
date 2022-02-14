
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gb_connection {int intf_cport_id; TYPE_2__* intf; int hd_cport_id; TYPE_1__* hd; } ;
struct TYPE_6__ {int ap_intf_id; } ;
struct TYPE_5__ {int interface_id; } ;
struct TYPE_4__ {TYPE_3__* svc; } ;


 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct gb_connection *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;

 FUNC_1(VAR_0->hd->svc,
      VAR_0->hd->svc->ap_intf_id,
      VAR_0->hd_cport_id,
      VAR_0->intf->interface_id,
      VAR_0->intf_cport_id);
}
