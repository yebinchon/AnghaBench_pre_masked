
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {int* threshold; int temp_hysteresis; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct xadc* FUNC_0 (struct iio_dev*) ;
 unsigned int FUNC_1 (struct iio_chan_spec const*,int) ;

int FUNC_2(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
 enum iio_event_direction VAR_6, enum iio_event_info VAR_7,
 int *VAR_8, int *VAR_9)
{
 unsigned int VAR_10 = FUNC_1(VAR_4, VAR_6);
 struct xadc *VAR_11 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 128:
  *VAR_8 = VAR_11->threshold[VAR_10];
  break;
 case 129:
  *VAR_8 = VAR_11->temp_hysteresis;
  break;
 default:
  return -VAR_0;
 }

 *VAR_8 >>= VAR_2;

 return VAR_1;
}
