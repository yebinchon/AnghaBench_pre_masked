
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; int channel; } ;
struct cpcap_adc_request {int result; } ;
struct cpcap_adc {int dev; int lock; int vendor; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct cpcap_adc_request*,int ) ;
 int FUNC_1 (struct cpcap_adc*,struct cpcap_adc_request*) ;
 int FUNC_2 (struct cpcap_adc*,int ,int*) ;
 int FUNC_3 (struct cpcap_adc*,struct cpcap_adc_request*) ;
 int FUNC_4 (struct cpcap_adc*) ;
 int FUNC_5 (int ,char*,int) ;
 struct cpcap_adc* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_4,
     struct iio_chan_spec const *VAR_5,
     int *VAR_6, int *VAR_7, long VAR_8)
{
 struct cpcap_adc *VAR_9 = FUNC_6(VAR_4);
 struct cpcap_adc_request VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(&VAR_10, VAR_5->channel);
 if (VAR_11)
  return VAR_11;

 switch (VAR_8) {
 case 128:
  FUNC_7(&VAR_9->lock);
  VAR_11 = FUNC_3(VAR_9, &VAR_10);
  if (VAR_11)
   goto err_unlock;
  VAR_11 = FUNC_9(VAR_9->reg, VAR_5->address, VAR_6);
  if (VAR_11)
   goto err_unlock;
  VAR_11 = FUNC_4(VAR_9);
  if (VAR_11)
   goto err_unlock;
  FUNC_8(&VAR_9->lock);
  break;
 case 129:
  FUNC_7(&VAR_9->lock);
  VAR_11 = FUNC_3(VAR_9, &VAR_10);
  if (VAR_11)
   goto err_unlock;
  if ((VAR_9->vendor == VAR_1) &&
      (VAR_5->channel == VAR_0)) {
   VAR_11 = FUNC_2(VAR_9,
          VAR_5->address,
          &VAR_10.result);
   if (VAR_11)
    goto err_unlock;
  } else {
   VAR_11 = FUNC_1(VAR_9, &VAR_10);
   if (VAR_11)
    goto err_unlock;
  }
  VAR_11 = FUNC_4(VAR_9);
  if (VAR_11)
   goto err_unlock;
  FUNC_8(&VAR_9->lock);
  *VAR_6 = VAR_10.result;
  break;
 default:
  return -VAR_2;
 }

 return VAR_3;

err_unlock:
 FUNC_8(&VAR_9->lock);
 FUNC_5(VAR_9->dev, "error reading ADC: %i\n", VAR_11);

 return VAR_11;
}
