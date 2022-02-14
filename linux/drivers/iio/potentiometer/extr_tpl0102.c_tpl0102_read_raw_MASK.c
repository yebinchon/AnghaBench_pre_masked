
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tpl0102_data {TYPE_1__* cfg; int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int kohms; int * avail; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct tpl0102_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4,
       int *VAR_5, int *VAR_6, long VAR_7)
{
 struct tpl0102_data *VAR_8 = FUNC_0(VAR_3);

 switch (VAR_7) {
 case 129: {
  int VAR_9 = FUNC_1(VAR_8->regmap, VAR_4->channel, VAR_5);

  return VAR_9 ? VAR_9 : VAR_2;
 }
 case 128:
  *VAR_5 = 1000 * VAR_8->cfg->kohms;
  *VAR_6 = VAR_8->cfg->avail[2] + 1;
  return VAR_1;
 }

 return -VAR_0;
}
