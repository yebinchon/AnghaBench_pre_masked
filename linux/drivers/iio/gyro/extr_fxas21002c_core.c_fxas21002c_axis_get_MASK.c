
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxas21002c_data {int lock; int regmap; } ;
struct device {int dummy; } ;
typedef int axis_be ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct fxas21002c_data*) ;
 int FUNC_4 (struct fxas21002c_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int *,int) ;
 struct device* FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct fxas21002c_data *VAR_1,
          int VAR_2, int *VAR_3)
{
 struct device *VAR_4 = FUNC_8(VAR_1->regmap);
 __be16 VAR_5;
 int VAR_6;

 FUNC_5(&VAR_1->lock);
 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6 < 0)
  goto data_unlock;

 VAR_6 = FUNC_7(VAR_1->regmap, FUNC_0(VAR_2),
          &VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0) {
  FUNC_2(VAR_4, "failed to read axis: %d: %d\n", VAR_2, VAR_6);
  goto data_unlock;
 }

 *VAR_3 = FUNC_9(FUNC_1(VAR_5), 15);

 VAR_6 = FUNC_4(VAR_1);
 if (VAR_6 < 0)
  goto data_unlock;

 VAR_6 = VAR_0;

data_unlock:
 FUNC_6(&VAR_1->lock);

 return VAR_6;
}
