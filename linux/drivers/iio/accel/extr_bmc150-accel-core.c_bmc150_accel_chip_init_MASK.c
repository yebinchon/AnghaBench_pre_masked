
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bmc150_accel_data {int range; int regmap; int slope_dur; int slope_thres; TYPE_1__* chip_info; } ;
struct TYPE_3__ {unsigned int chip_id; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 int VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_1 (struct bmc150_accel_data*,int ,int ) ;
 int FUNC_2 (struct bmc150_accel_data*,int ,int ) ;
 int FUNC_3 (struct bmc150_accel_data*) ;
 int FUNC_4 (struct device*,char*,unsigned int) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct device* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,unsigned int*) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct bmc150_accel_data *VAR_14)
{
 struct device *VAR_15 = FUNC_6(VAR_14->regmap);
 int VAR_16, VAR_17;
 unsigned int VAR_18;





 FUNC_8(VAR_14->regmap, VAR_9,
       VAR_10);
 FUNC_9(1800, 2500);

 VAR_16 = FUNC_7(VAR_14->regmap, VAR_6, &VAR_18);
 if (VAR_16 < 0) {
  FUNC_5(VAR_15, "Error: Reading chip id\n");
  return VAR_16;
 }

 FUNC_4(VAR_15, "Chip Id %x\n", VAR_18);
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++) {
  if (VAR_13[VAR_17].chip_id == VAR_18) {
   VAR_14->chip_info = &VAR_13[VAR_17];
   break;
  }
 }

 if (!VAR_14->chip_info) {
  FUNC_5(VAR_15, "Invalid chip %x\n", VAR_18);
  return -VAR_12;
 }

 VAR_16 = FUNC_2(VAR_14, VAR_11, 0);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_1(VAR_14, VAR_0, 0);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_8(VAR_14->regmap, VAR_8,
      VAR_1);
 if (VAR_16 < 0) {
  FUNC_5(VAR_15, "Error writing reg_pmu_range\n");
  return VAR_16;
 }

 VAR_14->range = VAR_1;


 VAR_14->slope_thres = VAR_3;
 VAR_14->slope_dur = VAR_2;
 VAR_16 = FUNC_3(VAR_14);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_8(VAR_14->regmap, VAR_7,
      VAR_4 |
      VAR_5);
 if (VAR_16 < 0) {
  FUNC_5(VAR_15, "Error writing reg_int_rst_latch\n");
  return VAR_16;
 }

 return 0;
}
