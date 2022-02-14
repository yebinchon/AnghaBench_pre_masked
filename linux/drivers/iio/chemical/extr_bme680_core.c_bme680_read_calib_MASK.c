
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct bme680_data {int regmap; } ;
struct bme680_calib {unsigned int par_t3; unsigned int par_p3; unsigned int par_p6; unsigned int par_p7; unsigned int par_p10; unsigned int par_h1; unsigned int par_h2; unsigned int par_h3; unsigned int par_h4; unsigned int par_h5; unsigned int par_h6; unsigned int par_h7; unsigned int par_gh1; unsigned int par_gh3; unsigned int res_heat_val; void* range_sw_err; void* res_heat_range; void* par_gh2; void* par_p9; void* par_p8; void* par_p5; void* par_p4; void* par_p2; void* par_p1; void* par_t2; void* par_t1; } ;
typedef int __le16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 void* FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct bme680_data *VAR_32,
        struct bme680_calib *VAR_33)
{
 struct device *VAR_34 = FUNC_4(VAR_32->regmap);
 unsigned int VAR_35, VAR_36, VAR_37;
 int VAR_38;
 __le16 VAR_39;


 VAR_38 = FUNC_3(VAR_32->regmap, VAR_29, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_T1_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_t1 = FUNC_2(VAR_39);

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_30, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_T2_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_t2 = FUNC_2(VAR_39);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_31, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_T3_REG\n");
  return VAR_38;
 }
 VAR_33->par_t3 = VAR_35;


 VAR_38 = FUNC_3(VAR_32->regmap, VAR_15, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P1_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_p1 = FUNC_2(VAR_39);

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_16, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P2_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_p2 = FUNC_2(VAR_39);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_17, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P3_REG\n");
  return VAR_38;
 }
 VAR_33->par_p3 = VAR_35;

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_18, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P4_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_p4 = FUNC_2(VAR_39);

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_19, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P5_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_p5 = FUNC_2(VAR_39);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_20, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P6_REG\n");
  return VAR_38;
 }
 VAR_33->par_p6 = VAR_35;

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_21, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P7_REG\n");
  return VAR_38;
 }
 VAR_33->par_p7 = VAR_35;

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_22, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P8_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_p8 = FUNC_2(VAR_39);

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_23, (u8 *) &VAR_39, 2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P9_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_p9 = FUNC_2(VAR_39);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_14, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_P10_REG\n");
  return VAR_38;
 }
 VAR_33->par_p10 = VAR_35;


 VAR_38 = FUNC_5(VAR_32->regmap, VAR_5, &VAR_36);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H1_MSB_REG\n");
  return VAR_38;
 }
 VAR_38 = FUNC_5(VAR_32->regmap, VAR_4, &VAR_37);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H1_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_h1 = (VAR_36 << VAR_13) |
   (VAR_37 & VAR_0);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_7, &VAR_36);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H2_MSB_REG\n");
  return VAR_38;
 }
 VAR_38 = FUNC_5(VAR_32->regmap, VAR_6, &VAR_37);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H2_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_h2 = (VAR_36 << VAR_13) |
   (VAR_37 >> VAR_13);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_8, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H3_REG\n");
  return VAR_38;
 }
 VAR_33->par_h3 = VAR_35;

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_9, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H4_REG\n");
  return VAR_38;
 }
 VAR_33->par_h4 = VAR_35;

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_10, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H5_REG\n");
  return VAR_38;
 }
 VAR_33->par_h5 = VAR_35;

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_11, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H6_REG\n");
  return VAR_38;
 }
 VAR_33->par_h6 = VAR_35;

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_12, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_H7_REG\n");
  return VAR_38;
 }
 VAR_33->par_h7 = VAR_35;


 VAR_38 = FUNC_5(VAR_32->regmap, VAR_1, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_GH1_REG\n");
  return VAR_38;
 }
 VAR_33->par_gh1 = VAR_35;

 VAR_38 = FUNC_3(VAR_32->regmap, VAR_2, (u8 *) &VAR_39,
          2);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_GH2_LSB_REG\n");
  return VAR_38;
 }
 VAR_33->par_gh2 = FUNC_2(VAR_39);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_3, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read BME680_GH3_REG\n");
  return VAR_38;
 }
 VAR_33->par_gh3 = VAR_35;


 VAR_38 = FUNC_5(VAR_32->regmap, VAR_25, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read resistance heat range\n");
  return VAR_38;
 }
 VAR_33->res_heat_range = FUNC_0(VAR_27, VAR_35);

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_26, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read resistance heat value\n");
  return VAR_38;
 }
 VAR_33->res_heat_val = VAR_35;

 VAR_38 = FUNC_5(VAR_32->regmap, VAR_24, &VAR_35);
 if (VAR_38 < 0) {
  FUNC_1(VAR_34, "failed to read range software error\n");
  return VAR_38;
 }
 VAR_33->range_sw_err = FUNC_0(VAR_28, VAR_35);

 return 0;
}
