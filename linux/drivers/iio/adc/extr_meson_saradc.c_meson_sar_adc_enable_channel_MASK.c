
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct meson_sar_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {scalar_t__ address; scalar_t__ type; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct meson_sar_adc_priv* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_9,
     const struct iio_chan_spec *VAR_10)
{
 struct meson_sar_adc_priv *VAR_11 = FUNC_2(VAR_9);
 u32 VAR_12;






 VAR_12 = FUNC_0(VAR_2, 0);
 FUNC_3(VAR_11->regmap, VAR_1,
      VAR_2, VAR_12);


 VAR_12 = FUNC_0(FUNC_1(0),
       VAR_10->address);
 FUNC_3(VAR_11->regmap, VAR_1,
      FUNC_1(0), VAR_12);

 VAR_12 = FUNC_0(VAR_6,
       VAR_10->address);
 FUNC_3(VAR_11->regmap, VAR_5,
      VAR_6,
      VAR_12);

 VAR_12 = FUNC_0(VAR_7,
       VAR_10->address);
 FUNC_3(VAR_11->regmap, VAR_5,
      VAR_7,
      VAR_12);

 if (VAR_10->address == VAR_8) {
  if (VAR_10->type == VAR_0)
   VAR_12 = VAR_4;
  else
   VAR_12 = 0;

  FUNC_3(VAR_11->regmap,
       VAR_3,
       VAR_4, VAR_12);
 }
}
