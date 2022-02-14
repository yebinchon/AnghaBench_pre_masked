
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmc150_accel_data {int mutex; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct bmc150_accel_data *VAR_2, int *VAR_3)
{
 struct device *VAR_4 = FUNC_3(VAR_2->regmap);
 int VAR_5;
 unsigned int VAR_6;

 FUNC_1(&VAR_2->mutex);

 VAR_5 = FUNC_4(VAR_2->regmap, VAR_0, &VAR_6);
 if (VAR_5 < 0) {
  FUNC_0(VAR_4, "Error reading reg_temp\n");
  FUNC_2(&VAR_2->mutex);
  return VAR_5;
 }
 *VAR_3 = FUNC_5(VAR_6, 7);

 FUNC_2(&VAR_2->mutex);

 return VAR_1;
}
