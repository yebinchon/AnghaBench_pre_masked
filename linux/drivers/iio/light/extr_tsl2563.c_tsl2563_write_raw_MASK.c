
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {void* calib1; void* calib0; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ channel2; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tsl2563_chip* FUNC_0 (struct iio_dev*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
          struct iio_chan_spec const *VAR_5,
          int VAR_6,
          int VAR_7,
          long VAR_8)
{
 struct tsl2563_chip *VAR_9 = FUNC_0(VAR_4);

 if (VAR_8 != VAR_1)
  return -VAR_0;
 if (VAR_5->channel2 == VAR_2)
  VAR_9->calib0 = FUNC_1(VAR_6);
 else if (VAR_5->channel2 == VAR_3)
  VAR_9->calib1 = FUNC_1(VAR_6);
 else
  return -VAR_0;

 return 0;
}
