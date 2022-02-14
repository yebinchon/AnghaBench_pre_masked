
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* lincalfact; int calfact_s; int calfact_d; int calibrated; } ;
struct stm32_adc {TYPE_1__ cal; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (struct stm32_adc*,int ,int) ;
 int FUNC_3 (struct stm32_adc*,int ) ;
 int FUNC_4 (int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_5(struct stm32_adc *VAR_12)
{
 struct iio_dev *VAR_13 = FUNC_1(VAR_12);
 int VAR_14, VAR_15;
 u32 VAR_16, VAR_17;


 VAR_16 = VAR_10;
 for (VAR_14 = VAR_8 - 1; VAR_14 >= 0; VAR_14--) {

  FUNC_2(VAR_12, VAR_2, VAR_16);


  VAR_15 = FUNC_4(VAR_2, VAR_17,
         !(VAR_17 & VAR_16),
         100, VAR_11);
  if (VAR_15) {
   FUNC_0(&VAR_13->dev, "Failed to read calfact\n");
   return VAR_15;
  }

  VAR_17 = FUNC_3(VAR_12, VAR_1);
  VAR_12->cal.lincalfact[VAR_14] = (VAR_17 & VAR_7);
  VAR_12->cal.lincalfact[VAR_14] >>= VAR_9;

  VAR_16 >>= 1;
 }


 VAR_17 = FUNC_3(VAR_12, VAR_0);
 VAR_12->cal.calfact_s = (VAR_17 & VAR_5);
 VAR_12->cal.calfact_s >>= VAR_6;
 VAR_12->cal.calfact_d = (VAR_17 & VAR_3);
 VAR_12->cal.calfact_d >>= VAR_4;
 VAR_12->cal.calibrated = 1;

 return 0;
}
