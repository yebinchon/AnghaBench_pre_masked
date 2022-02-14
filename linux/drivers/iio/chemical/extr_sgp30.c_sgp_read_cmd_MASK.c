
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sgp_reading {int start; } ;
typedef int u8 ;
struct sgp_data {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef enum sgp_cmd { ____Placeholder_sgp_cmd } sgp_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct i2c_client*,int *,size_t) ;
 int FUNC_1 (struct i2c_client*,char const*,int) ;
 int FUNC_2 (struct sgp_data*,union sgp_reading*,size_t) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct sgp_data *VAR_4, enum sgp_cmd VAR_5,
   union sgp_reading *VAR_6, size_t VAR_7,
   unsigned long VAR_8)
{
 int VAR_9;
 struct i2c_client *VAR_10 = VAR_4->client;
 size_t VAR_11 = VAR_7 * (VAR_3 + VAR_2);
 u8 *VAR_12;

 VAR_9 = FUNC_1(VAR_10, (const char *)&VAR_5, VAR_1);
 if (VAR_9 != VAR_1)
  return -VAR_0;
 FUNC_3(VAR_8, VAR_8 + 1000);

 if (VAR_7 == 0)
  return 0;

 VAR_12 = &VAR_6->start;
 VAR_9 = FUNC_0(VAR_10, VAR_12, VAR_11);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != VAR_11)
  return -VAR_0;

 return FUNC_2(VAR_4, VAR_6, VAR_7);
}
