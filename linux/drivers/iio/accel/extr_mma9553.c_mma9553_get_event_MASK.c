
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma9553_event {TYPE_1__* info; } ;
struct mma9553_data {int num_events; struct mma9553_event* events; } ;
typedef enum iio_modifier { ____Placeholder_iio_modifier } iio_modifier ;
typedef enum iio_event_direction { ____Placeholder_iio_event_direction } iio_event_direction ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_2__ {int type; int mod; int dir; } ;



__attribute__((used)) static struct mma9553_event *FUNC_0(struct mma9553_data *VAR_0,
            enum iio_chan_type VAR_1,
            enum iio_modifier VAR_2,
            enum iio_event_direction VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_events; VAR_4++)
  if (VAR_0->events[VAR_4].info->type == VAR_1 &&
      VAR_0->events[VAR_4].info->mod == VAR_2 &&
      VAR_0->events[VAR_4].info->dir == VAR_3)
   return &VAR_0->events[VAR_4];

 return ((void*)0);
}
