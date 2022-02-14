
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3, char *VAR_4)
{
 FUNC_0(&VAR_2->dev, "adapter quirk: %s (addr 0x%04x, size %u, %s)\n",
       VAR_4, VAR_3->addr, VAR_3->len,
       VAR_3->flags & VAR_1 ? "read" : "write");
 return -VAR_0;
}
