
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; int adapter; int dev; } ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_0)
{
 int VAR_1;



 VAR_1 = FUNC_2(VAR_0, 0x40);

 if (VAR_1 & 0x02) {
  FUNC_0(&VAR_0->dev,
   "Client (%d,0x%02x) config is locked.\n",
   FUNC_1(VAR_0->adapter), VAR_0->addr);
 }
 if (!(VAR_1 & 0x04)) {
  FUNC_0(&VAR_0->dev, "Client (%d,0x%02x) is not ready.\n",
   FUNC_1(VAR_0->adapter), VAR_0->addr);
 }






 VAR_1 = (VAR_1 & ~0x02) | 0x01;
 FUNC_3(VAR_0, 0x40, VAR_1 & 0xff);

}
