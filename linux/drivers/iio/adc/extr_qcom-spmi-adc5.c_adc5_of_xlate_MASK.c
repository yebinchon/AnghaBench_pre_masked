
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_phandle_args {scalar_t__* args; } ;
struct iio_dev {int dummy; } ;
struct adc5_chip {int nchannels; TYPE_1__* chan_props; } ;
struct TYPE_2__ {scalar_t__ channel; } ;


 int VAR_0 ;
 struct adc5_chip* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_1,
    const struct of_phandle_args *VAR_2)
{
 struct adc5_chip *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nchannels; VAR_4++)
  if (VAR_3->chan_props[VAR_4].channel == VAR_2->args[0])
   return VAR_4;

 return -VAR_0;
}
