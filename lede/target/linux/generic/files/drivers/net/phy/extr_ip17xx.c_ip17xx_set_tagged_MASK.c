
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ip17xx_state {int add_tag; int remove_tag; TYPE_2__* regs; } ;
struct TYPE_4__ {int (* update_state ) (struct ip17xx_state*) ;} ;


 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (struct ip17xx_state*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_0, const struct switch_attr *VAR_1, struct switch_val *VAR_2)
{
 struct ip17xx_state *VAR_3 = FUNC_0(VAR_0);

 VAR_3->add_tag &= ~(1<<VAR_2->port_vlan);
 VAR_3->remove_tag &= ~(1<<VAR_2->port_vlan);

 if (VAR_2->value.i == 0)
  VAR_3->remove_tag |= (1<<VAR_2->port_vlan);
 if (VAR_2->value.i == 1)
  VAR_3->add_tag |= (1<<VAR_2->port_vlan);

 return VAR_3->regs->update_state(VAR_3);
}
