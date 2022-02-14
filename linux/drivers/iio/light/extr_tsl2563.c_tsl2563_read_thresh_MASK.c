
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {int high_thres; int low_thres; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;


 int VAR_1 ;
 struct tsl2563_chip* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_2,
 const struct iio_chan_spec *VAR_3, enum iio_event_type VAR_4,
 enum iio_event_direction VAR_5, enum iio_event_info VAR_6, int *VAR_7,
 int *VAR_8)
{
 struct tsl2563_chip *VAR_9 = FUNC_0(VAR_2);

 switch (VAR_5) {
 case 128:
  *VAR_7 = VAR_9->high_thres;
  break;
 case 129:
  *VAR_7 = VAR_9->low_thres;
  break;
 default:
  return -VAR_0;
 }

 return VAR_1;
}
