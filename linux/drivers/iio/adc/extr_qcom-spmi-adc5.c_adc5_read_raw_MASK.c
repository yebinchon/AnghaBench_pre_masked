
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; } ;
struct adc5_chip {int data; struct adc5_channel_prop* chan_props; } ;
struct adc5_channel_prop {size_t prescale; int scale_fn_type; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct adc5_chip*,struct adc5_channel_prop*,struct iio_chan_spec const*,int *,int *) ;
 int * VAR_2 ;
 struct adc5_chip* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int *,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_3,
    struct iio_chan_spec const *VAR_4, int *VAR_5, int *VAR_6,
    long VAR_7)
{
 struct adc5_chip *VAR_8 = FUNC_1(VAR_3);
 struct adc5_channel_prop *VAR_9;
 u16 VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = &VAR_8->chan_props[VAR_4->address];

 switch (VAR_7) {
 case 128:
  VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_4,
    &VAR_10, &VAR_11);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_2(VAR_9->scale_fn_type,
   &VAR_2[VAR_9->prescale],
   VAR_8->data,
   VAR_10, VAR_5);
  if (VAR_12)
   return VAR_12;

  return VAR_1;
 default:
  return -VAR_0;
 }

 return 0;
}
