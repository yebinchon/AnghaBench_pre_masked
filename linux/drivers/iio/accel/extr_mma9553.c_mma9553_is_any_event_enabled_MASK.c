
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mma9553_data {int num_events; TYPE_2__* events; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_4__ {scalar_t__ enabled; TYPE_1__* info; } ;
struct TYPE_3__ {int type; } ;



__attribute__((used)) static bool FUNC_0(struct mma9553_data *VAR_0,
      bool VAR_1,
      enum iio_chan_type VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_events; VAR_3++)
  if ((VAR_1 && VAR_0->events[VAR_3].info->type == VAR_2 &&
       VAR_0->events[VAR_3].enabled) ||
       (!VAR_1 && VAR_0->events[VAR_3].enabled))
   return 1;

 return 0;
}
