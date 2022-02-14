
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx7d_adc {int channel; int value; int vref_uv; int vref; int completion; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct imx7d_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct imx7d_adc*) ;
 int FUNC_2 (struct imx7d_adc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 long FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_5,
   struct iio_chan_spec const *VAR_6,
   int *VAR_7,
   int *VAR_8,
   long VAR_9)
{
 struct imx7d_adc *VAR_10 = FUNC_0(VAR_5);

 u32 VAR_11;
 long VAR_12;

 switch (VAR_9) {
 case 130:
  FUNC_3(&VAR_5->mlock);
  FUNC_6(&VAR_10->completion);

  VAR_11 = VAR_6->channel & 0x03;
  VAR_10->channel = VAR_11;
  FUNC_1(VAR_10);

  VAR_12 = FUNC_7
    (&VAR_10->completion, VAR_4);
  if (VAR_12 == 0) {
   FUNC_4(&VAR_5->mlock);
   return -VAR_1;
  }
  if (VAR_12 < 0) {
   FUNC_4(&VAR_5->mlock);
   return VAR_12;
  }

  *VAR_7 = VAR_10->value;
  FUNC_4(&VAR_5->mlock);
  return VAR_3;

 case 128:
  VAR_10->vref_uv = FUNC_5(VAR_10->vref);
  *VAR_7 = VAR_10->vref_uv / 1000;
  *VAR_8 = 12;
  return VAR_2;

 case 129:
  *VAR_7 = FUNC_2(VAR_10);
  return VAR_3;

 default:
  return -VAR_0;
 }
}
