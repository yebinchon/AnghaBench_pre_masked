
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds9960_data {int als_gain; int lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct apds9960_data *VAR_4, int VAR_5)
{
 int VAR_6 = -VAR_2;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_3[VAR_7] == VAR_5) {
   FUNC_1(&VAR_4->lock);
   VAR_6 = FUNC_3(VAR_4->regmap,
     VAR_0,
     VAR_1, VAR_7);
   if (!VAR_6)
    VAR_4->als_gain = VAR_7;
   FUNC_2(&VAR_4->lock);
   break;
  }
 }

 return VAR_6;
}
