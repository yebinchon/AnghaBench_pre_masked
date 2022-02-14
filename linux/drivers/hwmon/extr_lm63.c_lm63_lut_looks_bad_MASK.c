
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int lut_size; scalar_t__* pwm1; scalar_t__* temp8; int update_lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct lm63_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct lm63_data *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_1->update_lock);
 FUNC_1(VAR_1);

 for (VAR_2 = 1; VAR_2 < VAR_1->lut_size; VAR_2++) {
  if (VAR_1->pwm1[1 + VAR_2 - 1] > VAR_1->pwm1[1 + VAR_2]
   || VAR_1->temp8[3 + VAR_2 - 1] > VAR_1->temp8[3 + VAR_2]) {
   FUNC_0(VAR_0,
     "Lookup table doesn't look sane (check entries %d and %d)\n",
     VAR_2, VAR_2 + 1);
   break;
  }
 }
 FUNC_3(&VAR_1->update_lock);

 return VAR_2 == VAR_1->lut_size ? 0 : 1;
}
