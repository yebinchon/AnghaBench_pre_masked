
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int mask; int reg; } ;
struct stm32_adc_regspec {TYPE_3__ exten; TYPE_2__* sqr; int * smpr; } ;
struct stm32_adc {int* smpr_val; int* buffer; TYPE_4__* cfg; int completion; scalar_t__ bufi; } ;
struct TYPE_5__ {struct device* parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct iio_chan_spec {int channel; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int (* stop_conv ) (struct stm32_adc*) ;int (* start_conv ) (struct stm32_adc*,int) ;struct stm32_adc_regspec* regs; } ;
struct TYPE_6__ {int mask; int shift; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stm32_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct stm32_adc*,int ,int) ;
 int FUNC_7 (struct stm32_adc*) ;
 int FUNC_8 (struct stm32_adc*) ;
 int FUNC_9 (struct stm32_adc*,int ) ;
 int FUNC_10 (struct stm32_adc*,int ,int) ;
 int FUNC_11 (struct stm32_adc*,int) ;
 int FUNC_12 (struct stm32_adc*) ;
 long FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(struct iio_dev *VAR_3,
     const struct iio_chan_spec *VAR_4,
     int *VAR_5)
{
 struct stm32_adc *VAR_6 = FUNC_0(VAR_3);
 struct device *VAR_7 = VAR_3->dev.parent;
 const struct stm32_adc_regspec *VAR_8 = VAR_6->cfg->regs;
 long VAR_9;
 u32 VAR_10;
 int VAR_11;

 FUNC_5(&VAR_6->completion);

 VAR_6->bufi = 0;

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11 < 0) {
  FUNC_4(VAR_7);
  return VAR_11;
 }


 FUNC_10(VAR_6, VAR_8->smpr[0], VAR_6->smpr_val[0]);
 FUNC_10(VAR_6, VAR_8->smpr[1], VAR_6->smpr_val[1]);


 VAR_10 = FUNC_9(VAR_6, VAR_8->sqr[1].reg);
 VAR_10 &= ~VAR_8->sqr[1].mask;
 VAR_10 |= VAR_4->channel << VAR_8->sqr[1].shift;
 FUNC_10(VAR_6, VAR_8->sqr[1].reg, VAR_10);


 FUNC_6(VAR_6, VAR_8->sqr[0].reg, VAR_8->sqr[0].mask);


 FUNC_6(VAR_6, VAR_8->exten.reg, VAR_8->exten.mask);

 FUNC_8(VAR_6);

 VAR_6->cfg->start_conv(VAR_6, 0);

 VAR_9 = FUNC_13(
     &VAR_6->completion, VAR_2);
 if (VAR_9 == 0) {
  VAR_11 = -VAR_0;
 } else if (VAR_9 < 0) {
  VAR_11 = VAR_9;
 } else {
  *VAR_5 = VAR_6->buffer[0];
  VAR_11 = VAR_1;
 }

 VAR_6->cfg->stop_conv(VAR_6);

 FUNC_7(VAR_6);

 FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 return VAR_11;
}
