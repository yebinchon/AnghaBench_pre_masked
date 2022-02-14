
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wdt87xx_sys_param {int vendor_id; int product_id; int xmls_id1; int xmls_id2; int phy_ch_x; int phy_ch_y; int phy_w; int phy_h; int scaling_factor; int max_x; int plat_id; int fw_id; int max_y; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int,int,int,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (struct i2c_client*,int ,int*,int) ;
 int FUNC_5 (struct i2c_client*,int*,int) ;
 int FUNC_6 (struct i2c_client*,int ,int*,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_15,
    struct wdt87xx_sys_param *VAR_16)
{
 u8 VAR_17[VAR_11];
 int VAR_18;

 VAR_18 = FUNC_4(VAR_15, VAR_14, VAR_17, 18);
 if (VAR_18) {
  FUNC_1(&VAR_15->dev, "failed to get device desc\n");
  return VAR_18;
 }

 VAR_16->vendor_id = FUNC_3(VAR_17 + VAR_8);
 VAR_16->product_id = FUNC_3(VAR_17 + VAR_7);

 VAR_18 = FUNC_6(VAR_15, VAR_12, VAR_17, 34);
 if (VAR_18) {
  FUNC_1(&VAR_15->dev, "failed to get parameters\n");
  return VAR_18;
 }

 VAR_16->xmls_id1 = FUNC_3(VAR_17 + VAR_5);
 VAR_16->xmls_id2 = FUNC_3(VAR_17 + VAR_6);
 VAR_16->phy_ch_x = FUNC_3(VAR_17 + VAR_1);
 VAR_16->phy_ch_y = FUNC_3(VAR_17 + VAR_2);
 VAR_16->phy_w = FUNC_3(VAR_17 + VAR_4) / 10;
 VAR_16->phy_h = FUNC_3(VAR_17 + VAR_3) / 10;


 VAR_16->scaling_factor =
   FUNC_3(VAR_17 + VAR_0);

 VAR_16->max_x = VAR_10;
 VAR_16->max_y = FUNC_0(VAR_10 * VAR_16->phy_h,
      VAR_16->phy_w);

 VAR_18 = FUNC_6(VAR_15, VAR_13, VAR_17, 8);
 if (VAR_18) {
  FUNC_1(&VAR_15->dev, "failed to get platform id\n");
  return VAR_18;
 }

 VAR_16->plat_id = VAR_17[1];

 VAR_17[0] = 0xf2;
 VAR_18 = FUNC_5(VAR_15, VAR_17, 16);
 if (VAR_18) {
  FUNC_1(&VAR_15->dev, "failed to get firmware id\n");
  return VAR_18;
 }

 if (VAR_17[0] != 0xf2) {
  FUNC_1(&VAR_15->dev, "wrong id of fw response: 0x%x\n",
   VAR_17[0]);
  return -VAR_9;
 }

 VAR_16->fw_id = FUNC_3(&VAR_17[1]);

 FUNC_2(&VAR_15->dev,
   "fw_id: 0x%x, plat_id: 0x%x, xml_id1: %04x, xml_id2: %04x\n",
   VAR_16->fw_id, VAR_16->plat_id,
   VAR_16->xmls_id1, VAR_16->xmls_id2);

 return 0;
}
