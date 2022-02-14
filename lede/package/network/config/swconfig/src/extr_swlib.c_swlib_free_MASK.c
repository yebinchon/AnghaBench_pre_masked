
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {struct switch_dev* alias; struct switch_dev* name; int vlan_ops; int port_ops; int ops; } ;


 int FUNC_0 (struct switch_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct switch_dev*) ;
 int FUNC_3 () ;

void
FUNC_4(struct switch_dev *VAR_1)
{
 FUNC_1(&VAR_1->ops);
 FUNC_1(&VAR_1->port_ops);
 FUNC_1(&VAR_1->vlan_ops);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->name);
 FUNC_0(VAR_1->alias);
 FUNC_0(VAR_1);

 if (--VAR_0 == 0)
  FUNC_3();
}
