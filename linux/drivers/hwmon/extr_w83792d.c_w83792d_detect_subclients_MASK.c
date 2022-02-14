
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83792d_data {TYPE_1__** lm75; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *,struct i2c_adapter*,int) ;
 int* VAR_2 ;
 int FUNC_3 (struct i2c_adapter*) ;
 struct w83792d_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = VAR_3->addr;
 u8 VAR_7;
 struct i2c_adapter *VAR_8 = VAR_3->adapter;
 struct w83792d_data *VAR_9 = FUNC_4(VAR_3);

 VAR_5 = FUNC_3(VAR_8);
 if (VAR_2[0] == VAR_5 && VAR_2[1] == VAR_6) {
  for (VAR_4 = 2; VAR_4 <= 3; VAR_4++) {
   if (VAR_2[VAR_4] < 0x48 ||
       VAR_2[VAR_4] > 0x4f) {
    FUNC_1(&VAR_3->dev,
     "invalid subclient address %d; must be 0x48-0x4f\n",
     VAR_2[VAR_4]);
    return -VAR_0;
   }
  }
  FUNC_6(VAR_3, VAR_1,
     (VAR_2[2] & 0x07) |
     ((VAR_2[3] & 0x07) << 4));
 }

 VAR_7 = FUNC_5(VAR_3, VAR_1);
 if (!(VAR_7 & 0x08))
  VAR_9->lm75[0] = FUNC_2(&VAR_3->dev, VAR_8,
         0x48 + (VAR_7 & 0x7));
 if (!(VAR_7 & 0x80)) {
  if (!FUNC_0(VAR_9->lm75[0]) &&
   ((VAR_7 & 0x7) == ((VAR_7 >> 4) & 0x7))) {
   FUNC_1(&VAR_3->dev,
    "duplicate addresses 0x%x, use force_subclient\n",
    VAR_9->lm75[0]->addr);
   return -VAR_0;
  }
  VAR_9->lm75[1] = FUNC_2(&VAR_3->dev, VAR_8,
         0x48 + ((VAR_7 >> 4) & 0x7));
 }

 return 0;
}
