
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4531_data {TYPE_1__* cfg; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
typedef int s32 ;
struct TYPE_2__ {int kohms; int* avail; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 struct mcp4531_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int *VAR_7, int *VAR_8, long VAR_9)
{
 struct mcp4531_data *VAR_10 = FUNC_1(VAR_5);
 int VAR_11 = VAR_6->channel << VAR_4;
 s32 VAR_12;

 switch (VAR_9) {
 case 129:
  VAR_12 = FUNC_0(VAR_10->client,
        VAR_3 | VAR_11);
  if (VAR_12 < 0)
   return VAR_12;
  *VAR_7 = VAR_12;
  return VAR_2;
 case 128:
  *VAR_7 = 1000 * VAR_10->cfg->kohms;
  *VAR_8 = VAR_10->cfg->avail[2];
  return VAR_1;
 }

 return -VAR_0;
}
