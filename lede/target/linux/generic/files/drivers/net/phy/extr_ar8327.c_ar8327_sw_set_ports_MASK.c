
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; int len; TYPE_1__ value; } ;
struct switch_port {int flags; size_t id; } ;
struct switch_dev {int dummy; } ;
struct ar8xxx_priv {int* vlan_table; scalar_t__* pvid; int vlan_tagged; } ;


 int VAR_0 ;
 struct ar8xxx_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_1, struct switch_val *VAR_2)
{
 struct ar8xxx_priv *VAR_3 = FUNC_0(VAR_1);
 u8 *VAR_4 = &VAR_3->vlan_table[VAR_2->port_vlan];
 int VAR_5;

 *VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->len; VAR_5++) {
  struct switch_port *VAR_6 = &VAR_2->value.ports[VAR_5];

  if (VAR_6->flags & (1 << VAR_0)) {
   if (VAR_2->port_vlan == VAR_3->pvid[VAR_6->id]) {
    VAR_3->vlan_tagged |= (1 << VAR_6->id);
   }
  } else {
   VAR_3->vlan_tagged &= ~(1 << VAR_6->id);
   VAR_3->pvid[VAR_6->id] = VAR_2->port_vlan;
  }

  *VAR_4 |= 1 << VAR_6->id;
 }
 return 0;
}
