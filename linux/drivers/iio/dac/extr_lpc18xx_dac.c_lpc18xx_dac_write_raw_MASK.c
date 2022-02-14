
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_dac {int lock; scalar_t__ base; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct lpc18xx_dac* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_7,
     struct iio_chan_spec const *VAR_8,
     int VAR_9, int VAR_10, long VAR_11)
{
 struct lpc18xx_dac *VAR_12 = FUNC_0(VAR_7);
 u32 VAR_13;

 switch (VAR_11) {
 case 128:
  if (VAR_9 < 0 || VAR_9 > VAR_3)
   return -VAR_0;

  VAR_13 = VAR_2;
  VAR_13 |= VAR_9 << VAR_4;

  FUNC_1(&VAR_12->lock);
  FUNC_3(VAR_13, VAR_12->base + VAR_1);
  FUNC_3(VAR_6, VAR_12->base + VAR_5);
  FUNC_2(&VAR_12->lock);

  return 0;
 }

 return -VAR_0;
}
