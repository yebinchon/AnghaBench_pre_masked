
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_bank {int dbck_enabled; int dbck; TYPE_1__* regs; scalar_t__ base; scalar_t__ dbck_enable_mask; } ;
struct TYPE_2__ {scalar_t__ debounce_en; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct gpio_bank *VAR_0)
{
 if (VAR_0->dbck_enable_mask && VAR_0->dbck_enabled) {





  FUNC_1(0, VAR_0->base + VAR_0->regs->debounce_en);

  FUNC_0(VAR_0->dbck);
  VAR_0->dbck_enabled = 0;
 }
}
