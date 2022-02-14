
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct npcm_adc {int adc_sample_hz; int vref; int dev; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 struct npcm_adc* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct npcm_adc*,int*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
        struct iio_chan_spec const *VAR_6, int *VAR_7,
        int *VAR_8, long VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct npcm_adc *VAR_12 = FUNC_2(VAR_5);

 switch (VAR_9) {
 case 130:
  FUNC_3(&VAR_5->mlock);
  VAR_10 = FUNC_5(VAR_12, VAR_7, VAR_6->channel);
  FUNC_4(&VAR_5->mlock);
  if (VAR_10) {
   FUNC_1(VAR_12->dev, "NPCM ADC read failed\n");
   return VAR_10;
  }
  return VAR_2;
 case 128:
  if (!FUNC_0(VAR_12->vref)) {
   VAR_11 = FUNC_6(VAR_12->vref);
   *VAR_7 = VAR_11 / 1000;
  } else {
   *VAR_7 = VAR_3;
  }
  *VAR_8 = VAR_4;
  return VAR_1;
 case 129:
  *VAR_7 = VAR_12->adc_sample_hz;
  return VAR_2;
 default:
  return -VAR_0;
 }

 return 0;
}
