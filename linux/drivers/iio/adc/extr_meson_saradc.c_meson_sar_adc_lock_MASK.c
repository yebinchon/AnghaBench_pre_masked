
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
 int VAR_2 ;
 int VAR_3 ;
 struct meson_sar_adc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_4)
{
 struct meson_sar_adc_priv *VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7 = 10000;

 FUNC_1(&VAR_4->mlock);

 if (VAR_5->param->has_bl30_integration) {

  FUNC_4(VAR_5->regmap, VAR_1,
    VAR_3,
    VAR_3);





  do {
   FUNC_5(1);
   FUNC_3(VAR_5->regmap, VAR_1, &VAR_6);
  } while (VAR_6 & VAR_2 && VAR_7--);

  if (VAR_7 < 0) {
   FUNC_2(&VAR_4->mlock);
   return -VAR_0;
  }
 }

 return 0;
}
