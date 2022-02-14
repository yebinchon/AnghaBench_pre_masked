
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mask; int reg; } ;
struct stm32_adc_regspec {int dr; TYPE_2__ isr_eoc; } ;
struct stm32_adc {size_t bufi; size_t num_conv; int completion; int * buffer; TYPE_1__* cfg; } ;
struct iio_dev {int trig; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct stm32_adc_regspec* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct stm32_adc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct stm32_adc*) ;
 int FUNC_5 (struct stm32_adc*,int ) ;
 int FUNC_6 (struct stm32_adc*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct stm32_adc *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = FUNC_2(VAR_4);
 const struct stm32_adc_regspec *VAR_6 = VAR_4->cfg->regs;
 u32 VAR_7 = FUNC_5(VAR_4, VAR_6->isr_eoc.reg);

 if (VAR_7 & VAR_6->isr_eoc.mask) {

  VAR_4->buffer[VAR_4->bufi] = FUNC_6(VAR_4, VAR_6->dr);
  if (FUNC_1(VAR_5)) {
   VAR_4->bufi++;
   if (VAR_4->bufi >= VAR_4->num_conv) {
    FUNC_4(VAR_4);
    FUNC_3(VAR_5->trig);
   }
  } else {
   FUNC_0(&VAR_4->completion);
  }
  return VAR_0;
 }

 return VAR_1;
}
