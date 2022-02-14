
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tsl2563_chip {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_1(struct tsl2563_chip *VAR_2, u8 *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0 | VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_3 = VAR_5;

 return 0;
}
