
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct i2c_client*) ;
 scalar_t__ FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 FUNC_6(VAR_4, VAR_1);
 FUNC_6(VAR_4, VAR_2);

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6 != VAR_3) {
  FUNC_0(&VAR_4->dev,
   "Initialization error, status: 0x%X\n", VAR_6);
  return -VAR_0;
 }

 return 0;
}
