
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_adc_priv {int regmap; } ;
struct iio_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct iproc_adc_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct iio_dev *VAR_2)
{
 u32 VAR_3;
 int VAR_4;
 struct iproc_adc_priv *VAR_5 = FUNC_1(VAR_2);

 VAR_4 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev,
   "failed to read IPROC_REGCTL2 %d\n", VAR_4);
  return;
 }

 VAR_3 &= ~VAR_0;
 VAR_4 = FUNC_3(VAR_5->regmap, VAR_1, VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->dev,
   "failed to write IPROC_REGCTL2 %d\n", VAR_4);
  return;
 }
}
