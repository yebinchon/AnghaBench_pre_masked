
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int,int *) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u8 VAR_2, u8 *VAR_3, int VAR_4)
{
 struct i2c_msg VAR_5[2];
 int VAR_6;

 VAR_5[0].addr = VAR_1->addr;
 VAR_5[0].flags = 0;
 VAR_5[0].len = 1;
 VAR_5[0].buf = &VAR_2;
 VAR_5[1].addr = VAR_1->addr;
 VAR_5[1].flags = VAR_0;
 VAR_5[1].len = VAR_4;
 VAR_5[1].buf = VAR_3;

 VAR_6 = FUNC_2(VAR_1->adapter, VAR_5, 2);
 if (VAR_6 < 0)
  FUNC_1(&VAR_1->dev, "Error %d reading from cec:0x%x\n", VAR_6, VAR_2);

 FUNC_0(&VAR_1->dev, "rd 0x%02x: %*ph\n", VAR_2, VAR_4, VAR_3);

 return VAR_6;
}
