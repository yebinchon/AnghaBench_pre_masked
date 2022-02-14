
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmg160_data {int slope_thres; int regmap; int dready_trigger_on; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct device*,char*) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct bmg160_data *VAR_12,
          bool VAR_13)
{
 struct device *VAR_14 = FUNC_1(VAR_12->regmap);
 int VAR_15;


 VAR_15 = FUNC_2(VAR_12->regmap, VAR_8,
     VAR_1,
     (VAR_13 ? VAR_1 : 0));
 if (VAR_15 < 0) {
  FUNC_0(VAR_14, "Error updating bits reg_int_map0\n");
  return VAR_15;
 }


 if (VAR_13) {

  VAR_15 = FUNC_3(VAR_12->regmap, VAR_11,
       VAR_12->slope_thres);
  if (VAR_15 < 0) {
   FUNC_0(VAR_14, "Error writing reg_slope_thres\n");
   return VAR_15;
  }

  VAR_15 = FUNC_3(VAR_12->regmap, VAR_10,
       VAR_4 | VAR_5 |
       VAR_6);
  if (VAR_15 < 0) {
   FUNC_0(VAR_14, "Error writing reg_motion_intr\n");
   return VAR_15;
  }






  if (!VAR_12->dready_trigger_on) {
   VAR_15 = FUNC_3(VAR_12->regmap,
        VAR_9,
        VAR_2 |
        VAR_3);
   if (VAR_15 < 0) {
    FUNC_0(VAR_14, "Error writing reg_rst_latch\n");
    return VAR_15;
   }
  }

  VAR_15 = FUNC_3(VAR_12->regmap, VAR_7,
       VAR_0);

 } else {
  VAR_15 = FUNC_3(VAR_12->regmap, VAR_7, 0);
 }

 if (VAR_15 < 0) {
  FUNC_0(VAR_14, "Error writing reg_int_en0\n");
  return VAR_15;
 }

 return 0;
}
