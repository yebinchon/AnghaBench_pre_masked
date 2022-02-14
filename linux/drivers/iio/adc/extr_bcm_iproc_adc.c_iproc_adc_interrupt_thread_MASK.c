
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_adc_priv {int regmap; } ;
struct iio_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct iproc_adc_priv* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 struct iio_dev *VAR_11 = VAR_7;
 struct iproc_adc_priv *VAR_12 = FUNC_0(VAR_11);






 FUNC_1(VAR_12->regmap, VAR_3, &VAR_9);
 FUNC_1(VAR_12->regmap, VAR_2, &VAR_10);
 VAR_9 = VAR_9 & VAR_10;
 VAR_8 = (VAR_9 & VAR_1) >>
    VAR_0;
 if (VAR_8)
  return VAR_5;

 return VAR_4;
}
