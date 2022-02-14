
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8450 {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (struct i2c_client*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct mma8450 *VAR_0, unsigned VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->client;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3 < 0)
  FUNC_0(&VAR_2->dev,
   "failed to read register 0x%02x, error %d\n",
   VAR_1, VAR_3);

 return VAR_3;
}
