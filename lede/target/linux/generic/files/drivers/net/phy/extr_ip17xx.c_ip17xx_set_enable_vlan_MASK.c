
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ip17xx_state {int vlan_enabled; TYPE_2__* regs; } ;
struct TYPE_4__ {int (* set_vlan_mode ) (struct ip17xx_state*) ;} ;


 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (struct ip17xx_state*) ;
 int FUNC_2 (struct ip17xx_state*) ;

__attribute__((used)) static int FUNC_3(struct switch_dev *VAR_0, const struct switch_attr *VAR_1, struct switch_val *VAR_2)
{
 struct ip17xx_state *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = VAR_2->value.i;
 if (VAR_3->vlan_enabled == VAR_4) {

  return 0;
 }
 VAR_3->vlan_enabled = VAR_4;


 FUNC_1(VAR_3);

 return VAR_3->regs->set_vlan_mode(VAR_3);
}
