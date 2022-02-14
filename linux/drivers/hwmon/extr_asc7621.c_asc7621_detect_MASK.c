
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_board_info {int type; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_2__ {int company_id; int verstep_id; int name; int verstep_reg; int company_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i2c_adapter*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_6,
     struct i2c_board_info *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 int VAR_9, VAR_10, VAR_11;

 if (!FUNC_1(VAR_8, VAR_2))
  return -VAR_0;

 for (VAR_11 = VAR_1; VAR_11 <= VAR_4; VAR_11++) {

  if (!FUNC_4(VAR_11, VAR_6->addr))
   continue;

  VAR_9 = FUNC_2(VAR_6,
   VAR_5[VAR_11].company_reg);
  VAR_10 = FUNC_2(VAR_6,
   VAR_5[VAR_11].verstep_reg);

  if (VAR_9 == VAR_5[VAR_11].company_id &&
      VAR_10 == VAR_5[VAR_11].verstep_id) {
   FUNC_3(VAR_7->type, VAR_5[VAR_11].name,
    VAR_3);

   FUNC_0(&VAR_8->dev, "Matched %s at 0x%02x\n",
     VAR_5[VAR_11].name, VAR_6->addr);
   return 0;
  }
 }

 return -VAR_0;
}
