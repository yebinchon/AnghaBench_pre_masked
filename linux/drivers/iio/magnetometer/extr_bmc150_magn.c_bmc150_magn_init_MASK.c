
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bmc150_magn_preset {int odr; int rep_z; int rep_xy; } ;
struct bmc150_magn_data {int dev; int regmap; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 struct bmc150_magn_preset* VAR_8 ;
 int FUNC_2 (struct bmc150_magn_data*,int ,int ,int ) ;
 int FUNC_3 (struct bmc150_magn_data*,int ) ;
 int FUNC_4 (struct bmc150_magn_data*,int ,int) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct bmc150_magn_data *VAR_9)
{
 int VAR_10, VAR_11;
 struct bmc150_magn_preset VAR_12;

 VAR_10 = FUNC_4(VAR_9, VAR_3,
      0);
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev,
   "Failed to bring up device from suspend mode\n");
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_9->regmap, VAR_4, &VAR_11);
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev, "Failed reading chip id\n");
  goto err_poweroff;
 }
 if (VAR_11 != VAR_0) {
  FUNC_6(VAR_9->dev, "Invalid chip id 0x%x\n", VAR_11);
  VAR_10 = -VAR_7;
  goto err_poweroff;
 }
 FUNC_5(VAR_9->dev, "Chip id %x\n", VAR_11);

 VAR_12 = VAR_8[VAR_1];
 VAR_10 = FUNC_3(VAR_9, VAR_12.odr);
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev, "Failed to set ODR to %d\n",
   VAR_12.odr);
  goto err_poweroff;
 }

 VAR_10 = FUNC_8(VAR_9->regmap, VAR_5,
      FUNC_0(VAR_12.rep_xy));
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev, "Failed to set REP XY to %d\n",
   VAR_12.rep_xy);
  goto err_poweroff;
 }

 VAR_10 = FUNC_8(VAR_9->regmap, VAR_6,
      FUNC_1(VAR_12.rep_z));
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev, "Failed to set REP Z to %d\n",
   VAR_12.rep_z);
  goto err_poweroff;
 }

 VAR_10 = FUNC_2(VAR_9, VAR_12.rep_xy, VAR_12.rep_z,
          VAR_12.odr);
 if (VAR_10 < 0)
  goto err_poweroff;

 VAR_10 = FUNC_4(VAR_9, VAR_2,
      1);
 if (VAR_10 < 0) {
  FUNC_6(VAR_9->dev, "Failed to power on device\n");
  goto err_poweroff;
 }

 return 0;

err_poweroff:
 FUNC_4(VAR_9, VAR_3, 1);
 return VAR_10;
}
