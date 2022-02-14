
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_data {int (* read_status ) (struct i2c_client*,int) ;} ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_client*,int,int ) ;
 struct pmbus_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4)
{
 struct pmbus_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6, VAR_7;

 VAR_6 = VAR_5->read_status(VAR_4, -1);
 if (VAR_6 < 0 || (VAR_6 & VAR_2)) {
  VAR_7 = FUNC_0(VAR_4, -1, VAR_3);
  if (VAR_7 < 0 || (VAR_7 & VAR_1))
   return -VAR_0;
 }
 return 0;
}
