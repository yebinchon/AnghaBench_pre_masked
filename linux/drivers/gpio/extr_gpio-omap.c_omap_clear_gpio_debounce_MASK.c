
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int debounce_en; int debounce; } ;
struct gpio_bank {int dbck_enable_mask; int dbck_enabled; int dbck; TYPE_2__* regs; scalar_t__ base; TYPE_1__ context; int dbck_flag; } ;
struct TYPE_4__ {scalar_t__ debounce; scalar_t__ debounce_en; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_bank *VAR_0, unsigned VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1);

 if (!VAR_0->dbck_flag)
  return;

 if (!(VAR_0->dbck_enable_mask & VAR_2))
  return;

 VAR_0->dbck_enable_mask &= ~VAR_2;
 VAR_0->context.debounce_en &= ~VAR_2;
        FUNC_2(VAR_0->context.debounce_en,
       VAR_0->base + VAR_0->regs->debounce_en);

 if (!VAR_0->dbck_enable_mask) {
  VAR_0->context.debounce = 0;
  FUNC_2(VAR_0->context.debounce, VAR_0->base +
        VAR_0->regs->debounce);
  FUNC_1(VAR_0->dbck);
  VAR_0->dbck_enabled = 0;
 }
}
