
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_adc_priv {int chan_val; int regmap; } ;
struct iio_dev {int num_channels; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*,int) ;
 struct iproc_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,scalar_t__,int*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 struct iproc_adc_priv *VAR_13 = FUNC_1(VAR_10);
 int VAR_14;


 VAR_14 = FUNC_3(VAR_13->regmap, VAR_8,
    VAR_3, 0);
 if (VAR_14) {
  FUNC_0(&VAR_10->dev,
   "failed to write IPROC_ANALOG_CONTROL %d\n", VAR_14);
  return VAR_14;
 }
 VAR_13->chan_val = -1;





 VAR_14 = FUNC_2(VAR_13->regmap, VAR_9, &VAR_11);
 if (VAR_14) {
  FUNC_0(&VAR_10->dev,
   "failed to read IPROC_REGCTL2 %d\n", VAR_14);
  return VAR_14;
 }

 VAR_11 &= ~(VAR_7 | VAR_5 | VAR_6);

 VAR_14 = FUNC_4(VAR_13->regmap, VAR_9, VAR_11);
 if (VAR_14) {
  FUNC_0(&VAR_10->dev,
   "failed to write IPROC_REGCTL2 %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_2(VAR_13->regmap, VAR_9, &VAR_11);
 if (VAR_14) {
  FUNC_0(&VAR_10->dev,
   "failed to read IPROC_REGCTL2 %d\n", VAR_14);
  return VAR_14;
 }

 VAR_11 |= VAR_4;
 VAR_14 = FUNC_4(VAR_13->regmap, VAR_9, VAR_11);
 if (VAR_14) {
  FUNC_0(&VAR_10->dev,
   "failed to write IPROC_REGCTL2 %d\n", VAR_14);
  return VAR_14;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10->num_channels;
  VAR_12++) {
  VAR_14 = FUNC_4(VAR_13->regmap,
    VAR_0 +
    VAR_2 * VAR_12, 0);
  if (VAR_14) {
   FUNC_0(&VAR_10->dev,
       "failed to write ADC_CHANNEL_INTERRUPT_MASK %d\n",
       VAR_14);
   return VAR_14;
  }

  VAR_14 = FUNC_4(VAR_13->regmap,
    VAR_1 +
    VAR_2 * VAR_12, 0);
  if (VAR_14) {
   FUNC_0(&VAR_10->dev,
       "failed to write ADC_CHANNEL_INTERRUPT_STATUS %d\n",
       VAR_14);
   return VAR_14;
  }
 }

 return 0;
}
