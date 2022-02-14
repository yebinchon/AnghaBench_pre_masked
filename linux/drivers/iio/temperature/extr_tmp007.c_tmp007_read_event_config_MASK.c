
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp007_data {unsigned int status_mask; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct tmp007_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_6,
  const struct iio_chan_spec *VAR_7, enum iio_event_type VAR_8,
  enum iio_event_direction VAR_9)
{
 struct tmp007_data *VAR_10 = FUNC_0(VAR_6);
 unsigned int VAR_11;

 switch (VAR_7->channel2) {
 case 129:
  if (VAR_9 == VAR_1)
   VAR_11 = VAR_2;
  else
   VAR_11 = VAR_3;
  break;
 case 128:
  if (VAR_9 == VAR_1)
   VAR_11 = VAR_4;
  else
   VAR_11 = VAR_5;
  break;
 default:
  return -VAR_0;
 }

 return !!(VAR_10->status_mask & VAR_11);
}
