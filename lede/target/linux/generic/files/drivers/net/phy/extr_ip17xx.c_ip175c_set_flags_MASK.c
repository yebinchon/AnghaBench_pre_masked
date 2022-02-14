
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip17xx_state {int num_vlans; TYPE_1__* regs; scalar_t__ vlan_enabled; scalar_t__ router_mode; } ;
struct TYPE_2__ {int ROUTER_EN_BIT; int TAG_VLAN_BIT; int NUMLAN_GROUPS_BIT; int NUMLAN_GROUPS_MAX; int ROUTER_CONTROL_REG; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ip17xx_state*,int ) ;
 int FUNC_2 (struct ip17xx_state*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ip17xx_state *VAR_0)
{
 int VAR_1;

 if (!FUNC_0(VAR_0->regs->ROUTER_CONTROL_REG)) {
  return 0;
 }

 VAR_1 = FUNC_1(VAR_0, VAR_0->regs->ROUTER_CONTROL_REG);
 if (VAR_1 < 0) {
  return VAR_1;
 }
 if (VAR_0->regs->ROUTER_EN_BIT >= 0) {
  if (VAR_0->router_mode) {
   VAR_1 |= (1<<VAR_0->regs->ROUTER_EN_BIT);
  } else {
   VAR_1 &= (~(1<<VAR_0->regs->ROUTER_EN_BIT));
  }
 }
 if (VAR_0->regs->TAG_VLAN_BIT >= 0) {
  if (VAR_0->vlan_enabled) {
   VAR_1 |= (1<<VAR_0->regs->TAG_VLAN_BIT);
  } else {
   VAR_1 &= (~(1<<VAR_0->regs->TAG_VLAN_BIT));
  }
 }
 if (VAR_0->regs->NUMLAN_GROUPS_BIT >= 0) {
  VAR_1 &= (~((VAR_0->regs->NUMLAN_GROUPS_MAX-1)<<VAR_0->regs->NUMLAN_GROUPS_BIT));
  if (VAR_0->num_vlans > VAR_0->regs->NUMLAN_GROUPS_MAX) {
   VAR_1 |= VAR_0->regs->NUMLAN_GROUPS_MAX << VAR_0->regs->NUMLAN_GROUPS_BIT;
  } else if (VAR_0->num_vlans >= 1) {
   VAR_1 |= (VAR_0->num_vlans-1) << VAR_0->regs->NUMLAN_GROUPS_BIT;
  }
 }
 return FUNC_2(VAR_0, VAR_0->regs->ROUTER_CONTROL_REG, VAR_1);
}
