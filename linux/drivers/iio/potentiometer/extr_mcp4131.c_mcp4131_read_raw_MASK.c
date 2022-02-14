
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mcp4131_data {int* buf; TYPE_1__* cfg; int lock; int spi; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct TYPE_2__ {int kohms; int max_pos; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct mcp4131_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_6,
       struct iio_chan_spec const *VAR_7,
       int *VAR_8, int *VAR_9, long VAR_10)
{
 int VAR_11;
 struct mcp4131_data *VAR_12 = FUNC_2(VAR_6);
 int VAR_13 = VAR_7->channel;

 switch (VAR_10) {
 case 129:
  FUNC_4(&VAR_12->lock);

  VAR_12->buf[0] = (VAR_13 << VAR_5) | VAR_4;
  VAR_12->buf[1] = 0;

  VAR_11 = FUNC_3(VAR_12->spi, VAR_12->buf, 2);
  if (VAR_11) {
   FUNC_5(&VAR_12->lock);
   return VAR_11;
  }


  if (!FUNC_0(VAR_12->buf)) {
   FUNC_5(&VAR_12->lock);
   return -VAR_1;
  }

  *VAR_8 = FUNC_1(VAR_12->buf);
  FUNC_5(&VAR_12->lock);

  return VAR_3;

 case 128:
  *VAR_8 = 1000 * VAR_12->cfg->kohms;
  *VAR_9 = VAR_12->cfg->max_pos;
  return VAR_2;
 }

 return -VAR_0;
}
