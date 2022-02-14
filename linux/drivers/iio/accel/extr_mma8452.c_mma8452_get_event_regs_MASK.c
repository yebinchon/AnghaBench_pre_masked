
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma8452_event_regs {int dummy; } ;
struct mma8452_data {TYPE_1__* chip_info; } ;
struct iio_chan_spec {int type; } ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
struct TYPE_2__ {int all_events; int enabled_events; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct mma8452_event_regs VAR_2 ;
 struct mma8452_event_regs VAR_3 ;

__attribute__((used)) static int FUNC_0(struct mma8452_data *VAR_4,
  const struct iio_chan_spec *VAR_5, enum iio_event_direction VAR_6,
  const struct mma8452_event_regs **VAR_7)
{
 if (!VAR_5)
  return -VAR_0;

 switch (VAR_5->type) {
 case 130:
  switch (VAR_6) {
  case 128:
   if ((VAR_4->chip_info->all_events
     & VAR_1) &&
    (VAR_4->chip_info->enabled_events
     & VAR_1))
    *VAR_7 = &VAR_3;
   else
    *VAR_7 = &VAR_2;
   return 0;
  case 129:
   *VAR_7 = &VAR_2;
   return 0;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
