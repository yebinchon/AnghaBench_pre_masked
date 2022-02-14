
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int pages; scalar_t__* format; int vrm_version; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ,int ) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,struct pmbus_driver_info*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 scalar_t__ FUNC_4 (struct i2c_client*,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8,
     struct pmbus_driver_info *VAR_9)
{
 int VAR_10 = 0;

 if (!VAR_9->pages) {






  if (FUNC_0(VAR_8, 0, VAR_1)) {
   int VAR_11;

   for (VAR_11 = 1; VAR_11 < VAR_2; VAR_11++) {
    if (FUNC_4(VAR_8, VAR_11) < 0)
     break;
   }
   FUNC_4(VAR_8, 0);
   VAR_9->pages = VAR_11;
  } else {
   VAR_9->pages = 1;
  }

  FUNC_1(VAR_8);
 }

 if (FUNC_0(VAR_8, 0, VAR_3)) {
  int VAR_12;

  VAR_12 = FUNC_3(VAR_8, 0, VAR_3);
  if (VAR_12 >= 0 && VAR_12 != 0xff) {
   switch (VAR_12 >> 5) {
   case 0:
    break;
   case 1:
    VAR_9->format[VAR_4] = VAR_6;
    VAR_9->vrm_version = VAR_7;
    break;
   case 2:
    VAR_9->format[VAR_4] = VAR_5;
    break;
   default:
    VAR_10 = -VAR_0;
    goto abort;
   }
  }
 }
 if (VAR_9->format[VAR_4] == VAR_5) {
  VAR_10 = -VAR_0;
  goto abort;
 }


 FUNC_2(VAR_8, VAR_9);
abort:
 return VAR_10;
}
