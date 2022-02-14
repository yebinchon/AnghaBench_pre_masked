
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_adc {int dummy; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (int ,int,int,int,int ) ;
 int FUNC_3 (struct stm32_adc*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct stm32_adc *VAR_4)
{
 struct iio_dev *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;
 u32 VAR_7;


 FUNC_3(VAR_4, VAR_0, VAR_1);
 VAR_6 = FUNC_2(VAR_0, VAR_7,
        !(VAR_7 & VAR_2), 100,
        VAR_3);
 if (VAR_6)
  FUNC_0(&VAR_5->dev, "Failed to disable\n");
}
