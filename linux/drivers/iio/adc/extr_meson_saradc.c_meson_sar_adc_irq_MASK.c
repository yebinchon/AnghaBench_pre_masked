
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_sar_adc_priv {int done; int regmap; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct meson_sar_adc_priv* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct iio_dev *VAR_7 = VAR_6;
 struct meson_sar_adc_priv *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9, VAR_10;
 u32 VAR_11;

 FUNC_3(VAR_8->regmap, VAR_2, &VAR_11);
 VAR_9 = FUNC_0(VAR_4, VAR_11);
 VAR_10 = FUNC_0(VAR_3, VAR_11);

 if (VAR_9 < VAR_10)
  return VAR_1;

 FUNC_1(&VAR_8->done);

 return VAR_0;
}
