
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct cc10001_adc_device {unsigned int eoc_delay_ns; int shared; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct iio_dev*,int ,unsigned int) ;
 int FUNC_1 (struct cc10001_adc_device*) ;
 int FUNC_2 (struct cc10001_adc_device*) ;
 int FUNC_3 (struct cc10001_adc_device*,int ) ;
 struct cc10001_adc_device* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static u16 FUNC_5(struct iio_dev *VAR_1,
     struct iio_chan_spec const *VAR_2)
{
 struct cc10001_adc_device *VAR_3 = FUNC_4(VAR_1);
 unsigned int VAR_4;
 u16 VAR_5;

 if (!VAR_3->shared)
  FUNC_2(VAR_3);


 VAR_4 = VAR_3->eoc_delay_ns / VAR_0;

 FUNC_3(VAR_3, VAR_2->channel);

 VAR_5 = FUNC_0(VAR_1, VAR_2->channel, VAR_4);

 if (!VAR_3->shared)
  FUNC_1(VAR_3);

 return VAR_5;
}
