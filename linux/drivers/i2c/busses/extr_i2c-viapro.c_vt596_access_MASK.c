
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union i2c_smbus_data {int byte; int word; int* block; } ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;





 char VAR_3 ;

 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;





 int VAR_11 ;

 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__ VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct i2c_adapter *VAR_14, u16 VAR_15,
  unsigned short VAR_16, char VAR_17, u8 VAR_18,
  int VAR_19, union i2c_smbus_data *VAR_20)
{
 int VAR_21;
 int VAR_22;

 switch (VAR_19) {
 case 135:
  VAR_19 = VAR_11;
  break;
 case 139:
  if (VAR_17 == VAR_4)
   FUNC_2(VAR_18, VAR_7);
  VAR_19 = 132;
  break;
 case 138:
  FUNC_2(VAR_18, VAR_7);
  if (VAR_17 == VAR_4)
   FUNC_2(VAR_20->byte, VAR_9);
  VAR_19 = 131;
  break;
 case 134:
  FUNC_2(VAR_18, VAR_7);
  if (VAR_17 == VAR_4) {
   FUNC_2(VAR_20->word & 0xff, VAR_9);
   FUNC_2((VAR_20->word & 0xff00) >> 8, VAR_10);
  }
  VAR_19 = 128;
  break;
 case 136:
  FUNC_2(VAR_18, VAR_7);
  FUNC_2(VAR_20->word & 0xff, VAR_9);
  FUNC_2((VAR_20->word & 0xff00) >> 8, VAR_10);
  VAR_19 = 129;
  break;
 case 137:
  if (!(VAR_13 & VAR_1))
   goto exit_unsupported;
  if (VAR_17 == VAR_3)
   FUNC_2(VAR_20->block[0], VAR_9);

 case 140:
  FUNC_2(VAR_18, VAR_7);
  if (VAR_17 == VAR_4) {
   u8 VAR_23 = VAR_20->block[0];
   if (VAR_23 > VAR_2)
    VAR_23 = VAR_2;
   FUNC_2(VAR_23, VAR_9);
   FUNC_1(VAR_8);
   for (VAR_21 = 1; VAR_21 <= VAR_23; VAR_21++)
    FUNC_2(VAR_20->block[VAR_21], VAR_5);
  }
  VAR_19 = (VAR_19 == 137) ?
         130 : 133;
  break;
 default:
  goto exit_unsupported;
 }

 FUNC_2(((VAR_15 & 0x7f) << 1) | VAR_17, VAR_6);

 VAR_22 = FUNC_3(VAR_19);
 if (VAR_22)
  return VAR_22;

 if (VAR_19 == 129)
  VAR_17 = VAR_3;

 if ((VAR_17 == VAR_4) || (VAR_19 == VAR_11))
  return 0;

 switch (VAR_19) {
 case 132:
 case 131:
  VAR_20->byte = FUNC_1(VAR_9);
  break;
 case 128:
 case 129:
  VAR_20->word = FUNC_1(VAR_9) + (FUNC_1(VAR_10) << 8);
  break;
 case 130:
 case 133:
  VAR_20->block[0] = FUNC_1(VAR_9);
  if (VAR_20->block[0] > VAR_2)
   VAR_20->block[0] = VAR_2;
  FUNC_1(VAR_8);
  for (VAR_21 = 1; VAR_21 <= VAR_20->block[0]; VAR_21++)
   VAR_20->block[VAR_21] = FUNC_1(VAR_5);
  break;
 }
 return 0;

exit_unsupported:
 FUNC_0(&VAR_12.dev, "Unsupported transaction %d\n",
   VAR_19);
 return -VAR_0;
}
