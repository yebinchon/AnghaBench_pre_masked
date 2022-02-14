
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t channel; } ;
struct iadc_chip {int* offset; int* rsense; int gain; int dev; int lock; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int ,int,int,int) ;
 int FUNC_1 (struct iadc_chip*,size_t,int*) ;
 struct iadc_chip* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5,
    int *VAR_6, int *VAR_7, long VAR_8)
{
 struct iadc_chip *VAR_9 = FUNC_2(VAR_4);
 s32 VAR_10, VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;

 switch (VAR_8) {
 case 129:
  FUNC_3(&VAR_9->lock);
  VAR_14 = FUNC_1(VAR_9, VAR_5->channel, &VAR_12);
  FUNC_4(&VAR_9->lock);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_13 = VAR_12 - VAR_9->offset[VAR_5->channel];

  VAR_11 = VAR_13 * VAR_1;
  VAR_11 /= (s32)VAR_9->gain - VAR_9->offset[VAR_5->channel];

  VAR_10 = VAR_11 / VAR_9->rsense[VAR_5->channel];

  FUNC_0(VAR_9->dev, "off %d gain %d adc %d %duV I %duA\n",
   VAR_9->offset[VAR_5->channel], VAR_9->gain,
   VAR_12, VAR_11, VAR_10);

  *VAR_6 = VAR_10;
  return VAR_2;
 case 128:
  *VAR_6 = 0;
  *VAR_7 = 1000;
  return VAR_3;
 }

 return -VAR_0;
}
