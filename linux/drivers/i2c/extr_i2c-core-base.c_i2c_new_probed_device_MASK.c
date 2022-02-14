
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct i2c_board_info {unsigned short addr; } ;
struct i2c_adapter {int dev; } ;


 unsigned short const VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned short const) ;
 scalar_t__ FUNC_2 (unsigned short const) ;
 scalar_t__ FUNC_3 (struct i2c_adapter*,unsigned short const) ;
 int FUNC_4 (struct i2c_adapter*,unsigned short) ;
 struct i2c_client* FUNC_5 (struct i2c_adapter*,struct i2c_board_info*) ;

struct i2c_client *
FUNC_6(struct i2c_adapter *VAR_1,
        struct i2c_board_info *VAR_2,
        unsigned short const *VAR_3,
        int (*VAR_4)(struct i2c_adapter *VAR_5, unsigned short VAR_6))
{
 int VAR_7;

 if (!VAR_4)
  VAR_4 = FUNC_4;

 for (VAR_7 = 0; VAR_3[VAR_7] != VAR_0; VAR_7++) {

  if (FUNC_2(VAR_3[VAR_7]) < 0) {
   FUNC_1(&VAR_1->dev, "Invalid 7-bit address 0x%02x\n",
     VAR_3[VAR_7]);
   continue;
  }


  if (FUNC_3(VAR_1, VAR_3[VAR_7])) {
   FUNC_0(&VAR_1->dev,
    "Address 0x%02x already in use, not probing\n",
    VAR_3[VAR_7]);
   continue;
  }


  if (VAR_4(VAR_1, VAR_3[VAR_7]))
   break;
 }

 if (VAR_3[VAR_7] == VAR_0) {
  FUNC_0(&VAR_1->dev, "Probing failed, no device found\n");
  return ((void*)0);
 }

 VAR_2->addr = VAR_3[VAR_7];
 return FUNC_5(VAR_1, VAR_2);
}
