
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct i2c_client*,scalar_t__*,int) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4, u8 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, "'", 2);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 != 2)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 != VAR_2)
  return -VAR_1;

 if (FUNC_0(VAR_5) != VAR_2 ||
   VAR_5[2] != VAR_3)
  return -VAR_0;

 return 0;
}
