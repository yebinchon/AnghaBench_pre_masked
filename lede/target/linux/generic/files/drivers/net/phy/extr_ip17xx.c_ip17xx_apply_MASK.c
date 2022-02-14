
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct ip17xx_state {TYPE_1__* regs; } ;
struct TYPE_2__ {int MII_REGISTER_EN_BIT; int MII_REGISTER_EN; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ip17xx_state*,int ) ;
 struct ip17xx_state* FUNC_2 (struct switch_dev*) ;
 int FUNC_3 (struct ip17xx_state*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct switch_dev *VAR_0)
{
 struct ip17xx_state *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_1->regs->MII_REGISTER_EN)) {
  int VAR_2 = FUNC_1(VAR_1, VAR_1->regs->MII_REGISTER_EN);
  if (VAR_2 < 0) {
   return VAR_2;
  }
  VAR_2 |= (1<<VAR_1->regs->MII_REGISTER_EN_BIT);
  return FUNC_3(VAR_1, VAR_1->regs->MII_REGISTER_EN, VAR_2);
 }
 return 0;
}
