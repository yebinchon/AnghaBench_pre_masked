
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ports; } ;
struct switch_val {size_t port_vlan; int len; TYPE_3__ value; } ;
struct switch_dev {size_t vlans; } ;
struct ip17xx_state {unsigned int add_tag; unsigned int remove_tag; TYPE_4__* regs; TYPE_1__* vlans; } ;
struct TYPE_8__ {int (* update_state ) (struct ip17xx_state*) ;} ;
struct TYPE_6__ {int id; int flags; } ;
struct TYPE_5__ {unsigned int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (struct ip17xx_state*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct ip17xx_state *VAR_4 = FUNC_0(VAR_2);
 int VAR_5;

 if (VAR_3->port_vlan >= VAR_2->vlans || VAR_3->port_vlan < 0)
  return -VAR_0;

 VAR_4->vlans[VAR_3->port_vlan].ports = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3->len; VAR_5++) {
  unsigned int VAR_6 = (1<<VAR_3->value.ports[VAR_5].id);
  VAR_4->vlans[VAR_3->port_vlan].ports |= VAR_6;
  if (VAR_3->value.ports[VAR_5].flags & (1<<VAR_1)) {
   VAR_4->add_tag |= VAR_6;
   VAR_4->remove_tag &= (~VAR_6);
  } else {
   VAR_4->add_tag &= (~VAR_6);
   VAR_4->remove_tag |= VAR_6;
  }
 }

 return VAR_4->regs->update_state(VAR_4);
}
