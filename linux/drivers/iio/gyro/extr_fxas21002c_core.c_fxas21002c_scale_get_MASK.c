
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int lock; int * regmap_fields; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct fxas21002c_data*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int FUNC_4(struct fxas21002c_data *VAR_1, int *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_1(&VAR_1->lock);
 VAR_5 = FUNC_3(VAR_1->regmap_fields[VAR_0], &VAR_3);
 if (VAR_5 < 0)
  goto data_unlock;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4 < 0) {
  VAR_5 = VAR_4;
  goto data_unlock;
 }

 *VAR_2 = VAR_4;

data_unlock:
 FUNC_2(&VAR_1->lock);

 return VAR_5;
}
