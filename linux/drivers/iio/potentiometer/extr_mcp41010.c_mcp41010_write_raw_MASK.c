
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcp41010_data {int* buf; int* value; int lock; int spi; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mcp41010_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6,
        int VAR_7, int VAR_8, long VAR_9)
{
 int VAR_10;
 struct mcp41010_data *VAR_11 = FUNC_0(VAR_5);
 int VAR_12 = VAR_6->channel;

 if (VAR_9 != VAR_1)
  return -VAR_0;

 if (VAR_7 > VAR_3 || VAR_7 < 0)
  return -VAR_0;

 FUNC_1(&VAR_11->lock);

 VAR_11->buf[0] = VAR_2 << VAR_12;
 VAR_11->buf[0] |= VAR_4;
 VAR_11->buf[1] = VAR_7 & 0xff;

 VAR_10 = FUNC_3(VAR_11->spi, VAR_11->buf, sizeof(VAR_11->buf));
 if (!VAR_10)
  VAR_11->value[VAR_12] = VAR_7;

 FUNC_2(&VAR_11->lock);

 return VAR_10;
}
