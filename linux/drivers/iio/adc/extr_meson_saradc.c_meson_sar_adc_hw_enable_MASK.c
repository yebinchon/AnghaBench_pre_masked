
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct meson_sar_adc_priv {int vref; int core_clk; int regmap; int adc_clk; } ;
struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 struct meson_sar_adc_priv* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*,int) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct iio_dev *VAR_4)
{
 struct meson_sar_adc_priv *VAR_5 = FUNC_4(VAR_4);
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  goto err_lock;

 VAR_6 = FUNC_10(VAR_5->vref);
 if (VAR_6 < 0) {
  FUNC_3(VAR_4->dev.parent,
   "failed to enable vref regulator\n");
  goto err_vref;
 }

 VAR_6 = FUNC_2(VAR_5->core_clk);
 if (VAR_6) {
  FUNC_3(VAR_4->dev.parent, "failed to enable core clk\n");
  goto err_core_clk;
 }

 VAR_7 = FUNC_0(VAR_1, 1);
 FUNC_8(VAR_5->regmap, VAR_0,
      VAR_1, VAR_7);

 FUNC_6(VAR_4, 1);

 FUNC_8(VAR_5->regmap, VAR_2,
      VAR_3,
      VAR_3);

 FUNC_11(5);

 VAR_6 = FUNC_2(VAR_5->adc_clk);
 if (VAR_6) {
  FUNC_3(VAR_4->dev.parent, "failed to enable adc clk\n");
  goto err_adc_clk;
 }

 FUNC_7(VAR_4);

 return 0;

err_adc_clk:
 FUNC_8(VAR_5->regmap, VAR_2,
      VAR_3, 0);
 FUNC_6(VAR_4, 0);
 FUNC_1(VAR_5->core_clk);
err_core_clk:
 FUNC_9(VAR_5->vref);
err_vref:
 FUNC_7(VAR_4);
err_lock:
 return VAR_6;
}
