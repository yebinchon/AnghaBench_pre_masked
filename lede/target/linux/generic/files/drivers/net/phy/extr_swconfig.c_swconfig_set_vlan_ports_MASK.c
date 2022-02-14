
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {scalar_t__ len; int port_vlan; TYPE_1__ value; } ;
struct switch_port {scalar_t__ id; int flags; } ;
struct switch_dev_ops {int (* set_vlan_ports ) (struct switch_dev*,struct switch_val*) ;int (* set_port_pvid ) (struct switch_dev*,scalar_t__,int ) ;} ;
struct switch_dev {scalar_t__ ports; int vlans; struct switch_dev_ops* ops; } ;
struct switch_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct switch_dev*,scalar_t__,int ) ;
 int FUNC_1 (struct switch_dev*,struct switch_val*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_3, const struct switch_attr *VAR_4,
   struct switch_val *VAR_5)
{
 struct switch_port *VAR_6 = VAR_5->value.ports;
 const struct switch_dev_ops *VAR_7 = VAR_3->ops;
 int VAR_8;

 if (VAR_5->port_vlan >= VAR_3->vlans)
  return -VAR_0;


 if (VAR_5->len > VAR_3->ports)
  return -VAR_0;

 if (!VAR_7->set_vlan_ports)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_5->len; VAR_8++) {
  if (VAR_6[VAR_8].id >= VAR_3->ports)
   return -VAR_0;

  if (VAR_7->set_port_pvid &&
      !(VAR_6[VAR_8].flags & (1 << VAR_2)))
   VAR_7->set_port_pvid(VAR_3, VAR_6[VAR_8].id, VAR_5->port_vlan);
 }

 return VAR_7->set_vlan_ports(VAR_3, VAR_5);
}
