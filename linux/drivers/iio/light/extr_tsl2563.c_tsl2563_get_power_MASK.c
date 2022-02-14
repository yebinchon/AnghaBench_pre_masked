
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2563_chip {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_1(struct tsl2563_chip *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0 | VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 return (VAR_6 & VAR_2) == VAR_1;
}
