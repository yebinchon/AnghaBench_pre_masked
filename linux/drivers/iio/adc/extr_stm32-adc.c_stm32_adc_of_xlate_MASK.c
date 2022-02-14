
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {scalar_t__* args; } ;
struct iio_dev {int num_channels; TYPE_1__* channels; } ;
struct TYPE_2__ {scalar_t__ channel; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct iio_dev *VAR_1,
         const struct of_phandle_args *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_channels; VAR_3++)
  if (VAR_1->channels[VAR_3].channel == VAR_2->args[0])
   return VAR_3;

 return -VAR_0;
}
