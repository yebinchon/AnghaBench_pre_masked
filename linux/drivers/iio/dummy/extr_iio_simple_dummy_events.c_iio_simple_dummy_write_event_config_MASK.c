
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dummy_state {int event_en; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_type { ____Placeholder_iio_event_type } iio_event_type ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;

 int VAR_1 ;




 struct iio_dummy_state* FUNC_0 (struct iio_dev*) ;

int FUNC_1(struct iio_dev *VAR_2,
     const struct iio_chan_spec *VAR_3,
     enum iio_event_type VAR_4,
     enum iio_event_direction VAR_5,
     int VAR_6)
{
 struct iio_dummy_state *VAR_7 = FUNC_0(VAR_2);





 switch (VAR_3->type) {
 case 128:
  switch (VAR_4) {
  case 130:
   if (VAR_5 == VAR_1)
    VAR_7->event_en = VAR_6;
   else
    return -VAR_0;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 132:
  switch (VAR_4) {
  case 130:
   VAR_7->event_en = VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 129:
  switch (VAR_4) {
  case 131:
   VAR_7->event_en = VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
