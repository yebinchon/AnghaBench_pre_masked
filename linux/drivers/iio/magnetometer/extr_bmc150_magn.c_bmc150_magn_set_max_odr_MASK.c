
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmc150_magn_data {int max_odr; int dev; int regmap; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bmc150_magn_data*,int*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct bmc150_magn_data *VAR_3, int VAR_4,
       int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 if (VAR_4 <= 0) {
  VAR_7 = FUNC_4(VAR_3->regmap, VAR_0,
      &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_4 = FUNC_0(VAR_8);
 }
 if (VAR_5 <= 0) {
  VAR_7 = FUNC_4(VAR_3->regmap, VAR_1,
      &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5 = FUNC_1(VAR_8);
 }
 if (VAR_6 <= 0) {
  VAR_7 = FUNC_2(VAR_3, &VAR_6);
  if (VAR_7 < 0)
   return VAR_7;
 }

 VAR_9 = 1000000 / (145 * VAR_4 + 500 * VAR_5 + 980);
 if (VAR_6 > VAR_9) {
  FUNC_3(VAR_3->dev,
   "Can't set oversampling with sampling freq %d\n",
   VAR_6);
  return -VAR_2;
 }
 VAR_3->max_odr = VAR_9;

 return 0;
}
