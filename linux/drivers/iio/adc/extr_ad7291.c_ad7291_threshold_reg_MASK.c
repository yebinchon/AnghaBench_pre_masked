
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {int type; unsigned int channel; } ;
typedef enum iio_event_info { ____Placeholder_iio_event_info } iio_event_info ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static unsigned int FUNC_3(const struct iio_chan_spec *VAR_2,
      enum iio_event_direction VAR_3,
      enum iio_event_info VAR_4)
{
 unsigned int VAR_5;

 switch (VAR_2->type) {
 case 128:
  VAR_5 = VAR_2->channel;
  break;
 case 129:
  VAR_5 = VAR_0;
  break;
 default:
     return 0;
 }

 switch (VAR_4) {
 case 130:
  if (VAR_3 == VAR_1)
   return FUNC_0(VAR_5);
  else
   return FUNC_1(VAR_5);
 case 131:
  return FUNC_2(VAR_5);
 default:
  break;
 }
 return 0;
}
