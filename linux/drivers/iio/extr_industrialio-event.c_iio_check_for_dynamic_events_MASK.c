
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int num_channels; TYPE_1__* channels; } ;
struct TYPE_2__ {scalar_t__ num_event_specs; } ;



__attribute__((used)) static bool FUNC_0(struct iio_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_channels; VAR_1++) {
  if (VAR_0->channels[VAR_1].num_event_specs != 0)
   return 1;
 }
 return 0;
}
