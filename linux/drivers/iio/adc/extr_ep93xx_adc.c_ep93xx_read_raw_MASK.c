
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iio_dev {int dev; } ;
struct iio_chan_spec {int address; int channel; } ;
struct ep93xx_adc_priv {int lock; scalar_t__ base; int lastch; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int,int) ;
 struct ep93xx_adc_priv* FUNC_4 (struct iio_dev*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (scalar_t__,unsigned long) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct iio_dev *VAR_9,
      struct iio_chan_spec const *VAR_10, int *VAR_11,
      int *VAR_12, long VAR_13)
{
 struct ep93xx_adc_priv *VAR_14 = FUNC_4(VAR_9);
 unsigned long VAR_15;
 int VAR_16;

 switch (VAR_13) {
 case 129:
  FUNC_8(&VAR_14->lock);
  if (VAR_14->lastch != VAR_10->channel) {
   VAR_14->lastch = VAR_10->channel;




   FUNC_5();
   FUNC_13(0xAA, VAR_14->base + VAR_4);
   FUNC_13(VAR_10->address,
           VAR_14->base + VAR_3);
   FUNC_6();




   FUNC_3(2000, 2000);
  }

  FUNC_10(VAR_14->base + VAR_1);

  FUNC_3(FUNC_0(1000000, 925),
     FUNC_0(1000000, 925));

  VAR_16 = VAR_7;
  VAR_15 = VAR_8 + FUNC_7(1) + 1;
  while (1) {
   u32 VAR_17;

   VAR_17 = FUNC_10(VAR_14->base + VAR_1);
   if (VAR_17 & VAR_2) {
    *VAR_11 = FUNC_11(VAR_17, 15);
    break;
   }

   if (FUNC_12(VAR_8, VAR_15)) {
    FUNC_2(&VAR_9->dev, "Conversion timeout\n");
    VAR_16 = -VAR_5;
    break;
   }

   FUNC_1();
  }
  FUNC_9(&VAR_14->lock);
  return VAR_16;

 case 130:

  *VAR_11 = 25000;
  return VAR_7;

 case 128:

  *VAR_11 = (1ULL << 32) * 3300 / 50000;
  *VAR_12 = 32;
  return VAR_6;
 }

 return -VAR_0;
}
