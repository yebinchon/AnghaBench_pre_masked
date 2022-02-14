
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u16 ;
struct device {int dummy; } ;
struct bme680_data {int regmap; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bme680_data*,int,unsigned int) ;
 int FUNC_2 (struct bme680_data*) ;
 int FUNC_3 (struct bme680_data*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ,int ,unsigned int*,int) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_8(struct bme680_data *VAR_10,
      int *VAR_11)
{
 struct device *VAR_12 = FUNC_6(VAR_10->regmap);
 int VAR_13;
 __be16 VAR_14 = 0;
 unsigned int VAR_15;
 u16 VAR_16;
 u8 VAR_17;


 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13 < 0) {
  FUNC_4(VAR_12, "failed to set gas config\n");
  return VAR_13;
 }


 VAR_13 = FUNC_3(VAR_10, 1);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_7(VAR_10->regmap, VAR_6, &VAR_15);
 if (VAR_15 & VAR_1) {
  FUNC_4(VAR_12, "gas measurement incomplete\n");
  return -VAR_7;
 }

 VAR_13 = FUNC_7(VAR_10->regmap, VAR_5, &VAR_15);
 if (VAR_13 < 0) {
  FUNC_4(VAR_12, "failed to read gas_r_lsb register\n");
  return VAR_13;
 }







 if ((VAR_15 & VAR_3) == 0) {
  FUNC_4(VAR_12, "heater failed to reach the target temperature\n");
  return -VAR_8;
 }

 VAR_13 = FUNC_5(VAR_10->regmap, VAR_4,
          (u8 *) &VAR_14, 2);
 if (VAR_13 < 0) {
  FUNC_4(VAR_12, "failed to read gas resistance\n");
  return VAR_13;
 }

 VAR_17 = VAR_15 & VAR_2;
 VAR_16 = FUNC_0(VAR_14) >> VAR_0;

 *VAR_11 = FUNC_1(VAR_10, VAR_16, VAR_17);
 return VAR_9;
}
