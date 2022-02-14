
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; int len; TYPE_1__ value; } ;
struct switch_port {int flags; int id; } ;
struct switch_dev {int dummy; } ;
struct ar7240sw {int* vlan_table; int vlan_tagged; size_t* pvid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ar7240sw* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct ar7240sw *VAR_4 = FUNC_0(VAR_2);
 u8 *VAR_5 = &VAR_4->vlan_table[VAR_3->port_vlan];
 int VAR_6, VAR_7;

 *VAR_5 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3->len; VAR_6++) {
  struct switch_port *VAR_8 = &VAR_3->value.ports[VAR_6];

  if (VAR_8->flags & (1 << VAR_1))
   VAR_4->vlan_tagged |= (1 << VAR_8->id);
  else {
   VAR_4->vlan_tagged &= ~(1 << VAR_8->id);
   VAR_4->pvid[VAR_8->id] = VAR_3->port_vlan;



   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    if (VAR_7 == VAR_3->port_vlan)
     continue;
    VAR_4->vlan_table[VAR_7] &= ~(1 << VAR_8->id);
   }
  }

  *VAR_5 |= 1 << VAR_8->id;
 }
 return 0;
}
