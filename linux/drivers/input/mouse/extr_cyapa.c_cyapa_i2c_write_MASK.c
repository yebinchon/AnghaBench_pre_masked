
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct i2c_client {int dummy; } ;
struct cyapa {struct i2c_client* client; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,char*,size_t) ;
 int FUNC_1 (char*,void const*,size_t) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_2, u8 VAR_3,
      size_t VAR_4, const void *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->client;
 char VAR_7[32];
 int VAR_8;

 if (VAR_4 > sizeof(VAR_7) - 1)
  return -VAR_1;

 VAR_7[0] = VAR_3;
 FUNC_1(&VAR_7[1], VAR_5, VAR_4);

 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_4 + 1);
 if (VAR_8 != VAR_4 + 1)
  return VAR_8 < 0 ? VAR_8 : -VAR_0;

 return 0;
}
