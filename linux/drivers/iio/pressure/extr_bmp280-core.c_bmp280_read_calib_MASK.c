
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_buf ;
struct device {int dummy; } ;
struct bmp280_data {int regmap; struct device* dev; } ;
struct bmp280_calib {int T1; int T2; int T3; int P1; int P2; int P3; int P4; int P5; int P6; int P7; int P8; int P9; unsigned int H1; unsigned int H3; void* H6; void* H5; void* H4; void* H2; } ;
typedef int p_buf ;
typedef unsigned int __le16 ;


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
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int FUNC_0 (unsigned int*,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int*,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 void* FUNC_6 (unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct bmp280_data *VAR_23,
        struct bmp280_calib *VAR_24,
        unsigned int VAR_25)
{
 int VAR_26;
 unsigned int VAR_27;
 struct device *VAR_28 = VAR_23->dev;
 __le16 VAR_29[VAR_2 / 2];
 __le16 VAR_30[VAR_1 / 2];


 VAR_26 = FUNC_4(VAR_23->regmap, VAR_10,
          VAR_29, VAR_2);
 if (VAR_26 < 0) {
  FUNC_2(VAR_23->dev,
   "failed to read temperature calibration parameters\n");
  return VAR_26;
 }


 FUNC_0(VAR_29, sizeof(VAR_29));

 VAR_24->T1 = FUNC_3(VAR_29[VAR_20]);
 VAR_24->T2 = FUNC_3(VAR_29[VAR_21]);
 VAR_24->T3 = FUNC_3(VAR_29[VAR_22]);


 VAR_26 = FUNC_4(VAR_23->regmap, VAR_9,
          VAR_30, VAR_1);
 if (VAR_26 < 0) {
  FUNC_2(VAR_23->dev,
   "failed to read pressure calibration parameters\n");
  return VAR_26;
 }


 FUNC_0(VAR_30, sizeof(VAR_30));

 VAR_24->P1 = FUNC_3(VAR_30[VAR_11]);
 VAR_24->P2 = FUNC_3(VAR_30[VAR_12]);
 VAR_24->P3 = FUNC_3(VAR_30[VAR_13]);
 VAR_24->P4 = FUNC_3(VAR_30[VAR_14]);
 VAR_24->P5 = FUNC_3(VAR_30[VAR_15]);
 VAR_24->P6 = FUNC_3(VAR_30[VAR_16]);
 VAR_24->P7 = FUNC_3(VAR_30[VAR_17]);
 VAR_24->P8 = FUNC_3(VAR_30[VAR_18]);
 VAR_24->P9 = FUNC_3(VAR_30[VAR_19]);
 if (VAR_25 != VAR_0)
  return 0;

 VAR_26 = FUNC_5(VAR_23->regmap, VAR_3, &VAR_27);
 if (VAR_26 < 0) {
  FUNC_2(VAR_28, "failed to read H1 comp value\n");
  return VAR_26;
 }
 VAR_24->H1 = VAR_27;

 VAR_26 = FUNC_4(VAR_23->regmap, VAR_4, &VAR_27, 2);
 if (VAR_26 < 0) {
  FUNC_2(VAR_28, "failed to read H2 comp value\n");
  return VAR_26;
 }
 VAR_24->H2 = FUNC_6(FUNC_3(VAR_27), 15);

 VAR_26 = FUNC_5(VAR_23->regmap, VAR_5, &VAR_27);
 if (VAR_26 < 0) {
  FUNC_2(VAR_28, "failed to read H3 comp value\n");
  return VAR_26;
 }
 VAR_24->H3 = VAR_27;

 VAR_26 = FUNC_4(VAR_23->regmap, VAR_6, &VAR_27, 2);
 if (VAR_26 < 0) {
  FUNC_2(VAR_28, "failed to read H4 comp value\n");
  return VAR_26;
 }
 VAR_24->H4 = FUNC_6(((FUNC_1(VAR_27) >> 4) & 0xff0) |
      (FUNC_1(VAR_27) & 0xf), 11);

 VAR_26 = FUNC_4(VAR_23->regmap, VAR_7, &VAR_27, 2);
 if (VAR_26 < 0) {
  FUNC_2(VAR_28, "failed to read H5 comp value\n");
  return VAR_26;
 }
 VAR_24->H5 = FUNC_6(((FUNC_3(VAR_27) >> 4) & 0xfff), 11);

 VAR_26 = FUNC_5(VAR_23->regmap, VAR_8, &VAR_27);
 if (VAR_26 < 0) {
  FUNC_2(VAR_28, "failed to read H6 comp value\n");
  return VAR_26;
 }
 VAR_24->H6 = FUNC_6(VAR_27, 7);

 return 0;
}
