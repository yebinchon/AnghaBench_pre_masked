
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pmac_i2c_bus {int dummy; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;





 char VAR_2 ;

 int FUNC_0 (int *,char*,int,int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct pmac_i2c_bus* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct pmac_i2c_bus*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct pmac_i2c_bus*,int ) ;
 int FUNC_5 (struct pmac_i2c_bus*,int) ;
 int FUNC_6 (struct pmac_i2c_bus*,int,int,int,int*,int) ;

__attribute__((used)) static s32 FUNC_7( struct i2c_adapter* VAR_6,
     u16 VAR_7,
     unsigned short VAR_8,
     char VAR_9,
     u8 VAR_10,
     int VAR_11,
     union i2c_smbus_data* VAR_12)
{
 struct pmac_i2c_bus *VAR_13 = FUNC_2(VAR_6);
 int VAR_14 = 0;
 int VAR_15 = (VAR_9 == VAR_2);
 int VAR_16 = (VAR_7 << 1) | VAR_15;
 int VAR_17, VAR_18, VAR_19;
 u32 VAR_20;
 u8 *VAR_21;
 u8 VAR_22[2];

 if (VAR_11 == 129 || VAR_11 == 132) {
  VAR_17 = VAR_4;
  VAR_18 = 0;
  VAR_20 = 0;
 } else {
  VAR_17 = VAR_15 ? VAR_3 : VAR_5;
  VAR_18 = 1;
  VAR_20 = VAR_10;
 }

 switch (VAR_11) {
        case 129:
  VAR_21 = ((void*)0);
  VAR_19 = 0;
      break;
        case 132:
        case 131:
  VAR_21 = &VAR_12->byte;
  VAR_19 = 1;
      break;
        case 128:
  if (!VAR_15) {
   VAR_22[0] = VAR_12->word & 0xff;
   VAR_22[1] = (VAR_12->word >> 8) & 0xff;
  }
  VAR_21 = VAR_22;
  VAR_19 = 2;
      break;
        case 133:
  VAR_21 = VAR_12->block;
  VAR_19 = VAR_12->block[0] + 1;
  break;
 case 130:
  VAR_21 = &VAR_12->block[1];
  VAR_19 = VAR_12->block[0];
  break;

        default:
  return -VAR_0;
 }

 VAR_14 = FUNC_4(VAR_13, 0);
 if (VAR_14) {
  FUNC_1(&VAR_6->dev, "Failed to open I2C, err %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_5(VAR_13, VAR_17);
 if (VAR_14) {
  FUNC_1(&VAR_6->dev, "Failed to set I2C mode %d, err %d\n",
   VAR_17, VAR_14);
  goto bail;
 }

 VAR_14 = FUNC_6(VAR_13, VAR_16, VAR_18, VAR_20, VAR_21, VAR_19);
 if (VAR_14) {
  if (VAR_14 == -VAR_1)
   FUNC_0(&VAR_6->dev,
    "I2C transfer at 0x%02x failed, size %d, "
    "err %d\n", VAR_16 >> 1, VAR_11, VAR_14);
  else
   FUNC_1(&VAR_6->dev,
    "I2C transfer at 0x%02x failed, size %d, "
    "err %d\n", VAR_16 >> 1, VAR_11, VAR_14);
  goto bail;
 }

 if (VAR_11 == 128 && VAR_15) {
  VAR_12->word = ((u16)VAR_22[1]) << 8;
  VAR_12->word |= VAR_22[0];
 }

 bail:
 FUNC_3(VAR_13);
 return VAR_14;
}
