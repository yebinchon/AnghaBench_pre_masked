
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4131_data {int* buf; int lock; int spi; TYPE_1__* cfg; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int max_pos; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct mcp4131_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 int VAR_8;
 struct mcp4131_data *VAR_9 = FUNC_0(VAR_3);
 int VAR_10 = VAR_4->channel << VAR_1;

 switch (VAR_7) {
 case 128:
  if (VAR_5 > VAR_9->cfg->max_pos || VAR_5 < 0)
   return -VAR_0;
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(&VAR_9->lock);

 VAR_9->buf[0] = VAR_10 << VAR_1;
 VAR_9->buf[0] |= VAR_2 | (VAR_5 >> 8);
 VAR_9->buf[1] = VAR_5 & 0xFF;

 VAR_8 = FUNC_3(VAR_9->spi, VAR_9->buf, 2);
 FUNC_2(&VAR_9->lock);

 return VAR_8;
}
