
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {unsigned char byte; unsigned char word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct nforce2_smbus {int dummy; } ;
struct i2c_adapter {int dev; struct nforce2_smbus* algo_data; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;

 int VAR_4 ;



 char VAR_5 ;

 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned char VAR_18 ;
 unsigned char VAR_19 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static s32 FUNC_4(struct i2c_adapter *VAR_20, u16 VAR_21,
  unsigned short VAR_22, char VAR_23,
  u8 VAR_24, int VAR_25, union i2c_smbus_data *VAR_26)
{
 struct nforce2_smbus *VAR_27 = VAR_20->algo_data;
 unsigned char VAR_28, VAR_29;
 u8 VAR_30;
 int VAR_31, VAR_32;

 VAR_28 = (VAR_23 == VAR_5) ? VAR_17 :
  VAR_19;
 VAR_29 = (VAR_22 & VAR_3) ? VAR_15 : 0;

 switch (VAR_25) {
 case 129:
  VAR_28 |= VAR_16;
  VAR_23 = VAR_6;
  break;

 case 131:
  if (VAR_23 == VAR_6)
   FUNC_3(VAR_24, VAR_9);
  VAR_28 |= VAR_13;
  break;

 case 130:
  FUNC_3(VAR_24, VAR_9);
  if (VAR_23 == VAR_6)
   FUNC_3(VAR_26->byte, VAR_10);
  VAR_28 |= VAR_14;
  break;

 case 128:
  FUNC_3(VAR_24, VAR_9);
  if (VAR_23 == VAR_6) {
   FUNC_3(VAR_26->word, VAR_10);
   FUNC_3(VAR_26->word >> 8, VAR_10 + 1);
  }
  VAR_28 |= VAR_18 | VAR_29;
  break;

 case 132:
  FUNC_3(VAR_24, VAR_9);
  if (VAR_23 == VAR_6) {
   VAR_30 = VAR_26->block[0];
   if ((VAR_30 == 0) || (VAR_30 > VAR_4)) {
    FUNC_0(&VAR_20->dev,
     "Transaction failed (requested block size: %d)\n",
     VAR_30);
    return -VAR_0;
   }
   FUNC_3(VAR_30, VAR_8);
   for (VAR_31 = 0; VAR_31 < VAR_4; VAR_31++)
    FUNC_3(VAR_26->block[VAR_31 + 1],
           VAR_10 + VAR_31);
  }
  VAR_28 |= VAR_12 | VAR_29;
  break;

 default:
  FUNC_0(&VAR_20->dev, "Unsupported transaction %d\n", VAR_25);
  return -VAR_1;
 }

 FUNC_3((VAR_21 & 0x7f) << 1, VAR_7);
 FUNC_3(VAR_28, VAR_11);

 VAR_32 = FUNC_2(VAR_20);
 if (VAR_32)
  return VAR_32;

 if (VAR_23 == VAR_6)
  return 0;

 switch (VAR_25) {
 case 131:
 case 130:
  VAR_26->byte = FUNC_1(VAR_10);
  break;

 case 128:
  VAR_26->word = FUNC_1(VAR_10) |
        (FUNC_1(VAR_10 + 1) << 8);
  break;

 case 132:
  VAR_30 = FUNC_1(VAR_8);
  if ((VAR_30 <= 0) || (VAR_30 > VAR_4)) {
   FUNC_0(&VAR_20->dev,
    "Transaction failed (received block size: 0x%02x)\n",
    VAR_30);
   return -VAR_2;
  }
  for (VAR_31 = 0; VAR_31 < VAR_30; VAR_31++)
   VAR_26->block[VAR_31 + 1] = FUNC_1(VAR_10 + VAR_31);
  VAR_26->block[0] = VAR_30;
  break;
 }

 return 0;
}
