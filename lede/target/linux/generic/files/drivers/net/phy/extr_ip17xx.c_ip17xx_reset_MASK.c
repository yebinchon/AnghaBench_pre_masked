
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct ip17xx_state {TYPE_1__* regs; scalar_t__ vlan_enabled; scalar_t__ router_mode; } ;
struct TYPE_2__ {int NUM_PORTS; int (* reset ) (struct ip17xx_state*) ;int RESET_REG; int RESET_VAL; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ip17xx_state*,int ) ;
 struct ip17xx_state* FUNC_2 (struct switch_dev*) ;
 int FUNC_3 (struct ip17xx_state*) ;
 int FUNC_4 (struct ip17xx_state*,int,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ip17xx_state*,int ,int ) ;
 int FUNC_7 (struct ip17xx_state*) ;

__attribute__((used)) static int FUNC_8(struct switch_dev *VAR_2)
{
 struct ip17xx_state *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5;

 if (FUNC_0(VAR_3->regs->RESET_REG)) {
  VAR_5 = FUNC_6(VAR_3, VAR_3->regs->RESET_REG, VAR_3->regs->RESET_VAL);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_5 = FUNC_1(VAR_3, VAR_3->regs->RESET_REG);






  FUNC_5(2);
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->regs->NUM_PORTS-1; VAR_4++) {
  VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_1, VAR_0);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_3->router_mode = 0;
 VAR_3->vlan_enabled = 0;
 FUNC_3(VAR_3);

 return VAR_3->regs->reset(VAR_3);
}
