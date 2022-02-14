
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ina3221_data {int reg_config; int regmap; int single_shot; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ina3221_data* FUNC_0 (struct device*) ;


 int * VAR_5 ;
 long FUNC_1 (struct ina3221_data*,int) ;
 int FUNC_2 (struct ina3221_data*,int ,int*) ;
 int FUNC_3 (struct ina3221_data*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, u32 VAR_7, int VAR_8, long *VAR_9)
{
 const bool VAR_10 = VAR_8 > VAR_2;
 struct ina3221_data *VAR_11 = FUNC_0(VAR_6);
 u8 VAR_12 = VAR_5[VAR_8];
 int VAR_13, VAR_14;


 VAR_8 %= VAR_4;

 switch (VAR_7) {
 case 128:
  if (!FUNC_1(VAR_11, VAR_8))
   return -VAR_0;


  if (VAR_11->single_shot)
   FUNC_4(VAR_11->regmap, VAR_3,
         VAR_11->reg_config);

  VAR_14 = FUNC_3(VAR_11);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_2(VAR_11, VAR_12, &VAR_13);
  if (VAR_14)
   return VAR_14;





  *VAR_9 = VAR_13 * (VAR_10 ? 40 : 8);
  return 0;
 case 129:
  *VAR_9 = FUNC_1(VAR_11, VAR_8);
  return 0;
 default:
  return -VAR_1;
 }
}
