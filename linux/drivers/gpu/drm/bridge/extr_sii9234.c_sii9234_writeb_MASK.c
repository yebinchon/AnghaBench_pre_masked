
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii9234 {int i2c_error; int dev; struct i2c_client** client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(struct sii9234 *VAR_1, int VAR_2, int VAR_3,
     int VAR_4)
{
 int VAR_5;
 struct i2c_client *VAR_6 = VAR_1->client[VAR_2];

 if (VAR_1->i2c_error)
  return VAR_1->i2c_error;

 VAR_5 = FUNC_1(VAR_6, VAR_3, VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_1->dev, "writeb: %4s[0x%02x] <- 0x%02x\n",
   VAR_0[VAR_2], VAR_3, VAR_4);
 VAR_1->i2c_error = VAR_5;

 return VAR_5;
}
