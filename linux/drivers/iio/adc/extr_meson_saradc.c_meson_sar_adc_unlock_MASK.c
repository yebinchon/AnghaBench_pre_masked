
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct meson_sar_adc_priv {int regmap; TYPE_1__* param; } ;
struct iio_dev {int mlock; } ;
struct TYPE_2__ {scalar_t__ has_bl30_integration; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct meson_sar_adc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct iio_dev *VAR_2)
{
 struct meson_sar_adc_priv *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->param->has_bl30_integration)

  FUNC_2(VAR_3->regmap, VAR_0,
    VAR_1, 0);

 FUNC_1(&VAR_2->mlock);
}
