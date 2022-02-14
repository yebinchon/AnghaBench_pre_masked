
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct as3645a {struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,int ,int ,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct as3645a *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

 FUNC_0(&VAR_3->dev, "Write Addr:%02X Val:%02X %s\n", VAR_1, VAR_2,
  VAR_4 < 0 ? "fail" : "ok");

 return VAR_4;
}
