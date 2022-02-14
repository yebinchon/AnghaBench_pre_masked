
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; scalar_t__ len; TYPE_1__ value; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int dummy; } ;
struct psb6970_priv {int* vlan_table; int vlan_tagged; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct psb6970_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct psb6970_priv *VAR_4 = FUNC_0(VAR_2);
 u8 VAR_5 = VAR_4->vlan_table[VAR_3->port_vlan];
 int VAR_6;

 VAR_3->len = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct switch_port *VAR_7;

  if (!(VAR_5 & (1 << VAR_6)))
   continue;

  VAR_7 = &VAR_3->value.ports[VAR_3->len++];
  VAR_7->id = VAR_6;
  if (VAR_4->vlan_tagged & (1 << VAR_6))
   VAR_7->flags = (1 << VAR_1);
  else
   VAR_7->flags = 0;
 }
 return 0;
}
