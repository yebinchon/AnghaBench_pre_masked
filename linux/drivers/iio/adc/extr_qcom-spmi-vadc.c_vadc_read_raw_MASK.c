
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct vadc_priv {struct vadc_channel_prop* chan_props; int * graph; } ;
struct vadc_channel_prop {size_t calibration; size_t prescale; int scale_fn_type; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; } ;


 int VAR_0 ;


 int VAR_1 ;
 size_t VAR_2 ;
 struct vadc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int *,int *,int,scalar_t__,int*) ;
 int FUNC_2 (struct vadc_priv*,struct vadc_channel_prop*,scalar_t__*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5, int *VAR_6, int *VAR_7,
    long VAR_8)
{
 struct vadc_priv *VAR_9 = FUNC_0(VAR_4);
 struct vadc_channel_prop *VAR_10;
 u16 VAR_11;
 int VAR_12;

 switch (VAR_8) {
 case 129:
  VAR_10 = &VAR_9->chan_props[VAR_5->address];
  VAR_12 = FUNC_2(VAR_9, VAR_10, &VAR_11);
  if (VAR_12)
   break;

  VAR_12 = FUNC_1(VAR_10->scale_fn_type,
    &VAR_9->graph[VAR_10->calibration],
    &VAR_3[VAR_10->prescale],
    (VAR_10->calibration == VAR_2),
    VAR_11, VAR_6);
  if (VAR_12)
   break;

  return VAR_1;
 case 128:
  VAR_10 = &VAR_9->chan_props[VAR_5->address];
  VAR_12 = FUNC_2(VAR_9, VAR_10, &VAR_11);
  if (VAR_12)
   break;

  *VAR_6 = (int)VAR_11;
  return VAR_1;
 default:
  VAR_12 = -VAR_0;
  break;
 }

 return VAR_12;
}
