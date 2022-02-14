
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ calibrated; } ;
struct stm32_adc {TYPE_1__ cal; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (struct stm32_adc*,int ,int) ;
 int FUNC_3 (int ,int,int,int,int ) ;
 int FUNC_4 (struct stm32_adc*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct stm32_adc *VAR_5)
{
 struct iio_dev *VAR_6 = FUNC_1(VAR_5);
 int VAR_7;
 u32 VAR_8;

 if (VAR_5->cal.calibrated)
  return 1;






 FUNC_2(VAR_5, VAR_4, VAR_1);
 FUNC_2(VAR_5, VAR_4, VAR_2);


 FUNC_4(VAR_5, VAR_4, VAR_0);
 VAR_7 = FUNC_3(VAR_4, VAR_8,
        !(VAR_8 & VAR_0), 100,
        VAR_3);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "calibration failed\n");
  goto out;
 }







 FUNC_4(VAR_5, VAR_4,
      VAR_1 | VAR_2);
 FUNC_4(VAR_5, VAR_4, VAR_0);
 VAR_7 = FUNC_3(VAR_4, VAR_8,
        !(VAR_8 & VAR_0), 100,
        VAR_3);
 if (VAR_7) {
  FUNC_0(&VAR_6->dev, "calibration failed\n");
  goto out;
 }

out:
 FUNC_2(VAR_5, VAR_4,
      VAR_1 | VAR_2);

 return VAR_7;
}
