
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds9960_data {int als_adc_int_us; int lock; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int**) ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct apds9960_data *VAR_3, int VAR_4)
{
 int VAR_5 = -VAR_1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6][0] == VAR_4) {
   FUNC_1(&VAR_3->lock);
   VAR_5 = FUNC_3(VAR_3->regmap, VAR_0,
       VAR_2[VAR_6][1]);
   if (!VAR_5)
    VAR_3->als_adc_int_us = VAR_4;
   FUNC_2(&VAR_3->lock);
   break;
  }
 }

 return VAR_5;
}
