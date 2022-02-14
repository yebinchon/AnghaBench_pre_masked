
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; scalar_t__ len; TYPE_2__ value; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int dummy; } ;
struct TYPE_3__ {int ports; } ;
struct ar7240sw {int* vlan_table; int vlan_tagged; TYPE_1__ swdev; } ;


 int VAR_0 ;
 struct ar7240sw* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_1, struct switch_val *VAR_2)
{
 struct ar7240sw *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4 = VAR_3->vlan_table[VAR_2->port_vlan];
 int VAR_5;

 VAR_2->len = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->swdev.ports; VAR_5++) {
  struct switch_port *VAR_6;

  if (!(VAR_4 & (1 << VAR_5)))
   continue;

  VAR_6 = &VAR_2->value.ports[VAR_2->len++];
  VAR_6->id = VAR_5;
  if (VAR_3->vlan_tagged & (1 << VAR_5))
   VAR_6->flags = (1 << VAR_0);
  else
   VAR_6->flags = 0;
 }
 return 0;
}
