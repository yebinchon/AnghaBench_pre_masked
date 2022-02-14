
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int lock; int * regmap_fields; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fxas21002c_data*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct fxas21002c_data *VAR_2, int *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 FUNC_1(&VAR_2->lock);
 VAR_5 = FUNC_3(VAR_2->regmap_fields[VAR_0], &VAR_4);
 if (VAR_5 < 0)
  goto data_unlock;

 *VAR_3 = FUNC_0(VAR_2, VAR_4) * 10000;

 VAR_5 = VAR_1;

data_unlock:
 FUNC_2(&VAR_2->lock);

 return VAR_5;
}
