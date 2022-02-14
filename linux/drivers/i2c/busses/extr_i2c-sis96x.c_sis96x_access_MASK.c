
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
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct i2c_adapter * VAR_6, u16 VAR_7,
    unsigned short VAR_8, char VAR_9,
    u8 VAR_10, int VAR_11, union i2c_smbus_data * VAR_12)
{
 int VAR_13;

 switch (VAR_11) {
 case 133:
  FUNC_3(VAR_3, ((VAR_7 & 0x7f) << 1) | (VAR_9 & 0x01));
  VAR_11 = VAR_2;
  break;

 case 136:
  FUNC_3(VAR_3, ((VAR_7 & 0x7f) << 1) | (VAR_9 & 0x01));
  if (VAR_9 == VAR_1)
   FUNC_3(VAR_5, VAR_10);
  VAR_11 = 131;
  break;

 case 135:
  FUNC_3(VAR_3, ((VAR_7 & 0x7f) << 1) | (VAR_9 & 0x01));
  FUNC_3(VAR_5, VAR_10);
  if (VAR_9 == VAR_1)
   FUNC_3(VAR_4, VAR_12->byte);
  VAR_11 = 130;
  break;

 case 134:
 case 132:
  FUNC_3(VAR_3, ((VAR_7 & 0x7f) << 1) | (VAR_9 & 0x01));
  FUNC_3(VAR_5, VAR_10);
  if (VAR_9 == VAR_1) {
   FUNC_3(VAR_4, VAR_12->word & 0xff);
   FUNC_3(VAR_4 + 1, (VAR_12->word & 0xff00) >> 8);
  }
  VAR_11 = (VAR_11 == 134 ?
   129 : 128);
  break;

 default:
  FUNC_0(&VAR_6->dev, "Unsupported transaction %d\n", VAR_11);
  return -VAR_0;
 }

 VAR_13 = FUNC_2(VAR_11);
 if (VAR_13)
  return VAR_13;

 if ((VAR_11 != 129) &&
  ((VAR_9 == VAR_1) || (VAR_11 == VAR_2)))
  return 0;

 switch (VAR_11) {
 case 131:
 case 130:
  VAR_12->byte = FUNC_1(VAR_4);
  break;

 case 128:
 case 129:
  VAR_12->word = FUNC_1(VAR_4) +
    (FUNC_1(VAR_4 + 1) << 8);
  break;
 }
 return 0;
}
