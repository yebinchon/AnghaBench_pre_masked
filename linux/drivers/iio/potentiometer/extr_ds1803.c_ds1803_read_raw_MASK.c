
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iio_dev {int num_channels; } ;
struct iio_chan_spec {int channel; } ;
struct ds1803_data {TYPE_1__* cfg; int client; } ;
struct TYPE_2__ {int kohms; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int*,int ) ;
 struct ds1803_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int *VAR_7, int *VAR_8, long VAR_9)
{
 struct ds1803_data *VAR_10 = FUNC_2(VAR_5);
 int VAR_11 = VAR_6->channel;
 int VAR_12;
 u8 VAR_13[FUNC_0(VAR_4)];

 switch (VAR_9) {
 case 129:
  VAR_12 = FUNC_1(VAR_10->client, VAR_13,
    VAR_5->num_channels);
  if (VAR_12 < 0)
   return VAR_12;

  *VAR_7 = VAR_13[VAR_11];
  return VAR_3;

 case 128:
  *VAR_7 = 1000 * VAR_10->cfg->kohms;
  *VAR_8 = VAR_0;
  return VAR_2;
 }

 return -VAR_1;
}
