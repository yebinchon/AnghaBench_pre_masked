
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; int len; TYPE_1__ value; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int dummy; } ;
struct adm6996_priv {int* vlan_table; int* vlan_tagged; int tagged_ports; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,size_t) ;
 struct adm6996_priv* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_3(struct switch_dev *VAR_1, struct switch_val *VAR_2)
{
 struct adm6996_priv *VAR_3 = FUNC_2(VAR_1);
 u8 *VAR_4 = &VAR_3->vlan_table[VAR_2->port_vlan];
 u8 *VAR_5 = &VAR_3->vlan_tagged[VAR_2->port_vlan];
 int VAR_6;

 FUNC_1("set_ports port_vlan %d ports", VAR_2->port_vlan);

 *VAR_4 = 0;
 *VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2->len; VAR_6++) {
  struct switch_port *VAR_7 = &VAR_2->value.ports[VAR_6];







  if (VAR_7->flags & (1 << VAR_0)) {
   *VAR_5 |= (1 << VAR_7->id);
   VAR_3->tagged_ports |= (1 << VAR_7->id);
  }

  *VAR_4 |= (1 << VAR_7->id);
 }





 return 0;
}
