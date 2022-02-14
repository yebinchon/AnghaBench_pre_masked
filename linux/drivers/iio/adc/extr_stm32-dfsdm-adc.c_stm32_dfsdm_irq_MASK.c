
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dfsdm_adc {unsigned int* buffer; int fl_id; int completion; TYPE_1__* dfsdm; } ;
struct regmap {int dummy; } ;
struct iio_dev {int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 struct iio_dev* FUNC_6 (struct stm32_dfsdm_adc*) ;
 int FUNC_7 (struct regmap*,int ,unsigned int*) ;
 int FUNC_8 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct stm32_dfsdm_adc *VAR_7 = VAR_6;
 struct iio_dev *VAR_8 = FUNC_6(VAR_7);
 struct regmap *VAR_9 = VAR_7->dfsdm->regmap;
 unsigned int VAR_10, VAR_11;

 FUNC_7(VAR_9, FUNC_2(VAR_7->fl_id), &VAR_10);
 FUNC_7(VAR_9, FUNC_0(VAR_7->fl_id), &VAR_11);

 if (VAR_10 & VAR_2) {

  FUNC_7(VAR_9, FUNC_3(VAR_7->fl_id), VAR_7->buffer);
  FUNC_4(&VAR_7->completion);
 }

 if (VAR_10 & VAR_3) {
  if (VAR_11 & VAR_0)
   FUNC_5(&VAR_8->dev, "Overrun detected\n");
  FUNC_8(VAR_9, FUNC_1(VAR_7->fl_id),
       VAR_1,
       VAR_1);
 }

 return VAR_4;
}
