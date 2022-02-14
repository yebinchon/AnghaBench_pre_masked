
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bmc150_accel_interrupt_info {int en_bitmask; int en_reg; int map_bitmask; int map_reg; } ;
struct bmc150_accel_interrupt {int users; struct bmc150_accel_interrupt_info* info; } ;
struct bmc150_accel_data {int regmap; struct bmc150_accel_interrupt* interrupts; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bmc150_accel_data*,int) ;
 int FUNC_3 (struct device*,char*) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct bmc150_accel_data *VAR_0, int VAR_1,
          bool VAR_2)
{
 struct device *VAR_3 = FUNC_4(VAR_0->regmap);
 struct bmc150_accel_interrupt *VAR_4 = &VAR_0->interrupts[VAR_1];
 const struct bmc150_accel_interrupt_info *VAR_5 = VAR_4->info;
 int VAR_6;

 if (VAR_2) {
  if (FUNC_1(&VAR_4->users) > 1)
   return 0;
 } else {
  if (FUNC_0(&VAR_4->users) > 0)
   return 0;
 }
 VAR_6 = FUNC_2(VAR_0, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;


 VAR_6 = FUNC_5(VAR_0->regmap, VAR_5->map_reg, VAR_5->map_bitmask,
     (VAR_2 ? VAR_5->map_bitmask : 0));
 if (VAR_6 < 0) {
  FUNC_3(VAR_3, "Error updating reg_int_map\n");
  goto out_fix_power_state;
 }


 VAR_6 = FUNC_5(VAR_0->regmap, VAR_5->en_reg, VAR_5->en_bitmask,
     (VAR_2 ? VAR_5->en_bitmask : 0));
 if (VAR_6 < 0) {
  FUNC_3(VAR_3, "Error updating reg_int_en\n");
  goto out_fix_power_state;
 }

 return 0;

out_fix_power_state:
 FUNC_2(VAR_0, 0);
 return VAR_6;
}
