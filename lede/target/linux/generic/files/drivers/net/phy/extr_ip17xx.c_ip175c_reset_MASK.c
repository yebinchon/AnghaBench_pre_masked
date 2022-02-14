
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip17xx_state {TYPE_1__* regs; } ;
struct TYPE_2__ {int MODE_REG; int MODE_VAL; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ip17xx_state*,int ) ;
 int FUNC_2 (struct ip17xx_state*) ;
 int FUNC_3 (struct ip17xx_state*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ip17xx_state *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0->regs->MODE_REG)) {
  VAR_1 = FUNC_3(VAR_0, VAR_0->regs->MODE_REG, VAR_0->regs->MODE_VAL);
  if (VAR_1 < 0)
   return VAR_1;
  VAR_1 = FUNC_1(VAR_0, VAR_0->regs->MODE_REG);
  if (VAR_1 < 0)
   return VAR_1;
 }

 return FUNC_2(VAR_0);
}
