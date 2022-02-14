
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc3230_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mc3230_data *VAR_2, int VAR_3)
{
 int VAR_4;
 struct i2c_client *VAR_5 = VAR_2->client;

 VAR_4 = FUNC_1(VAR_5, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_5->dev, "failed to read mode reg: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 &= ~VAR_0;
 VAR_4 |= VAR_3;

 VAR_4 = FUNC_2(VAR_5, VAR_1, VAR_4);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_5->dev, "failed to write mode reg: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
