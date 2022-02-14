
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct iproc_adc_priv {int chan_val; int chan_id; int mutex; int regmap; int completion; } ;
struct iio_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 struct iproc_adc_priv* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__,int*) ;
 int FUNC_8 (int ,scalar_t__,int,int) ;
 int FUNC_9 (int ,scalar_t__,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct iio_dev *VAR_23,
      int VAR_24,
      u16 *VAR_25)
{
 int VAR_26 = 0;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 int VAR_30 = 0;
 struct iproc_adc_priv *VAR_31 = FUNC_3(VAR_23);

 FUNC_5(&VAR_31->mutex);





 VAR_31->chan_val = -1;
 VAR_31->chan_id = VAR_24;

 FUNC_10(&VAR_31->completion);

 FUNC_8(VAR_31->regmap, VAR_22,
   VAR_18 | VAR_2,
   ((0x0 << VAR_24) << VAR_17) |
   VAR_2);


 VAR_27 = (FUNC_0(VAR_12) |
  (VAR_8 << VAR_6) |
  (0x1 << VAR_3));

 VAR_28 = VAR_13 | VAR_7 |
  VAR_4;
 FUNC_8(VAR_31->regmap, (VAR_10 +
    VAR_9 * VAR_24),
    VAR_28, VAR_27);


 FUNC_8(VAR_31->regmap, (VAR_11 +
     VAR_9 * VAR_24),
     VAR_14,
     0x1);


 FUNC_8(VAR_31->regmap, (VAR_5 +
     VAR_9 *
     VAR_24),
     VAR_15,
     VAR_20);
 FUNC_7(VAR_31->regmap, VAR_21, &VAR_27);


 VAR_27 |= (FUNC_0(VAR_24) << VAR_17);
 FUNC_9(VAR_31->regmap, VAR_21, VAR_27);
 FUNC_7(VAR_31->regmap, VAR_21, &VAR_29);
 while (VAR_29 != VAR_27) {
  VAR_30++;

  if (VAR_30 > VAR_16)
   break;

  FUNC_11(10);
  FUNC_8(VAR_31->regmap, VAR_21,
    VAR_18,
    ((0x1 << VAR_24) <<
    VAR_17));

  FUNC_7(VAR_31->regmap, VAR_21, &VAR_29);
 }

 if (VAR_30) {
  FUNC_1(&VAR_23->dev,
   "IntMask failed (%d times)", VAR_30);
  if (VAR_30 > VAR_16) {
   FUNC_2(&VAR_23->dev,
    "IntMask set failed. Read will likely fail.");
   VAR_26 = -VAR_0;
   goto adc_err;
  };
 }
 FUNC_7(VAR_31->regmap, VAR_21, &VAR_29);

 if (FUNC_12(&VAR_31->completion,
  VAR_19) > 0) {


  *VAR_25 = VAR_31->chan_val & 0xFFFF;
  VAR_26 = sizeof(*VAR_25);

 } else {






  VAR_26 = -VAR_1;
  goto adc_err;
 }
 FUNC_6(&VAR_31->mutex);

 return VAR_26;

adc_err:
 FUNC_8(VAR_31->regmap, VAR_21,
      VAR_18,
      ((0x0 << VAR_24) << VAR_17));

 FUNC_8(VAR_31->regmap, VAR_22,
      VAR_18,
      ((0x0 << VAR_24) << VAR_17));

 FUNC_2(&VAR_23->dev, "Timed out waiting for ADC data!\n");
 FUNC_4(VAR_23);
 FUNC_6(&VAR_31->mutex);

 return VAR_26;
}
