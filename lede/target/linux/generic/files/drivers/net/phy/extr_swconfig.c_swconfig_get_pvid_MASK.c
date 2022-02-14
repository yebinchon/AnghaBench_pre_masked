
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int i; } ;
struct switch_val {scalar_t__ port_vlan; TYPE_2__ value; } ;
struct switch_dev {scalar_t__ ports; TYPE_1__* ops; } ;
struct switch_attr {int dummy; } ;
struct TYPE_3__ {int (* get_port_pvid ) (struct switch_dev*,scalar_t__,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct switch_dev*,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2, const struct switch_attr *VAR_3,
   struct switch_val *VAR_4)
{
 if (VAR_4->port_vlan >= VAR_2->ports)
  return -VAR_0;

 if (!VAR_2->ops->get_port_pvid)
  return -VAR_1;

 return VAR_2->ops->get_port_pvid(VAR_2, VAR_4->port_vlan, &VAR_4->value.i);
}
