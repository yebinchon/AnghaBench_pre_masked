
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_data {int currpage; TYPE_1__* info; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int* func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pmbus_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

int FUNC_3(struct i2c_client *VAR_3, int VAR_4)
{
 struct pmbus_data *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 if (VAR_4 < 0 || VAR_4 == VAR_5->currpage)
  return 0;

 if (!(VAR_5->info->func[VAR_4] & VAR_2)) {
  VAR_6 = FUNC_2(VAR_3, VAR_1, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_6 = FUNC_1(VAR_3, VAR_1);
  if (VAR_6 < 0)
   return VAR_6;

  if (VAR_6 != VAR_4)
   return -VAR_0;
 }

 VAR_5->currpage = VAR_4;

 return 0;
}
