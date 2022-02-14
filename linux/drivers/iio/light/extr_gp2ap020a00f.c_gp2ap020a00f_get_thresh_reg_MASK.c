
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



__attribute__((used)) static u8 FUNC_0(const struct iio_chan_spec *VAR_6,
          enum iio_event_direction VAR_7)
{
 switch (VAR_6->type) {
 case 128:
  if (VAR_7 == VAR_5)
   return VAR_1;
  else
   return VAR_2;
 case 129:
  if (VAR_7 == VAR_5)
   return VAR_3;
  else
   return VAR_4;
 default:
  break;
 }

 return -VAR_0;
}
