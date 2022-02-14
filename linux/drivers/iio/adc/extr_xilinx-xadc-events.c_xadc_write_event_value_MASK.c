
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xadc {int* threshold; int temp_hysteresis; int mutex; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (struct xadc*,int ,int) ;
 struct xadc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (struct iio_chan_spec const*,int) ;

int FUNC_6(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
 enum iio_event_direction VAR_6, enum iio_event_info VAR_7,
 int VAR_8, int VAR_9)
{
 unsigned int VAR_10 = FUNC_5(VAR_4, VAR_6);
 struct xadc *VAR_11 = FUNC_2(VAR_3);
 int VAR_12 = 0;

 VAR_8 <<= VAR_2;

 if (VAR_8 < 0 || VAR_8 > 0xffff)
  return -VAR_0;

 FUNC_3(&VAR_11->mutex);

 switch (VAR_7) {
 case 128:
  VAR_11->threshold[VAR_10] = VAR_8;
  break;
 case 129:
  VAR_11->temp_hysteresis = VAR_8;
  break;
 default:
  FUNC_4(&VAR_11->mutex);
  return -VAR_0;
 }

 if (VAR_4->type == VAR_1) {





  VAR_8 |= 0x3;







  if (VAR_11->threshold[VAR_10] < VAR_11->temp_hysteresis)
   VAR_11->threshold[VAR_10 + 4] = 0;
  else
   VAR_11->threshold[VAR_10 + 4] = VAR_11->threshold[VAR_10] -
     VAR_11->temp_hysteresis;
  VAR_12 = FUNC_1(VAR_11, FUNC_0(VAR_10 + 4),
   VAR_11->threshold[VAR_10 + 4]);
  if (VAR_12)
   goto out_unlock;
 }

 if (VAR_7 == 128)
  VAR_12 = FUNC_1(VAR_11, FUNC_0(VAR_10), VAR_8);

out_unlock:
 FUNC_4(&VAR_11->mutex);

 return VAR_12;
}
