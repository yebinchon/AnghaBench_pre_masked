
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct cy8ctmg110 {struct i2c_client* client; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,unsigned char*,unsigned char) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct cy8ctmg110 *VAR_1, unsigned char VAR_2,
  unsigned char VAR_3, unsigned char *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->client;
 int VAR_6;
 unsigned char VAR_7[6];

 FUNC_0(VAR_3 > 5);

 VAR_7[0] = VAR_2;
 FUNC_3(VAR_7 + 1, VAR_4, VAR_3);

 VAR_6 = FUNC_2(VAR_5, VAR_7, VAR_3 + 1);
 if (VAR_6 != VAR_3 + 1) {
  FUNC_1(&VAR_5->dev, "i2c write data cmd failed\n");
  return VAR_6 < 0 ? VAR_6 : -VAR_0;
 }

 return 0;
}
