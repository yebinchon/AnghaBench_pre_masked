
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct iio_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_3,
 const struct iio_chan_spec *VAR_4, enum iio_event_type VAR_5,
 enum iio_event_direction VAR_6, enum iio_event_info VAR_7, int *VAR_8,
 int *VAR_9)
{
 int VAR_10;

 switch (VAR_4->type) {
 case 129:
  VAR_10 = FUNC_0(VAR_3, VAR_0);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_8 = VAR_10;
  break;
 case 128:
  *VAR_8 = 140000;
  break;
 default:
  return -VAR_1;
 }

 return VAR_2;
}
