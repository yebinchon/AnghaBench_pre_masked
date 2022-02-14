
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct berlin2_adc_priv {unsigned int data; int data_available; int wq; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct berlin2_adc_priv* FUNC_0 (void*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct berlin2_adc_priv *VAR_7 = FUNC_0(VAR_6);
 unsigned VAR_8;

 FUNC_1(VAR_7->regmap, VAR_2, &VAR_8);
 if (VAR_8 & VAR_3) {
  FUNC_1(VAR_7->regmap, VAR_0, &VAR_7->data);
  VAR_7->data &= VAR_1;

  VAR_8 &= ~VAR_3;
  FUNC_2(VAR_7->regmap, VAR_2, VAR_8);

  VAR_7->data_available = 1;
  FUNC_3(&VAR_7->wq);
 }

 return VAR_4;
}
