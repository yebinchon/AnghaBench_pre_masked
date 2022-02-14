
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;






 char VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_adapter*,union i2c_smbus_data*,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_adapter*,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct i2c_adapter *VAR_7, u16 VAR_8,
    unsigned short VAR_9, char VAR_10,
    u8 VAR_11, int VAR_12, union i2c_smbus_data *VAR_13)
{
 int VAR_14;

 switch (VAR_12) {
 case 133:
  FUNC_4(VAR_4,
        ((VAR_8 & 0x7f) << 1) | (VAR_10 & 0x01));
  VAR_12 = VAR_3;
  break;
 case 136:
  FUNC_4(VAR_4,
        ((VAR_8 & 0x7f) << 1) | (VAR_10 & 0x01));
  if (VAR_10 == VAR_1)
   FUNC_4(VAR_6, VAR_11);
  VAR_12 = 131;
  break;
 case 135:
  FUNC_4(VAR_4,
        ((VAR_8 & 0x7f) << 1) | (VAR_10 & 0x01));
  FUNC_4(VAR_6, VAR_11);
  if (VAR_10 == VAR_1)
   FUNC_4(VAR_5, VAR_13->byte);
  VAR_12 = 130;
  break;
 case 134:
 case 132:
  FUNC_4(VAR_4,
        ((VAR_8 & 0x7f) << 1) | (VAR_10 & 0x01));
  FUNC_4(VAR_6, VAR_11);
  if (VAR_10 == VAR_1) {
   FUNC_4(VAR_5, VAR_13->word & 0xff);
   FUNC_4(VAR_5 + 1, (VAR_13->word & 0xff00) >> 8);
  }
  VAR_12 = (VAR_12 == 134 ?
   129 : 128);
  break;
 case 137:
  FUNC_4(VAR_4,
        ((VAR_8 & 0x7f) << 1) | (VAR_10 & 0x01));
  FUNC_4(VAR_6, VAR_11);
  VAR_12 = VAR_2;
  return FUNC_1(VAR_7, VAR_13, VAR_10);
 default:
  FUNC_0(&VAR_7->dev, "Unsupported transaction %d\n", VAR_12);
  return -VAR_0;
 }

 VAR_14 = FUNC_3(VAR_7, VAR_12);
 if (VAR_14)
  return VAR_14;

 if ((VAR_12 != 129) &&
  ((VAR_10 == VAR_1) || (VAR_12 == VAR_3))) {
  return 0;
 }

 switch (VAR_12) {
 case 131:
 case 130:
  VAR_13->byte = FUNC_2(VAR_5);
  break;
 case 129:
 case 128:
  VAR_13->word = FUNC_2(VAR_5) +
        (FUNC_2(VAR_5 + 1) << 8);
  break;
 }

 return 0;
}
