
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_chan_spec {scalar_t__ type; int channel; } ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(const struct iio_chan_spec *VAR_3,
 enum iio_event_direction VAR_4)
{
 unsigned int VAR_5;

 if (VAR_3->type == VAR_1) {
  VAR_5 = VAR_2;
 } else {
  if (VAR_3->channel < 2)
   VAR_5 = VAR_3->channel + 1;
  else
   VAR_5 = VAR_3->channel + 6;
 }

 if (VAR_4 == VAR_0)
  VAR_5 += 4;

 return VAR_5;
}
