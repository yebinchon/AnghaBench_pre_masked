
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;
typedef enum chips { ____Placeholder_chips } chips ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (int *,char*,char const* const,int) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_14,
    struct i2c_board_info *VAR_15)
{
 enum chips VAR_16;
 struct i2c_adapter *VAR_17 = VAR_14->adapter;
 static const char * const VAR_18[] = {
  "TMP421", "TMP422", "TMP423",
  "TMP441", "TMP442"
 };
 int VAR_19 = VAR_14->addr;
 u8 VAR_20;

 if (!FUNC_1(VAR_17, VAR_1))
  return -VAR_0;

 VAR_20 = FUNC_2(VAR_14, VAR_6);
 if (VAR_20 != VAR_5)
  return -VAR_0;

 VAR_20 = FUNC_2(VAR_14, VAR_3);
 if (VAR_20 & 0xf8)
  return -VAR_0;

 VAR_20 = FUNC_2(VAR_14, VAR_7);
 if (VAR_20 & 0x7f)
  return -VAR_0;

 VAR_20 = FUNC_2(VAR_14, VAR_4);
 switch (VAR_20) {
 case 132:
  VAR_16 = VAR_8;
  break;
 case 131:
  if (VAR_19 == 0x2a)
   return -VAR_0;
  VAR_16 = VAR_10;
  break;
 case 130:
  if (VAR_19 != 0x4c && VAR_19 != 0x4d)
   return -VAR_0;
  VAR_16 = VAR_11;
  break;
 case 129:
  VAR_16 = VAR_12;
  break;
 case 128:
  if (VAR_19 != 0x4c && VAR_19 != 0x4d)
   return -VAR_0;
  VAR_16 = VAR_13;
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(VAR_15->type, VAR_9[VAR_16].name, VAR_2);
 FUNC_0(&VAR_17->dev, "Detected TI %s chip at 0x%02x\n",
   VAR_18[VAR_16], VAR_14->addr);

 return 0;
}
