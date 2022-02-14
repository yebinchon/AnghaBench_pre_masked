
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmp401_data {int update_interval; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct tmp401_data *VAR_4,
         struct i2c_client *VAR_5)
{
 int VAR_6, VAR_7, VAR_8 = 0;


 FUNC_1(VAR_5, VAR_3, 5);
 VAR_4->update_interval = 500;


 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = VAR_6;
 VAR_6 &= ~VAR_1;

 if (VAR_6 != VAR_7)
  VAR_8 = FUNC_1(VAR_5,
         VAR_2,
         VAR_6);

 return VAR_8;
}
