
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct iio_dev* FUNC_1 (struct stm32_adc*) ;
 int FUNC_2 (struct stm32_adc*,int ,int ) ;
 int FUNC_3 (int ,int,int,int,int ) ;
 int FUNC_4 (struct stm32_adc*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct stm32_adc *VAR_6)
{
 struct iio_dev *VAR_7 = FUNC_1(VAR_6);
 int VAR_8;
 u32 VAR_9;

 FUNC_4(VAR_6, VAR_1, VAR_3);

 VAR_8 = FUNC_3(VAR_1, VAR_9,
        !(VAR_9 & (VAR_2)),
        100, VAR_5);
 if (VAR_8)
  FUNC_0(&VAR_7->dev, "stop failed\n");

 FUNC_2(VAR_6, VAR_0, VAR_4);
}
