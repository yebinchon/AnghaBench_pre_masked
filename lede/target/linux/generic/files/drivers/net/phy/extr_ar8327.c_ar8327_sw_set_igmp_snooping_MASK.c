
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int port_vlan; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int dummy; } ;


 scalar_t__ FUNC_0 (struct switch_dev*,struct switch_attr const*,struct switch_val*) ;

int
FUNC_1(struct switch_dev *VAR_0,
       const struct switch_attr *VAR_1,
       struct switch_val *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->ports; VAR_3++) {
  VAR_2->port_vlan = VAR_3;
  if (FUNC_0(VAR_0, VAR_1, VAR_2))
   break;
 }

 return 0;
}
