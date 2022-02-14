
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_trigger {int dummy; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ dma_chan; } ;
struct at91_adc_state {int irq; TYPE_1__ dma_st; } ;


 int VAR_0 ;
 int FUNC_0 (struct at91_adc_state*,int ) ;
 int FUNC_1 (int ) ;
 struct at91_adc_state* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct iio_trigger*) ;

__attribute__((used)) static int FUNC_4(struct iio_trigger *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_3(VAR_1);
 struct at91_adc_state *VAR_3 = FUNC_2(VAR_2);


 if (VAR_3->dma_st.dma_chan)
  return 0;

 FUNC_1(VAR_3->irq);


 FUNC_0(VAR_3, VAR_0);
 return 0;
}
