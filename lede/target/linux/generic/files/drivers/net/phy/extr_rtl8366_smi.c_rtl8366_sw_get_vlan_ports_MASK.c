
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct switch_port* ports; } ;
struct switch_val {scalar_t__ len; TYPE_2__ value; int port_vlan; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int dummy; } ;
struct rtl8366_vlan_4k {int member; int untag; } ;
struct rtl8366_smi {int num_ports; TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_vlan_4k ) (struct rtl8366_smi*,int ,struct rtl8366_vlan_4k*) ;int (* is_vlan_valid ) (struct rtl8366_smi*,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl8366_smi*,int ) ;
 int FUNC_2 (struct rtl8366_smi*,int ,struct rtl8366_vlan_4k*) ;
 struct rtl8366_smi* FUNC_3 (struct switch_dev*) ;

int FUNC_4(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct rtl8366_smi *VAR_4 = FUNC_3(VAR_2);
 struct switch_port *VAR_5;
 struct rtl8366_vlan_4k VAR_6;
 int VAR_7;

 if (!VAR_4->ops->is_vlan_valid(VAR_4, VAR_3->port_vlan))
  return -VAR_0;

 VAR_4->ops->get_vlan_4k(VAR_4, VAR_3->port_vlan, &VAR_6);

 VAR_5 = &VAR_3->value.ports[0];
 VAR_3->len = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->num_ports; VAR_7++) {
  if (!(VAR_6.member & FUNC_0(VAR_7)))
   continue;

  VAR_5->id = VAR_7;
  VAR_5->flags = (VAR_6.untag & FUNC_0(VAR_7)) ?
     0 : FUNC_0(VAR_1);
  VAR_3->len++;
  VAR_5++;
 }
 return 0;
}
