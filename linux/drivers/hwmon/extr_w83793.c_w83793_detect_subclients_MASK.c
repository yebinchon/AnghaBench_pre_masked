
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83793_data {TYPE_1__** lm75; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *,struct i2c_adapter*,int) ;
 int* VAR_3 ;
 int FUNC_3 (struct i2c_adapter*) ;
 struct w83793_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6;
 int VAR_7 = VAR_4->addr;
 u8 VAR_8;
 struct i2c_adapter *VAR_9 = VAR_4->adapter;
 struct w83793_data *VAR_10 = FUNC_4(VAR_4);

 VAR_6 = FUNC_3(VAR_9);
 if (VAR_3[0] == VAR_6 && VAR_3[1] == VAR_7) {
  for (VAR_5 = 2; VAR_5 <= 3; VAR_5++) {
   if (VAR_3[VAR_5] < 0x48
       || VAR_3[VAR_5] > 0x4f) {
    FUNC_1(&VAR_4->dev,
     "invalid subclient "
     "address %d; must be 0x48-0x4f\n",
     VAR_3[VAR_5]);
    return -VAR_0;
   }
  }
  FUNC_6(VAR_4, VAR_2,
       (VAR_3[2] & 0x07) |
       ((VAR_3[3] & 0x07) << 4));
 }

 VAR_8 = FUNC_5(VAR_4, VAR_2);
 if (!(VAR_8 & 0x08))
  VAR_10->lm75[0] = FUNC_2(&VAR_4->dev, VAR_9,
         0x48 + (VAR_8 & 0x7));
 if (!(VAR_8 & 0x80)) {
  if (!FUNC_0(VAR_10->lm75[0])
      && ((VAR_8 & 0x7) == ((VAR_8 >> 4) & 0x7))) {
   FUNC_1(&VAR_4->dev,
    "duplicate addresses 0x%x, "
    "use force_subclients\n", VAR_10->lm75[0]->addr);
   return -VAR_1;
  }
  VAR_10->lm75[1] = FUNC_2(&VAR_4->dev, VAR_9,
         0x48 + ((VAR_8 >> 4) & 0x7));
 }

 return 0;
}
