
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_madc_request {int active; int raw; int do_avg; int* rbuf; int type; int channels; int method; } ;
struct twl4030_madc_data {scalar_t__ use_second_irq; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;


 int FUNC_0 (size_t) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct twl4030_madc_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct twl4030_madc_request*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
        const struct iio_chan_spec *VAR_7,
        int *VAR_8, int *VAR_9, long VAR_10)
{
 struct twl4030_madc_data *VAR_11 = FUNC_1(VAR_6);
 struct twl4030_madc_request VAR_12;
 int VAR_13;

 VAR_12.method = VAR_11->use_second_irq ? VAR_4 : VAR_3;

 VAR_12.channels = FUNC_0(VAR_7->channel);
 VAR_12.active = 0;
 VAR_12.type = VAR_5;
 VAR_12.raw = !(VAR_10 == VAR_1);
 VAR_12.do_avg = (VAR_10 == VAR_0);

 VAR_13 = FUNC_2(&VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 *VAR_8 = VAR_12.rbuf[VAR_7->channel];

 return VAR_2;
}
