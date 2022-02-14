
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apds9960_data {int pxs_gain; int lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct apds9960_data *VAR_8, int VAR_9)
{
 int VAR_10 = -VAR_6;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7); VAR_11++) {
  if (VAR_7[VAR_11] == VAR_9) {

   FUNC_1(&VAR_8->lock);
   VAR_10 = FUNC_3(VAR_8->regmap,
    VAR_3,
    VAR_4,
    VAR_11 << VAR_5);
   if (VAR_10) {
    FUNC_2(&VAR_8->lock);
    break;
   }

   VAR_10 = FUNC_3(VAR_8->regmap,
    VAR_0,
    VAR_1,
    VAR_11 << VAR_2);
   if (!VAR_10)
    VAR_8->pxs_gain = VAR_11;
   FUNC_2(&VAR_8->lock);
   break;
  }
 }

 return VAR_10;
}
