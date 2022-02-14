
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;




 char VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,int ) ;
 TYPE_1__ VAR_16 ;
 int FUNC_7 () ;

__attribute__((used)) static s32 FUNC_8(struct i2c_adapter *VAR_17, u16 VAR_18,
   unsigned short VAR_19, char VAR_20,
   u8 VAR_21, int VAR_22, union i2c_smbus_data *VAR_23)
{
 int VAR_24, VAR_25, VAR_26, VAR_27;


 VAR_26 = FUNC_3(VAR_14) & 0x0f;
 if (VAR_26 & 0x08) {
  FUNC_0(&VAR_16.dev, "SMBus busy (%02x)\n", VAR_26);
  return -VAR_0;
 }
 VAR_26 = FUNC_4(VAR_9);
 if (!VAR_26) {






  FUNC_1(&VAR_16.dev,
   "Clock divider uninitialized. Setting defaults\n");
  FUNC_6(VAR_15 / (4 * 100), VAR_9);
 }

 FUNC_0(&VAR_16.dev, "access size: %d %s\n", VAR_22,
  (VAR_20)?"READ":"WRITE");
 switch (VAR_22) {
 case 133:
  FUNC_5((VAR_18 << 1) | VAR_20, VAR_8);
  VAR_22 = VAR_6;
  break;
 case 135:
  FUNC_5((VAR_18 << 1) | VAR_20, VAR_8);
  if (VAR_20 == VAR_5)
   FUNC_5(VAR_21, VAR_10);
  VAR_22 = 130;
  break;
 case 134:
  FUNC_5((VAR_18 << 1) | VAR_20, VAR_8);
  FUNC_5(VAR_21, VAR_10);
  if (VAR_20 == VAR_5)
   FUNC_5(VAR_23->byte, VAR_12);
  VAR_22 = 129;
  break;
 case 132:
  FUNC_5((VAR_18 << 1) | VAR_20, VAR_8);
  FUNC_5(VAR_21, VAR_10);
  if (VAR_20 == VAR_5) {
   FUNC_5(VAR_23->word & 0xff, VAR_12);
   FUNC_5((VAR_23->word & 0xff00) >> 8, VAR_13);
  }
  VAR_22 = 128;
  break;
 case 136:
  FUNC_5((VAR_18 << 1) | VAR_20, VAR_8);
  FUNC_5(VAR_21, VAR_10);
  if (VAR_20 == VAR_5) {
   VAR_25 = VAR_23->block[0];
   if (VAR_25 == 0 || VAR_25 > VAR_4)
    return -VAR_1;
   FUNC_5(VAR_25, VAR_12);
   for (VAR_24 = 1; VAR_24 <= VAR_25; VAR_24++)
    FUNC_5(VAR_23->block[VAR_24], VAR_7+VAR_24-1);
  }
  VAR_22 = 131;
  break;
 default:
  FUNC_2(&VAR_17->dev, "Unsupported transaction %d\n", VAR_22);
  return -VAR_2;
 }
 FUNC_0(&VAR_16.dev, "write size %d to 0x%04x\n", VAR_22, VAR_11);
 FUNC_5((FUNC_3(VAR_11) & 0xb0) | (VAR_22 & 0x7), VAR_11);

 VAR_27 = FUNC_7();
 if (VAR_27)
  return VAR_27;

 if ((VAR_20 == VAR_5) || (VAR_22 == VAR_6))
  return 0;

 switch (VAR_22) {
 case 130:
 case 129:
  VAR_23->byte = FUNC_3(VAR_12);
  break;
 case 128:
  VAR_23->word = FUNC_3(VAR_12) + (FUNC_3(VAR_13) << 8);
  break;
 case 131:
  VAR_23->block[0] = FUNC_3(VAR_12);
  if (VAR_23->block[0] == 0 || VAR_23->block[0] > VAR_4)
   return -VAR_3;
  for (VAR_24 = 1; VAR_24 <= VAR_23->block[0]; VAR_24++)
   VAR_23->block[VAR_24] = FUNC_3(VAR_7+VAR_24-1);
  break;
 }
 return 0;
}
