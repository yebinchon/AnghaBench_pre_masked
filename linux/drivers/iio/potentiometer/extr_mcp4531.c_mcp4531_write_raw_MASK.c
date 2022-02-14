
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4531_data {int client; TYPE_1__* cfg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int* avail; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 struct mcp4531_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct mcp4531_data *VAR_8 = FUNC_1(VAR_3);
 int VAR_9 = VAR_4->channel << VAR_1;

 switch (VAR_7) {
 case 128:
  if (VAR_5 > VAR_8->cfg->avail[2] || VAR_5 < 0)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_8->client,
      VAR_2 | VAR_9 | (VAR_5 >> 8),
      VAR_5 & 0xff);
}
