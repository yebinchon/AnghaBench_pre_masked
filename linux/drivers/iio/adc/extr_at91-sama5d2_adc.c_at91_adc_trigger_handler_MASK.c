
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct TYPE_2__ {scalar_t__ dma_chan; } ;
struct at91_adc_state {TYPE_1__ dma_st; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,struct iio_poll_func*) ;
 struct at91_adc_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct at91_adc_state *VAR_5 = FUNC_2(VAR_4);

 if (VAR_5->dma_st.dma_chan)
  FUNC_0(VAR_4);
 else
  FUNC_1(VAR_4, VAR_3);

 FUNC_3(VAR_4->trig);

 return VAR_0;
}
