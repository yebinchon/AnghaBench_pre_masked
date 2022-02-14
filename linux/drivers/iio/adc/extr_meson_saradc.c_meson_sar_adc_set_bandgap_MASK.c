
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_sar_adc_priv {int regmap; struct meson_sar_adc_param* param; } ;
struct meson_sar_adc_param {scalar_t__ bandgap_reg; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct meson_sar_adc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct iio_dev *VAR_3, bool VAR_4)
{
 struct meson_sar_adc_priv *VAR_5 = FUNC_0(VAR_3);
 const struct meson_sar_adc_param *VAR_6 = VAR_5->param;
 u32 VAR_7;

 if (VAR_6->bandgap_reg == VAR_1)
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_0;

 FUNC_1(VAR_5->regmap, VAR_6->bandgap_reg, VAR_7,
      VAR_4 ? VAR_7 : 0);
}
