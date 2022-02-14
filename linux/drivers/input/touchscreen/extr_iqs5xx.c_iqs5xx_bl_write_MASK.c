
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int addr; int len; int * buf; scalar_t__ flags; } ;
struct i2c_client {int addr; int dev; int adapter; } ;
typedef int mbuf ;
typedef int bl_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
      u16 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 struct i2c_msg VAR_8;
 int VAR_9, VAR_10;
 u8 VAR_11[sizeof(VAR_5) + VAR_3];

 if (VAR_7 % VAR_3)
  return -VAR_0;

 VAR_8.addr = VAR_4->addr ^ VAR_2;
 VAR_8.flags = 0;
 VAR_8.len = sizeof(VAR_11);
 VAR_8.buf = VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += VAR_3) {
  FUNC_3(VAR_5 + VAR_10, VAR_11);
  FUNC_2(VAR_11 + sizeof(VAR_5), VAR_6 + VAR_10,
         sizeof(VAR_11) - sizeof(VAR_5));

  VAR_9 = FUNC_1(VAR_4->adapter, &VAR_8, 1);
  if (VAR_9 != 1)
   goto msg_fail;

  FUNC_4(10000, 10100);
 }

 return 0;

msg_fail:
 if (VAR_9 >= 0)
  VAR_9 = -VAR_1;

 FUNC_0(&VAR_4->dev, "Failed to write block at address 0x%04X: %d\n",
  VAR_5 + VAR_10, VAR_9);

 return VAR_9;
}
