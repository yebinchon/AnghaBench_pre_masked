
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int lock; int * regmap_fields; int regmap; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct fxas21002c_data*) ;
 int FUNC_2 (struct fxas21002c_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,unsigned int*) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,int) ;

__attribute__((used)) static int FUNC_8(struct fxas21002c_data *VAR_2, int *VAR_3)
{
 struct device *VAR_4 = FUNC_6(VAR_2->regmap);
 unsigned int VAR_5;
 int VAR_6;

 FUNC_3(&VAR_2->lock);
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 < 0)
  goto data_unlock;

 VAR_6 = FUNC_5(VAR_2->regmap_fields[VAR_0], &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4, "failed to read temp: %d\n", VAR_6);
  goto data_unlock;
 }

 *VAR_3 = FUNC_7(VAR_5, 7);

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 0)
  goto data_unlock;

 VAR_6 = VAR_1;

data_unlock:
 FUNC_4(&VAR_2->lock);

 return VAR_6;
}
