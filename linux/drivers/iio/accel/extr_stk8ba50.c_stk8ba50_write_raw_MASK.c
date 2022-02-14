
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stk8ba50_data {int range; int sample_rate_idx; TYPE_3__* client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int scale_val; int samp_freq; int reg_val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 struct stk8ba50_data* FUNC_3 (struct iio_dev*) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
         struct iio_chan_spec const *VAR_6,
         int VAR_7, int VAR_8, long VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12 = -1;
 struct stk8ba50_data *VAR_13 = FUNC_3(VAR_5);

 switch (VAR_9) {
 case 128:
  if (VAR_7 != 0)
   return -VAR_0;

  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++)
   if (VAR_8 == VAR_4[VAR_11].scale_val) {
    VAR_12 = VAR_11;
    break;
   }
  if (VAR_12 < 0)
   return -VAR_0;

  VAR_10 = FUNC_2(VAR_13->client,
    VAR_2,
    VAR_4[VAR_12].reg_val);
  if (VAR_10 < 0)
   FUNC_1(&VAR_13->client->dev,
     "failed to set measurement range\n");
  else
   VAR_13->range = VAR_12;

  return VAR_10;
 case 129:
  for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++)
   if (VAR_7 == VAR_3[VAR_11].samp_freq) {
    VAR_12 = VAR_11;
    break;
   }
  if (VAR_12 < 0)
   return -VAR_0;

  VAR_10 = FUNC_2(VAR_13->client,
    VAR_1,
    VAR_3[VAR_12].reg_val);
  if (VAR_10 < 0)
   FUNC_1(&VAR_13->client->dev,
     "failed to set sampling rate\n");
  else
   VAR_13->sample_rate_idx = VAR_12;

  return VAR_10;
 }

 return -VAR_0;
}
