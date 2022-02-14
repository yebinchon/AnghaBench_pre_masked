
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lidar_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_3(struct lidar_data *VAR_0, u8 VAR_1, u8 *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = VAR_0->client;
 int VAR_5;






 while (VAR_3--) {
  VAR_5 = FUNC_2(VAR_4, VAR_1++);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_4->dev, "cannot write addr value");
   return VAR_5;
  }

  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_4->dev, "cannot read data value");
   return VAR_5;
  }

  *(VAR_2++) = VAR_5;
 }

 return 0;
}
