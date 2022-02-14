
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc18xx_dac {int vref; scalar_t__ base; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lpc18xx_dac* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_6,
    struct iio_chan_spec const *VAR_7,
    int *VAR_8, int *VAR_9, long VAR_10)
{
 struct lpc18xx_dac *VAR_11 = FUNC_0(VAR_6);
 u32 VAR_12;

 switch (VAR_10) {
 case 129:
  VAR_12 = FUNC_1(VAR_11->base + VAR_3);
  *VAR_8 = VAR_12 >> VAR_5;
  *VAR_8 &= VAR_4;

  return VAR_2;

 case 128:
  *VAR_8 = FUNC_2(VAR_11->vref) / 1000;
  *VAR_9 = 10;

  return VAR_1;
 }

 return -VAR_0;
}
