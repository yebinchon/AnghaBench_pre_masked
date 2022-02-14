
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct i2c_client {int irq; } ;
struct ar1021_i2c {struct i2c_client* client; } ;
typedef int cmd_enable_touch ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*,int const*,int) ;
 struct ar1021_i2c* FUNC_2 (struct input_dev*) ;

__attribute__((used)) static int FUNC_3(struct input_dev *VAR_0)
{
 static const u8 VAR_1[] = {
  129,
  0x01,
  128
 };
 struct ar1021_i2c *VAR_2 = FUNC_2(VAR_0);
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->client, VAR_1,
    sizeof(VAR_1));
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_3->irq);

 return 0;
}
