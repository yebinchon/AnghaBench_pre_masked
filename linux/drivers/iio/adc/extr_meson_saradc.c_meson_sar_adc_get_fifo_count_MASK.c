
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct meson_sar_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct iio_dev *VAR_2)
{
 struct meson_sar_adc_priv *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 FUNC_2(VAR_3->regmap, VAR_0, &VAR_4);

 return FUNC_0(VAR_1, VAR_4);
}
