
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mma8450 {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (struct i2c_client*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct mma8450 *VAR_0, unsigned VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev,
   "failed to write to register 0x%02x, error %d\n",
   VAR_1, VAR_4);
  return VAR_4;
 }

 return 0;
}
