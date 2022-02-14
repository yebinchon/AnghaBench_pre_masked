
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct dln2_adc {int trig; } ;


 struct dln2_adc* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ) ;
 struct iio_dev* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0, u16 VAR_1,
      const void *VAR_2, int VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_2(VAR_0);
 struct dln2_adc *VAR_5 = FUNC_0(VAR_4);


 FUNC_1(VAR_5->trig);
}
