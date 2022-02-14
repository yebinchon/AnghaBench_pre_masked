
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev_ops {int attr_port; scalar_t__ get_port_link; scalar_t__ set_port_pvid; scalar_t__ get_port_pvid; scalar_t__ set_vlan_ports; scalar_t__ get_vlan_ports; } ;
struct switch_dev {scalar_t__ def_global; scalar_t__ def_port; scalar_t__ def_vlan; struct switch_dev_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct switch_dev *VAR_5)
{
 const struct switch_dev_ops *VAR_6 = VAR_5->ops;

 VAR_5->def_global = 0;
 VAR_5->def_vlan = 0;
 VAR_5->def_port = 0;

 if (VAR_6->get_vlan_ports || VAR_6->set_vlan_ports)
  FUNC_0(VAR_4, &VAR_5->def_vlan);

 if (VAR_6->get_port_pvid || VAR_6->set_port_pvid)
  FUNC_0(VAR_3, &VAR_5->def_port);

 if (VAR_6->get_port_link &&
     !FUNC_1(&VAR_6->attr_port, "link"))
  FUNC_0(VAR_2, &VAR_5->def_port);


 FUNC_0(VAR_0, &VAR_5->def_global);
 FUNC_0(VAR_1, &VAR_5->def_global);
}
