
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int calfact_s; int calfact_d; int* lincalfact; } ;
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
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (struct stm32_adc*,int ,int) ;
 int FUNC_3 (struct stm32_adc*,int ) ;
 int FUNC_4 (int ,int,int,int,int ) ;
 int FUNC_5 (struct stm32_adc*,int ,int) ;
 int FUNC_6 (struct stm32_adc*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct stm32_adc *VAR_10)
{
 struct iio_dev *VAR_11 = FUNC_1(VAR_10);
 int VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 VAR_15 = (VAR_10->cal.calfact_s << VAR_5) |
  (VAR_10->cal.calfact_d << VAR_4);
 FUNC_6(VAR_10, VAR_1, VAR_15);

 VAR_14 = VAR_8;
 for (VAR_12 = VAR_6 - 1; VAR_12 >= 0; VAR_12--) {





  VAR_15 = VAR_10->cal.lincalfact[VAR_12] << VAR_7;
  FUNC_6(VAR_10, VAR_2, VAR_15);
  FUNC_5(VAR_10, VAR_3, VAR_14);
  VAR_13 = FUNC_4(VAR_3, VAR_15,
         VAR_15 & VAR_14,
         100, VAR_9);
  if (VAR_13) {
   FUNC_0(&VAR_11->dev, "Failed to write calfact\n");
   return VAR_13;
  }
  FUNC_2(VAR_10, VAR_3, VAR_14);
  VAR_13 = FUNC_4(VAR_3, VAR_15,
         !(VAR_15 & VAR_14),
         100, VAR_9);
  if (VAR_13) {
   FUNC_0(&VAR_11->dev, "Failed to read calfact\n");
   return VAR_13;
  }
  VAR_15 = FUNC_3(VAR_10, VAR_2);
  if (VAR_15 != VAR_10->cal.lincalfact[VAR_12] << VAR_7) {
   FUNC_0(&VAR_11->dev, "calfact not consistent\n");
   return -VAR_0;
  }

  VAR_14 >>= 1;
 }

 return 0;
}
