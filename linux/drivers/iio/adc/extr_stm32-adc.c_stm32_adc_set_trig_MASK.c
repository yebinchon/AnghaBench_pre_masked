
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct stm32_adc {int trigger_polarity; int lock; TYPE_4__* cfg; } ;
struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_8__ {TYPE_3__* regs; } ;
struct TYPE_6__ {int mask; int shift; int reg; } ;
struct TYPE_5__ {int mask; int shift; } ;
struct TYPE_7__ {TYPE_2__ exten; TYPE_1__ extsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct iio_dev*,struct iio_trigger*) ;
 int FUNC_4 (struct stm32_adc*,int ) ;
 int FUNC_5 (struct stm32_adc*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_2,
         struct iio_trigger *VAR_3)
{
 struct stm32_adc *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5, VAR_6 = 0, VAR_7 = VAR_1;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_3) {
  VAR_9 = FUNC_3(VAR_2, VAR_3);
  if (VAR_9 < 0)
   return VAR_9;


  VAR_6 = VAR_9;
  VAR_7 = VAR_4->trigger_polarity + VAR_0;
 }

 FUNC_1(&VAR_4->lock, VAR_8);
 VAR_5 = FUNC_4(VAR_4, VAR_4->cfg->regs->exten.reg);
 VAR_5 &= ~(VAR_4->cfg->regs->exten.mask | VAR_4->cfg->regs->extsel.mask);
 VAR_5 |= VAR_7 << VAR_4->cfg->regs->exten.shift;
 VAR_5 |= VAR_6 << VAR_4->cfg->regs->extsel.shift;
 FUNC_5(VAR_4, VAR_4->cfg->regs->exten.reg, VAR_5);
 FUNC_2(&VAR_4->lock, VAR_8);

 return 0;
}
