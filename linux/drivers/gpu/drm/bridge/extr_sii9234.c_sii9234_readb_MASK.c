
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii9234 {int i2c_error; int dev; struct i2c_client** client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct sii9234 *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 struct i2c_client *VAR_5 = VAR_1->client[VAR_2];

 if (VAR_1->i2c_error)
  return VAR_1->i2c_error;

 VAR_4 = FUNC_2(VAR_5, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "readb: %4s[0x%02x]\n",
   VAR_0[VAR_2], VAR_3);
  VAR_1->i2c_error = VAR_4;
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "readb: %4s[0x%02x]\n",
   VAR_0[VAR_2], VAR_3);
  VAR_1->i2c_error = VAR_4;
 }

 return VAR_4;
}
