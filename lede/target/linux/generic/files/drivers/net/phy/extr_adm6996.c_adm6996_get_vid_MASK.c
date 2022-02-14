
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {size_t port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct adm6996_priv {int * vlan_id; } ;


 int FUNC_0 (char*,size_t) ;
 struct adm6996_priv* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_0, const struct switch_attr *VAR_1,
  struct switch_val *VAR_2)
{
 struct adm6996_priv *VAR_3 = FUNC_1(VAR_0);

 FUNC_0("get_vid port %d\n", VAR_2->port_vlan);

 VAR_2->value.i = VAR_3->vlan_id[VAR_2->port_vlan];

 return 0;
}
