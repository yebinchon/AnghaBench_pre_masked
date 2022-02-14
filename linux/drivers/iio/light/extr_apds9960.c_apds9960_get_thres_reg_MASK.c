
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





__attribute__((used)) static inline int FUNC_0(const struct iio_chan_spec *VAR_5,
      enum iio_event_direction VAR_6,
      u8 *VAR_7)
{
 switch (VAR_6) {
 case 130:
  switch (VAR_5->type) {
  case 128:
   *VAR_7 = VAR_2;
   break;
  case 129:
   *VAR_7 = VAR_0;
   break;
  default:
   return -VAR_4;
  }
  break;
 case 131:
  switch (VAR_5->type) {
  case 128:
   *VAR_7 = VAR_3;
   break;
  case 129:
   *VAR_7 = VAR_1;
   break;
  default:
   return -VAR_4;
  }
  break;
 default:
  return -VAR_4;
 }

 return 0;
}
