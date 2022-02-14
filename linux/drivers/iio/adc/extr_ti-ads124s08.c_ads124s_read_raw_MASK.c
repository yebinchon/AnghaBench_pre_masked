
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel; } ;
struct ads124s_private {int lock; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (struct iio_dev*,int ) ;
 int FUNC_1 (struct iio_dev*,int ) ;
 int FUNC_2 (struct iio_dev*,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 struct ads124s_private* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int *VAR_7, int *VAR_8, long VAR_9)
{
 struct ads124s_private *VAR_10 = FUNC_4(VAR_5);
 int VAR_11;

 FUNC_5(&VAR_10->lock);
 switch (VAR_9) {
 case 128:
  VAR_11 = FUNC_2(VAR_5, VAR_0,
     VAR_6->channel);
  if (VAR_11) {
   FUNC_3(&VAR_10->spi->dev, "Set ADC CH failed\n");
   goto out;
  }

  VAR_11 = FUNC_1(VAR_5, VAR_1);
  if (VAR_11) {
   FUNC_3(&VAR_10->spi->dev, "Start conversions failed\n");
   goto out;
  }

  VAR_11 = FUNC_0(VAR_5, VAR_6->channel);
  if (VAR_11 < 0) {
   FUNC_3(&VAR_10->spi->dev, "Read ADC failed\n");
   goto out;
  }

  *VAR_7 = VAR_11;

  VAR_11 = FUNC_1(VAR_5, VAR_2);
  if (VAR_11) {
   FUNC_3(&VAR_10->spi->dev, "Stop conversions failed\n");
   goto out;
  }

  VAR_11 = VAR_4;
  break;
 default:
  VAR_11 = -VAR_3;
  break;
 }
out:
 FUNC_6(&VAR_10->lock);
 return VAR_11;
}
