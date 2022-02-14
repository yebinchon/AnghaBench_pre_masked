
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4018_data {TYPE_1__* cfg; int client; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int kohms; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct mcp4018_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
       struct iio_chan_spec const *VAR_5,
       int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mcp4018_data *VAR_9 = FUNC_1(VAR_4);
 s32 VAR_10;

 switch (VAR_8) {
 case 129:
  VAR_10 = FUNC_0(VAR_9->client);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = VAR_10;
  return VAR_2;
 case 128:
  *VAR_6 = 1000 * VAR_9->cfg->kohms;
  *VAR_7 = VAR_3;
  return VAR_1;
 }

 return -VAR_0;
}
