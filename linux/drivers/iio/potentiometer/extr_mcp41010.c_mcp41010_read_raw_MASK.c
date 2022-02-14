
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp41010_data {int* value; TYPE_1__* cfg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int kohms; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mcp41010_data* FUNC_0 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_1(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mcp41010_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = VAR_5->channel;

 switch (VAR_8) {
 case 129:
  *VAR_6 = VAR_9->value[VAR_10];
  return VAR_2;

 case 128:
  *VAR_6 = 1000 * VAR_9->cfg->kohms;
  *VAR_7 = VAR_3;
  return VAR_1;
 }

 return -VAR_0;
}
