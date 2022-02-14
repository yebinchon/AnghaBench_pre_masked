
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct ina3221_input {int shunt_resistor; } ;
struct ina3221_data {int regmap; struct ina3221_input* inputs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 struct ina3221_data* FUNC_2 (struct device*) ;
 int ** VAR_2 ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3, u32 VAR_4,
         int VAR_5, long VAR_6)
{
 struct ina3221_data *VAR_7 = FUNC_2(VAR_3);
 struct ina3221_input *VAR_8 = &VAR_7->inputs[VAR_5];
 int VAR_9 = VAR_8->shunt_resistor;
 u8 VAR_10 = VAR_2[VAR_4][VAR_5];
 int VAR_11, VAR_12, VAR_13;


 VAR_12 = FUNC_1(VAR_6,
          VAR_1 / VAR_9,
          VAR_0 / VAR_9);

 VAR_13 = FUNC_0(VAR_12 * VAR_9, 1000);


 VAR_13 = FUNC_1(VAR_13, -163800, 163800);


 VAR_11 = FUNC_0(VAR_13, 5) & 0xfff8;

 return FUNC_3(VAR_7->regmap, VAR_10, VAR_11);
}
