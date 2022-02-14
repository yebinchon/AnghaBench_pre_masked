
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_samples_attr {int reg; } ;
struct pmbus_driver_info {int* func; } ;
struct pmbus_data {struct pmbus_driver_info* info; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct pmbus_samples_attr*) ;
 int VAR_0 ;
 int FUNC_1 (struct pmbus_data*,int ,struct pmbus_samples_attr*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct pmbus_samples_attr* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2,
     struct pmbus_data *VAR_3)
{
 const struct pmbus_driver_info *VAR_4 = VAR_3->info;
 int VAR_5;

 if (!(VAR_4->func[0] & VAR_0))
  return 0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  struct pmbus_samples_attr *VAR_6;
  int VAR_7;

  VAR_6 = &VAR_1[VAR_5];
  if (!FUNC_2(VAR_2, 0, VAR_6->reg))
   continue;

  VAR_7 = FUNC_1(VAR_3, 0, VAR_6);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
