
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int * buf; int flags; } ;
struct i2c_client {int addr; int dev; int adapter; } ;
typedef int bl_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
       u16 VAR_7, u8 *VAR_8, u16 VAR_9)
{
 struct i2c_msg VAR_10;
 int VAR_11, VAR_12;
 u8 VAR_13[VAR_4];

 if (VAR_9 % VAR_4)
  return -VAR_0;

 VAR_10.addr = VAR_6->addr ^ VAR_3;
 VAR_10.flags = VAR_2;
 VAR_10.len = sizeof(VAR_13);
 VAR_10.buf = VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12 += VAR_4) {
  VAR_11 = FUNC_2(VAR_6, VAR_5, VAR_7 + VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_6->adapter, &VAR_10, 1);
  if (VAR_11 != 1)
   goto msg_fail;

  if (FUNC_3(VAR_13, VAR_8 + VAR_12, sizeof(VAR_13))) {
   FUNC_0(&VAR_6->dev,
    "Failed to verify block at address 0x%04X\n",
    VAR_7 + VAR_12);
   return -VAR_1;
  }
 }

 return 0;

msg_fail:
 if (VAR_11 >= 0)
  VAR_11 = -VAR_1;

 FUNC_0(&VAR_6->dev, "Failed to read block at address 0x%04X: %d\n",
  VAR_7 + VAR_12, VAR_11);

 return VAR_11;
}
