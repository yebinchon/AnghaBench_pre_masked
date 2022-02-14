
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {struct iio_chan_spec* channels; } ;
struct iio_chan_spec {unsigned int channel; unsigned int address; } ;
struct ad5380_state {TYPE_1__* chip_info; } ;
struct TYPE_2__ {unsigned int num_channels; struct iio_chan_spec channel_template; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ad5380_state* FUNC_0 (struct iio_dev*) ;
 struct iio_chan_spec* FUNC_1 (unsigned int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2)
{
 struct ad5380_state *VAR_3 = FUNC_0(VAR_2);
 struct iio_chan_spec *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_3->chip_info->num_channels,
      sizeof(struct iio_chan_spec), VAR_1);

 if (!VAR_4)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->chip_info->num_channels; ++VAR_5) {
  VAR_4[VAR_5] = VAR_3->chip_info->channel_template;
  VAR_4[VAR_5].channel = VAR_5;
  VAR_4[VAR_5].address = VAR_5;
 }

 VAR_2->channels = VAR_4;

 return 0;
}
