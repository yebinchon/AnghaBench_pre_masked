
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct max732x_chip {struct i2c_client* client_group_b; struct i2c_client* client_group_a; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct max732x_chip *VAR_0, int VAR_1, uint8_t *VAR_2)
{
 struct i2c_client *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1 ? VAR_0->client_group_a : VAR_0->client_group_b;
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "failed reading\n");
  return VAR_4;
 }

 *VAR_2 = (uint8_t)VAR_4;
 return 0;
}
