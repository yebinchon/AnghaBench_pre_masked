
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct asb100_data {void** lm75; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *,char*,int,...) ;
 int* VAR_2 ;
 int FUNC_5 (struct i2c_adapter*) ;
 struct asb100_data* FUNC_6 (struct i2c_client*) ;
 void* FUNC_7 (struct i2c_adapter*,unsigned short) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = VAR_3->addr;
 unsigned short VAR_8[2];
 struct asb100_data *VAR_9 = FUNC_6(VAR_3);
 struct i2c_adapter *VAR_10 = VAR_3->adapter;

 VAR_5 = FUNC_5(VAR_10);

 if (VAR_2[0] == VAR_5 && VAR_2[1] == VAR_7) {
  for (VAR_4 = 2; VAR_4 <= 3; VAR_4++) {
   if (VAR_2[VAR_4] < 0x48 ||
       VAR_2[VAR_4] > 0x4f) {
    FUNC_4(&VAR_3->dev,
     "invalid subclient address %d; must be 0x48-0x4f\n",
     VAR_2[VAR_4]);
    VAR_6 = -VAR_1;
    goto ERROR_SC_2;
   }
  }
  FUNC_3(VAR_3, VAR_0,
     (VAR_2[2] & 0x07) |
     ((VAR_2[3] & 0x07) << 4));
  VAR_8[0] = VAR_2[2];
  VAR_8[1] = VAR_2[3];
 } else {
  int VAR_11 = FUNC_2(VAR_3, VAR_0);
  VAR_8[0] = 0x48 + (VAR_11 & 0x07);
  VAR_8[1] = 0x48 + ((VAR_11 >> 4) & 0x07);
 }

 if (VAR_8[0] == VAR_8[1]) {
  FUNC_4(&VAR_3->dev,
   "duplicate addresses 0x%x for subclients\n",
   VAR_8[0]);
  VAR_6 = -VAR_1;
  goto ERROR_SC_2;
 }

 VAR_9->lm75[0] = FUNC_7(VAR_10, VAR_8[0]);
 if (FUNC_0(VAR_9->lm75[0])) {
  FUNC_4(&VAR_3->dev,
   "subclient %d registration at address 0x%x failed.\n",
   1, VAR_8[0]);
  VAR_6 = FUNC_1(VAR_9->lm75[0]);
  goto ERROR_SC_2;
 }

 VAR_9->lm75[1] = FUNC_7(VAR_10, VAR_8[1]);
 if (FUNC_0(VAR_9->lm75[1])) {
  FUNC_4(&VAR_3->dev,
   "subclient %d registration at address 0x%x failed.\n",
   2, VAR_8[1]);
  VAR_6 = FUNC_1(VAR_9->lm75[1]);
  goto ERROR_SC_3;
 }

 return 0;


ERROR_SC_3:
 FUNC_8(VAR_9->lm75[0]);
ERROR_SC_2:
 return VAR_6;
}
