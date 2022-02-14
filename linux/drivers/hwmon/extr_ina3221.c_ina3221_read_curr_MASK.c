
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct ina3221_input {int shunt_resistor; } ;
struct ina3221_data {int * fields; int reg_config; int regmap; int single_shot; struct ina3221_input* inputs; } ;
struct device {int dummy; } ;


 long FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ina3221_data* FUNC_1 (struct device*) ;





 size_t** VAR_3 ;
 int FUNC_2 (struct ina3221_data*,int) ;
 int FUNC_3 (struct ina3221_data*,size_t,int*) ;
 int FUNC_4 (struct ina3221_data*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4, u32 VAR_5,
        int VAR_6, long *VAR_7)
{
 struct ina3221_data *VAR_8 = FUNC_1(VAR_4);
 struct ina3221_input *VAR_9 = &VAR_8->inputs[VAR_6];
 int VAR_10 = VAR_9->shunt_resistor;
 u8 VAR_11 = VAR_3[VAR_5][VAR_6];
 int VAR_12, VAR_13, VAR_14;

 switch (VAR_5) {
 case 130:
  if (!FUNC_2(VAR_8, VAR_6))
   return -VAR_0;


  if (VAR_8->single_shot)
   FUNC_6(VAR_8->regmap, VAR_2,
         VAR_8->reg_config);

  VAR_14 = FUNC_4(VAR_8);
  if (VAR_14)
   return VAR_14;


 case 132:
 case 129:
  VAR_14 = FUNC_3(VAR_8, VAR_11, &VAR_12);
  if (VAR_14)
   return VAR_14;


  VAR_13 = VAR_12 * 40000;

  *VAR_7 = FUNC_0(VAR_13, VAR_10);
  return 0;
 case 131:
 case 128:

  if (!FUNC_2(VAR_8, VAR_6)) {

   *VAR_7 = 0;
   return 0;
  }
  VAR_14 = FUNC_5(VAR_8->fields[VAR_11], &VAR_12);
  if (VAR_14)
   return VAR_14;
  *VAR_7 = VAR_12;
  return 0;
 default:
  return -VAR_1;
 }
}
