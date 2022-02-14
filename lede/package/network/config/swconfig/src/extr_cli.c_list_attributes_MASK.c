
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {char* dev_name; char* alias; char* name; int ports; int cpu_port; int vlans; int port_ops; int vlan_ops; int ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct switch_dev *VAR_0)
{
 FUNC_1("%s: %s(%s), ports: %d (cpu @ %d), vlans: %d\n", VAR_0->dev_name, VAR_0->alias, VAR_0->name, VAR_0->ports, VAR_0->cpu_port, VAR_0->vlans);
 FUNC_1("     --switch\n");
 FUNC_0(VAR_0->ops);
 FUNC_1("     --vlan\n");
 FUNC_0(VAR_0->vlan_ops);
 FUNC_1("     --port\n");
 FUNC_0(VAR_0->port_ops);
}
