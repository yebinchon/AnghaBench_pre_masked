
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct ad7291_chip_info {struct i2c_client* client; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct ad7291_chip_info *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "I2C read error\n");
  return VAR_4;
 }

 *VAR_2 = VAR_4;

 return 0;
}
