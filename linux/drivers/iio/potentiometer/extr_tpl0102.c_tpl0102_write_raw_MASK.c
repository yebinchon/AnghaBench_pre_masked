
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpl0102_data {int regmap; TYPE_1__* cfg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int* avail; } ;


 int VAR_0 ;
 long VAR_1 ;
 struct tpl0102_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct tpl0102_data *VAR_7 = FUNC_0(VAR_2);

 if (VAR_6 != VAR_1)
  return -VAR_0;

 if (VAR_4 > VAR_7->cfg->avail[2] || VAR_4 < 0)
  return -VAR_0;

 return FUNC_1(VAR_7->regmap, VAR_3->channel, VAR_4);
}
