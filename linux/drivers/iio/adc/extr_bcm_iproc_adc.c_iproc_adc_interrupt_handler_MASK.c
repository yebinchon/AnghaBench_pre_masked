
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_adc_priv {int chan_id; int chan_val; int regmap; int completion; } ;
struct iio_dev {int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 struct iproc_adc_priv* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,scalar_t__,int*) ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_13, void *VAR_14)
{
 irqreturn_t VAR_15 = VAR_12;
 struct iproc_adc_priv *VAR_16;
 struct iio_dev *VAR_17 = VAR_14;
 unsigned int VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u32 VAR_22;

 VAR_16 = FUNC_3(VAR_17);

 FUNC_4(VAR_16->regmap, VAR_10, &VAR_19);
 FUNC_1(&VAR_17->dev, "iproc_adc_interrupt_handler(),INTRPT_STS:%x\n",
   VAR_19);

 VAR_20 = (VAR_19 & VAR_9) >> VAR_8;
 if (VAR_20) {
  FUNC_4(VAR_16->regmap,
       VAR_2 +
       VAR_3 * VAR_16->chan_id,
       &VAR_22);

  if (VAR_22 & VAR_7) {
   FUNC_4(VAR_16->regmap,
     VAR_4 +
     VAR_3 *
     VAR_16->chan_id,
     &VAR_21);

   VAR_18 = ((VAR_21 &
    VAR_6) >>
    VAR_5);
   if (VAR_18 >= 1) {
    FUNC_4(VAR_16->regmap,
     VAR_0 +
     VAR_3 *
     VAR_16->chan_id,
     &VAR_16->chan_val);
    FUNC_0(&VAR_16->completion);
   } else {
    FUNC_2(&VAR_17->dev,
     "No data rcvd on channel %d\n",
     VAR_16->chan_id);
   }
   FUNC_5(VAR_16->regmap,
     VAR_1 +
     VAR_3 *
     VAR_16->chan_id,
     (VAR_22 &
     ~(VAR_7)));
  }
  FUNC_5(VAR_16->regmap,
    VAR_2 +
    VAR_3 * VAR_16->chan_id,
    VAR_22);
  FUNC_5(VAR_16->regmap, VAR_10,
    VAR_20);
  VAR_15 = VAR_11;
 }

 return VAR_15;
}
