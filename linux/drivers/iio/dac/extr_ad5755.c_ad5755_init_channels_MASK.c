
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {struct iio_chan_spec* channels; } ;
struct iio_chan_spec {unsigned int channel; unsigned int address; int type; } ;
struct ad5755_state {TYPE_1__* chip_info; struct iio_chan_spec* channels; } ;
struct ad5755_platform_data {TYPE_2__* dac; } ;
struct TYPE_4__ {int mode; } ;
struct TYPE_3__ {struct iio_chan_spec channel_template; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct ad5755_state* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
    const struct ad5755_platform_data *VAR_4)
{
 struct ad5755_state *VAR_5 = FUNC_1(VAR_3);
 struct iio_chan_spec *VAR_6 = VAR_5->channels;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  VAR_6[VAR_7] = VAR_5->chip_info->channel_template;
  VAR_6[VAR_7].channel = VAR_7;
  VAR_6[VAR_7].address = VAR_7;
  if (VAR_4 && FUNC_0(VAR_4->dac[VAR_7].mode))
   VAR_6[VAR_7].type = VAR_2;
  else
   VAR_6[VAR_7].type = VAR_1;
 }

 VAR_3->channels = VAR_6;

 return 0;
}
