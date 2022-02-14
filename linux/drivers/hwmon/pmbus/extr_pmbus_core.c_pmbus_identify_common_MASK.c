
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_data {int* exponent; TYPE_1__* info; } ;
struct i2c_client {int dummy; } ;
typedef int s8 ;
struct TYPE_2__ {int * format; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct i2c_client*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct i2c_client*,int,int ) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_6,
     struct pmbus_data *VAR_7, int VAR_8)
{
 int VAR_9 = -1;

 if (FUNC_1(VAR_6, VAR_8, VAR_1))
  VAR_9 = FUNC_0(VAR_6, VAR_8,
        VAR_1);
 if (VAR_9 >= 0 && VAR_9 != 0xff) {




  switch (VAR_9 >> 5) {
  case 0:
   if (VAR_7->info->format[VAR_2] != VAR_4)
    return -VAR_0;

   VAR_7->exponent[VAR_8] = ((s8)(VAR_9 << 3)) >> 3;
   break;
  case 1:
   if (VAR_7->info->format[VAR_2] != VAR_5)
    return -VAR_0;
   break;
  case 2:
   if (VAR_7->info->format[VAR_2] != VAR_3)
    return -VAR_0;
   break;
  default:
   return -VAR_0;
  }
 }

 FUNC_2(VAR_6, VAR_8);
 return 0;
}
