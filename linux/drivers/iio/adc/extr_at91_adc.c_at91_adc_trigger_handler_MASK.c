
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int masklength; int trig; struct iio_chan_spec* channels; int active_scan_mask; } ;
struct iio_chan_spec {int channel; } ;
struct at91_adc_state {int irq; int * buffer; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct at91_adc_state*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct at91_adc_state*,int ) ;
 int FUNC_2 (int ) ;
 struct at91_adc_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct iio_poll_func *VAR_4 = VAR_3;
 struct iio_dev *VAR_5 = VAR_4->indio_dev;
 struct at91_adc_state *VAR_6 = FUNC_3(VAR_5);
 struct iio_chan_spec const *VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->masklength; VAR_8++) {
  if (!FUNC_6(VAR_8, VAR_5->active_scan_mask))
   continue;
  VAR_7 = VAR_5->channels + VAR_8;
  VAR_6->buffer[VAR_9] = FUNC_1(VAR_6, FUNC_0(VAR_6, VAR_7->channel));
  VAR_9++;
 }

 FUNC_4(VAR_5, VAR_6->buffer, VAR_4->timestamp);

 FUNC_5(VAR_5->trig);


 FUNC_1(VAR_6, VAR_0);

 FUNC_2(VAR_6->irq);

 return VAR_1;
}
