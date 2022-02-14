
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int lock; int prev_mode; int * regmap_fields; } ;
typedef enum fxas21002c_fields { ____Placeholder_fxas21002c_fields } fxas21002c_fields ;


 int VAR_0 ;
 int FUNC_0 (struct fxas21002c_data*) ;
 int FUNC_1 (struct fxas21002c_data*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct fxas21002c_data *VAR_1,
       enum fxas21002c_fields VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_2(&VAR_1->lock);

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 < 0) {
  VAR_5 = VAR_4;
  goto out_unlock;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_0);
 if (VAR_5 < 0)
  goto out_unlock;

 VAR_5 = FUNC_4(VAR_1->regmap_fields[VAR_2], VAR_3);
 if (VAR_5 < 0)
  goto out_unlock;

 VAR_5 = FUNC_1(VAR_1, VAR_1->prev_mode);

out_unlock:
 FUNC_3(&VAR_1->lock);

 return VAR_5;
}
