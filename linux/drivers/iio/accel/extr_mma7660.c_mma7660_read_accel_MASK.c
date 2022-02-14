
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma7660_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct mma7660_data *VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6 = VAR_1;
 struct i2c_client *VAR_7 = VAR_3->client;
 do {
  VAR_5 = FUNC_1(VAR_7, VAR_4);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_7->dev, "register read failed\n");
   return VAR_5;
  }
 } while (VAR_6-- > 0 && VAR_5 & VAR_2);

 if (VAR_5 & VAR_2) {
  FUNC_0(&VAR_7->dev, "all register read retries failed\n");
  return -VAR_0;
 }

 return VAR_5;
}
