
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gpio_bank {scalar_t__ base; TYPE_1__* regs; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct gpio_bank *VAR_1)
{
 static bool VAR_2;
 u32 VAR_3;

 if (VAR_2 || VAR_1->regs->revision == VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_1->base + VAR_1->regs->revision);
 FUNC_0("OMAP GPIO hardware version %d.%d\n",
  (VAR_3 >> 4) & 0x0f, VAR_3 & 0x0f);

 VAR_2 = 1;
}
