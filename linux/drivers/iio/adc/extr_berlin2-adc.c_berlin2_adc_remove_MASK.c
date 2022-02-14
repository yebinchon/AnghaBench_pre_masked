
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct berlin2_adc_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iio_dev*) ;
 struct berlin2_adc_priv* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct iio_dev *VAR_3 = FUNC_2(VAR_2);
 struct berlin2_adc_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3);


 FUNC_3(VAR_4->regmap, VAR_0,
      VAR_1, 0);

 return 0;
}
