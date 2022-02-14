
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct iqs5xx_private {int bl_status; } ;
struct iqs5xx_dev_id_info {scalar_t__ major_ver; int bl_status; int proj_num; int prod_num; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;





 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 struct iqs5xx_private* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,scalar_t__*,int) ;
 int FUNC_6 (struct i2c_client*,int ,scalar_t__*) ;
 int FUNC_7 (struct i2c_client*,int ,scalar_t__) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_10)
{
 struct iqs5xx_private *VAR_11 = FUNC_2(VAR_10);
 struct iqs5xx_dev_id_info *VAR_12;
 int VAR_13;
 u8 VAR_14;
 u8 VAR_15[sizeof(*VAR_12) + 1];

 VAR_13 = FUNC_5(VAR_10, VAR_4,
      &VAR_15[1], sizeof(*VAR_12));
 if (VAR_13)
  return FUNC_4(VAR_10);
 VAR_15[0] = 0;
 VAR_12 = (struct iqs5xx_dev_id_info *)&VAR_15[(VAR_15[1] > 0) ? 0 : 1];

 switch (FUNC_0(VAR_12->prod_num)) {
 case 131:
 case 130:
 case 132:
  break;
 default:
  FUNC_1(&VAR_10->dev, "Unrecognized product number: %u\n",
   FUNC_0(VAR_12->prod_num));
  return -VAR_0;
 }

 switch (FUNC_0(VAR_12->proj_num)) {
 case 129:
  FUNC_1(&VAR_10->dev, "Unsupported project number: %u\n",
   FUNC_0(VAR_12->proj_num));
  return FUNC_4(VAR_10);
 case 128:
  break;
 default:
  FUNC_1(&VAR_10->dev, "Unrecognized project number: %u\n",
   FUNC_0(VAR_12->proj_num));
  return -VAR_0;
 }

 if (VAR_12->major_ver < VAR_3) {
  FUNC_1(&VAR_10->dev, "Unsupported major version: %u\n",
   VAR_12->major_ver);
  return FUNC_4(VAR_10);
 }

 switch (VAR_12->bl_status) {
 case 134:
 case 133:
  break;
 default:
  FUNC_1(&VAR_10->dev,
   "Unrecognized bootloader status: 0x%02X\n",
   VAR_12->bl_status);
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_6(VAR_10, VAR_7, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_14 |= VAR_5;
 VAR_14 &= ~VAR_6;
 VAR_13 = FUNC_7(VAR_10, VAR_7, VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_14 = VAR_9 | VAR_2;
 VAR_13 = FUNC_7(VAR_10, VAR_8, VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_7(VAR_10, VAR_1, 0);
 if (VAR_13)
  return VAR_13;

 VAR_11->bl_status = VAR_12->bl_status;
 FUNC_8(100);

 return 0;
}
