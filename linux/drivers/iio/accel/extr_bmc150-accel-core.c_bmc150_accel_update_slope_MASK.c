
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmc150_accel_data {int slope_dur; int slope_thres; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct bmc150_accel_data *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_3->regmap);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_3->regmap, VAR_1,
     VAR_3->slope_thres);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4, "Error writing reg_int_6\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_3->regmap, VAR_0,
     VAR_2, VAR_3->slope_dur);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4, "Error updating reg_int_5\n");
  return VAR_5;
 }

 FUNC_0(VAR_4, "%x %x\n", VAR_3->slope_thres, VAR_3->slope_dur);

 return VAR_5;
}
