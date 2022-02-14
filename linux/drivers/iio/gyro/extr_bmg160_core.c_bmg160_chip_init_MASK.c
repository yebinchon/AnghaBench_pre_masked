
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmg160_data {int dps_range; unsigned int slope_thres; int regmap; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct bmg160_data*,int ) ;
 int FUNC_1 (struct bmg160_data*,int ) ;
 int FUNC_2 (struct device*,char*,unsigned int) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct bmg160_data *VAR_15)
{
 struct device *VAR_16 = FUNC_4(VAR_15->regmap);
 int VAR_17;
 unsigned int VAR_18;





 FUNC_7(VAR_15->regmap, VAR_2,
       VAR_3);
 FUNC_8(30000, 30700);

 VAR_17 = FUNC_5(VAR_15->regmap, VAR_9, &VAR_18);
 if (VAR_17 < 0) {
  FUNC_3(VAR_16, "Error reading reg_chip_id\n");
  return VAR_17;
 }

 FUNC_2(VAR_16, "Chip Id %x\n", VAR_18);
 if (VAR_18 != VAR_0) {
  FUNC_3(VAR_16, "invalid chip %x\n", VAR_18);
  return -VAR_14;
 }

 VAR_17 = FUNC_1(VAR_15, VAR_7);
 if (VAR_17 < 0)
  return VAR_17;


 FUNC_8(500, 1000);


 VAR_17 = FUNC_0(VAR_15, VAR_1);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_17 = FUNC_7(VAR_15->regmap, VAR_12, VAR_8);
 if (VAR_17 < 0) {
  FUNC_3(VAR_16, "Error writing reg_range\n");
  return VAR_17;
 }
 VAR_15->dps_range = VAR_8;

 VAR_17 = FUNC_5(VAR_15->regmap, VAR_13, &VAR_18);
 if (VAR_17 < 0) {
  FUNC_3(VAR_16, "Error reading reg_slope_thres\n");
  return VAR_17;
 }
 VAR_15->slope_thres = VAR_18;


 VAR_17 = FUNC_6(VAR_15->regmap, VAR_10,
     VAR_4, 0);
 if (VAR_17 < 0) {
  FUNC_3(VAR_16, "Error updating bits in reg_int_en_1\n");
  return VAR_17;
 }

 VAR_17 = FUNC_7(VAR_15->regmap, VAR_11,
      VAR_5 |
      VAR_6);
 if (VAR_17 < 0) {
  FUNC_3(VAR_16,
   "Error writing reg_motion_intr\n");
  return VAR_17;
 }

 return 0;
}
