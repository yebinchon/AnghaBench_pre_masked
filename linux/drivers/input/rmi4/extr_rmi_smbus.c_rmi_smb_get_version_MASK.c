
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmi_smb_xport {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct rmi_smb_xport *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_2->dev, "failed to get SMBus version number!\n");
  return VAR_3;
 }

 return VAR_3 + 1;
}
