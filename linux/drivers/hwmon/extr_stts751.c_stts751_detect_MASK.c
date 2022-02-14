
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_11,
     struct i2c_board_info *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_11->adapter;
 const char *VAR_14;
 int VAR_15;

 if (!FUNC_1(VAR_13, VAR_1))
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_11, VAR_5);
 if (VAR_15 != VAR_9)
  return -VAR_0;


 VAR_15 = FUNC_2(VAR_11, VAR_8);
 if (VAR_15 & 0xf)
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_11, VAR_3);
 if (VAR_15 & 0xf)
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_11, VAR_4);
 if (VAR_15 & 0xf)
  return -VAR_0;


 VAR_15 = FUNC_2(VAR_11, VAR_7);
 if (VAR_15 & 0x7f)
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_11, VAR_6);

 switch (VAR_15) {
 case 129:
  VAR_14 = "STTS751-0";
  break;
 case 128:
  VAR_14 = "STTS751-1";
  break;
 default:
  return -VAR_0;
 }
 FUNC_0(&VAR_11->dev, "Chip %s detected", VAR_14);

 FUNC_3(VAR_12->type, VAR_10[0].name, VAR_2);
 return 0;
}
