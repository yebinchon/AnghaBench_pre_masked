
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int type; int * lm75; } ;
struct i2c_client {int addr; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int,...) ;
 int* VAR_3 ;
 int FUNC_3 (struct i2c_adapter*) ;
 struct w83781d_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_adapter*,unsigned short) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct w83781d_data*,int ) ;
 int FUNC_8 (struct w83781d_data*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(struct i2c_client *VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8;
 int VAR_9;
 int VAR_10 = VAR_5->addr;
 unsigned short VAR_11[2];
 struct i2c_adapter *VAR_12 = VAR_5->adapter;
 struct w83781d_data *VAR_13 = FUNC_4(VAR_5);
 enum chips VAR_14 = VAR_13->type;
 int VAR_15 = 1;

 VAR_8 = FUNC_3(VAR_12);

 if (VAR_3[0] == VAR_8 && VAR_3[1] == VAR_10) {
  for (VAR_6 = 2; VAR_6 <= 3; VAR_6++) {
   if (VAR_3[VAR_6] < 0x48 ||
       VAR_3[VAR_6] > 0x4f) {
    FUNC_2(&VAR_5->dev,
     "Invalid subclient address %d; must be 0x48-0x4f\n",
     VAR_3[VAR_6]);
    VAR_9 = -VAR_1;
    goto ERROR_SC_1;
   }
  }
  FUNC_8(VAR_13, VAR_2,
    (VAR_3[2] & 0x07) |
    ((VAR_3[3] & 0x07) << 4));
  VAR_11[0] = VAR_3[2];
 } else {
  VAR_7 = FUNC_7(VAR_13, VAR_2);
  VAR_11[0] = 0x48 + (VAR_7 & 0x07);
 }

 if (VAR_14 != VAR_4) {
  VAR_15 = 2;
  if (VAR_3[0] == VAR_8 &&
      VAR_3[1] == VAR_10) {
   VAR_11[1] = VAR_3[3];
  } else {
   VAR_11[1] = 0x48 + ((VAR_7 >> 4) & 0x07);
  }
  if (VAR_11[0] == VAR_11[1]) {
   FUNC_2(&VAR_5->dev,
          "Duplicate addresses 0x%x for subclients.\n",
          VAR_11[0]);
   VAR_9 = -VAR_0;
   goto ERROR_SC_2;
  }
 }

 for (VAR_6 = 0; VAR_6 < VAR_15; VAR_6++) {
  VAR_13->lm75[VAR_6] = FUNC_5(VAR_12, VAR_11[VAR_6]);
  if (FUNC_0(VAR_13->lm75[VAR_6])) {
   FUNC_2(&VAR_5->dev,
    "Subclient %d registration at address 0x%x failed.\n",
    VAR_6, VAR_11[VAR_6]);
   VAR_9 = FUNC_1(VAR_13->lm75[VAR_6]);
   if (VAR_6 == 1)
    goto ERROR_SC_3;
   goto ERROR_SC_2;
  }
 }

 return 0;


ERROR_SC_3:
 FUNC_6(VAR_13->lm75[0]);
ERROR_SC_2:
ERROR_SC_1:
 return VAR_9;
}
