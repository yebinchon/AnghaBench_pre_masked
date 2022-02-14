
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int link; } ;
struct switch_val {TYPE_2__ value; int port_vlan; } ;
struct switch_dev {TYPE_1__* ops; } ;
struct switch_attr {int dummy; } ;
struct TYPE_3__ {int (* set_port_link ) (struct switch_dev*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct switch_dev*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_1, const struct switch_attr *VAR_2,
   struct switch_val *VAR_3)
{
 if (!VAR_1->ops->set_port_link)
  return -VAR_0;

 return VAR_1->ops->set_port_link(VAR_1, VAR_3->port_vlan, VAR_3->value.link);
}
