
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {size_t port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int * vlan_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct ar8xxx_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2, const struct switch_attr *VAR_3,
    struct switch_val *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->port_vlan >= VAR_0)
  return -VAR_1;

 VAR_5->vlan_id[VAR_4->port_vlan] = VAR_4->value.i;
 return 0;
}
