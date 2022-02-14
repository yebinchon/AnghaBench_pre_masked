
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmx61_data {int wake_thresh; int wake_duration; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int VAR_1 ;
 struct kmx61_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
       const struct iio_chan_spec *VAR_3,
       enum iio_event_type VAR_4,
       enum iio_event_direction VAR_5,
       enum iio_event_info VAR_6,
       int *VAR_7, int *VAR_8)
{
 struct kmx61_data *VAR_9 = FUNC_0(VAR_2);

 *VAR_8 = 0;
 switch (VAR_6) {
 case 128:
  *VAR_7 = VAR_9->wake_thresh;
  return VAR_1;
 case 129:
  *VAR_7 = VAR_9->wake_duration;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
