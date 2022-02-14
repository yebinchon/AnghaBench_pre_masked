
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i; } ;
struct switch_val {TYPE_1__ value; int port_vlan; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int max; } ;
struct rtl8366_vlan_4k {int untag; int member; } ;
struct rtl8366_smi {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* get_vlan_4k ) (struct rtl8366_smi*,int ,struct rtl8366_vlan_4k*) ;int (* is_vlan_valid ) (struct rtl8366_smi*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtl8366_smi*,int ) ;
 int FUNC_2 (struct rtl8366_smi*,int ,struct rtl8366_vlan_4k*) ;
 struct rtl8366_smi* FUNC_3 (struct switch_dev*) ;

int FUNC_4(struct switch_dev *VAR_1,
       const struct switch_attr *VAR_2,
       struct switch_val *VAR_3)
{
 struct rtl8366_vlan_4k VAR_4;
 struct rtl8366_smi *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;

 if (!VAR_5->ops->is_vlan_valid(VAR_5, VAR_3->port_vlan))
  return -VAR_0;

 if (VAR_3->value.i < 0 || VAR_3->value.i > VAR_2->max)
  return -VAR_0;

 VAR_6 = VAR_5->ops->get_vlan_4k(VAR_5, VAR_3->port_vlan, &VAR_4);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_5, VAR_3->port_vlan,
    VAR_4.member,
    VAR_4.untag,
    VAR_3->value.i);
}
