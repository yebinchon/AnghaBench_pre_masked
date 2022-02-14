
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_val {scalar_t__ port_vlan; } ;
struct switch_dev {scalar_t__ vlans; TYPE_1__* ops; } ;
struct switch_attr {int dummy; } ;
struct TYPE_2__ {int (* get_vlan_ports ) (struct switch_dev*,struct switch_val*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct switch_dev*,struct switch_val*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2, const struct switch_attr *VAR_3,
   struct switch_val *VAR_4)
{
 int VAR_5;
 if (VAR_4->port_vlan >= VAR_2->vlans)
  return -VAR_0;

 if (!VAR_2->ops->get_vlan_ports)
  return -VAR_1;

 VAR_5 = VAR_2->ops->get_vlan_ports(VAR_2, VAR_4);
 return VAR_5;
}
