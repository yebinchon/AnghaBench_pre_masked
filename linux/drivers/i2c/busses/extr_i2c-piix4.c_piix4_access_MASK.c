
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_piix4_adapdata {unsigned short smba; } ;
struct i2c_adapter {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;




 char VAR_5 ;



 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,int) ;
 struct i2c_piix4_adapdata* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct i2c_adapter*) ;

__attribute__((used)) static s32 FUNC_5(struct i2c_adapter * VAR_13, u16 VAR_14,
   unsigned short VAR_15, char VAR_16,
   u8 VAR_17, int VAR_18, union i2c_smbus_data * VAR_19)
{
 struct i2c_piix4_adapdata *VAR_20 = FUNC_1(VAR_13);
 unsigned short VAR_21 = VAR_20->smba;
 int VAR_22, VAR_23;
 int VAR_24;

 switch (VAR_18) {
 case 133:
  FUNC_3((VAR_14 << 1) | VAR_16,
         VAR_8);
  VAR_18 = VAR_6;
  break;
 case 135:
  FUNC_3((VAR_14 << 1) | VAR_16,
         VAR_8);
  if (VAR_16 == VAR_5)
   FUNC_3(VAR_17, VAR_9);
  VAR_18 = 130;
  break;
 case 134:
  FUNC_3((VAR_14 << 1) | VAR_16,
         VAR_8);
  FUNC_3(VAR_17, VAR_9);
  if (VAR_16 == VAR_5)
   FUNC_3(VAR_19->byte, VAR_11);
  VAR_18 = 129;
  break;
 case 132:
  FUNC_3((VAR_14 << 1) | VAR_16,
         VAR_8);
  FUNC_3(VAR_17, VAR_9);
  if (VAR_16 == VAR_5) {
   FUNC_3(VAR_19->word & 0xff, VAR_11);
   FUNC_3((VAR_19->word & 0xff00) >> 8, VAR_12);
  }
  VAR_18 = 128;
  break;
 case 136:
  FUNC_3((VAR_14 << 1) | VAR_16,
         VAR_8);
  FUNC_3(VAR_17, VAR_9);
  if (VAR_16 == VAR_5) {
   VAR_23 = VAR_19->block[0];
   if (VAR_23 == 0 || VAR_23 > VAR_4)
    return -VAR_0;
   FUNC_3(VAR_23, VAR_11);
   FUNC_2(VAR_10);
   for (VAR_22 = 1; VAR_22 <= VAR_23; VAR_22++)
    FUNC_3(VAR_19->block[VAR_22], VAR_7);
  }
  VAR_18 = 131;
  break;
 default:
  FUNC_0(&VAR_13->dev, "Unsupported transaction %d\n", VAR_18);
  return -VAR_2;
 }

 FUNC_3((VAR_18 & 0x1C) + (VAR_1 & 1), VAR_10);

 VAR_24 = FUNC_4(VAR_13);
 if (VAR_24)
  return VAR_24;

 if ((VAR_16 == VAR_5) || (VAR_18 == VAR_6))
  return 0;


 switch (VAR_18) {
 case 130:
 case 129:
  VAR_19->byte = FUNC_2(VAR_11);
  break;
 case 128:
  VAR_19->word = FUNC_2(VAR_11) + (FUNC_2(VAR_12) << 8);
  break;
 case 131:
  VAR_19->block[0] = FUNC_2(VAR_11);
  if (VAR_19->block[0] == 0 || VAR_19->block[0] > VAR_4)
   return -VAR_3;
  FUNC_2(VAR_10);
  for (VAR_22 = 1; VAR_22 <= VAR_19->block[0]; VAR_22++)
   VAR_19->block[VAR_22] = FUNC_2(VAR_7);
  break;
 }
 return 0;
}
