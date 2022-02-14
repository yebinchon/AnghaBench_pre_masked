
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int fallingdetect; int risingdetect; } ;
struct TYPE_4__ {struct device* parent; } ;
struct gpio_bank {int (* get_context_loss_count ) (struct device*) ;int context_loss_count; int saved_datain; int enabled_non_wakeup_gpios; TYPE_3__* regs; scalar_t__ base; TYPE_2__ context; scalar_t__ loses_context; int context_valid; TYPE_1__ chip; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ leveldetect1; scalar_t__ leveldetect0; scalar_t__ irqstatus_raw0; scalar_t__ datain; scalar_t__ risingdetect; scalar_t__ fallingdetect; } ;


 int FUNC_0 (struct gpio_bank*) ;
 int FUNC_1 (struct gpio_bank*) ;
 int FUNC_2 (struct gpio_bank*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct gpio_bank *VAR_0)
{
 struct device *VAR_1 = VAR_0->chip.parent;
 u32 VAR_2 = 0, VAR_3, VAR_4, VAR_5;
 int VAR_6;






 if (VAR_0->loses_context && !VAR_0->context_valid) {
  FUNC_1(VAR_0);

  if (VAR_0->get_context_loss_count)
   VAR_0->context_loss_count =
    VAR_0->get_context_loss_count(VAR_1);
 }

 FUNC_0(VAR_0);

 if (VAR_0->loses_context) {
  if (!VAR_0->get_context_loss_count) {
   FUNC_2(VAR_0);
  } else {
   VAR_6 = VAR_0->get_context_loss_count(VAR_1);
   if (VAR_6 != VAR_0->context_loss_count) {
    FUNC_2(VAR_0);
   } else {
    return;
   }
  }
 } else {

  FUNC_6(VAR_0->context.fallingdetect,
          VAR_0->base + VAR_0->regs->fallingdetect);
  FUNC_6(VAR_0->context.risingdetect,
          VAR_0->base + VAR_0->regs->risingdetect);
 }

 VAR_2 = FUNC_3(VAR_0->base + VAR_0->regs->datain);







 VAR_2 ^= VAR_0->saved_datain;
 VAR_2 &= VAR_0->enabled_non_wakeup_gpios;





 VAR_4 = VAR_2 & VAR_0->context.fallingdetect;
 VAR_4 &= VAR_0->saved_datain;

 VAR_5 = VAR_2 & VAR_0->context.risingdetect;
 VAR_5 &= ~(VAR_0->saved_datain);


 VAR_3 = VAR_2 & (~(VAR_0->context.fallingdetect) &
      ~(VAR_0->context.risingdetect));

 VAR_3 |= VAR_4 | VAR_5;

 if (VAR_3) {
  u32 VAR_7, VAR_8;

  VAR_7 = FUNC_3(VAR_0->base + VAR_0->regs->leveldetect0);
  VAR_8 = FUNC_3(VAR_0->base + VAR_0->regs->leveldetect1);

  if (!VAR_0->regs->irqstatus_raw0) {
   FUNC_6(VAR_7 | VAR_3, VAR_0->base +
      VAR_0->regs->leveldetect0);
   FUNC_6(VAR_8 | VAR_3, VAR_0->base +
      VAR_0->regs->leveldetect1);
  }

  if (VAR_0->regs->irqstatus_raw0) {
   FUNC_6(VAR_7 | VAR_2, VAR_0->base +
      VAR_0->regs->leveldetect0);
   FUNC_6(VAR_8 | VAR_2, VAR_0->base +
      VAR_0->regs->leveldetect1);
  }
  FUNC_6(VAR_7, VAR_0->base + VAR_0->regs->leveldetect0);
  FUNC_6(VAR_8, VAR_0->base + VAR_0->regs->leveldetect1);
 }
}
