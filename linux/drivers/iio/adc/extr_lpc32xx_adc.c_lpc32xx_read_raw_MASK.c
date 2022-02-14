
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_adc_state {int value; int vref; int clk; int completion; int adc_base; } ;
struct iio_dev {int mlock; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct lpc32xx_adc_state* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_8,
       struct iio_chan_spec const *VAR_9,
       int *VAR_10,
       int *VAR_11,
       long VAR_12)
{
 struct lpc32xx_adc_state *VAR_13 = FUNC_5(VAR_8);
 int VAR_14;

 switch (VAR_12) {
 case 129:
  FUNC_6(&VAR_8->mlock);
  VAR_14 = FUNC_4(VAR_13->clk);
  if (VAR_14) {
   FUNC_7(&VAR_8->mlock);
   return VAR_14;
  }

  FUNC_2(VAR_3 | (VAR_9->address) |
        VAR_6 | VAR_5,
        FUNC_1(VAR_13->adc_base));

  FUNC_2(VAR_4 | VAR_7,
        FUNC_0(VAR_13->adc_base));
  FUNC_9(&VAR_13->completion);
  FUNC_3(VAR_13->clk);
  *VAR_10 = VAR_13->value;
  FUNC_7(&VAR_8->mlock);

  return VAR_2;

 case 128:
  *VAR_10 = FUNC_8(VAR_13->vref) / 1000;
  *VAR_11 = 10;

  return VAR_1;
 default:
  return -VAR_0;
 }
}
