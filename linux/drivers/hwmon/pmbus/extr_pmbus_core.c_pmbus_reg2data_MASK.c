
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmbus_sensor {long data; size_t class; int convert; } ;
struct pmbus_data {TYPE_1__* info; } ;
struct TYPE_2__ {int* format; } ;




 long FUNC_0 (struct pmbus_data*,struct pmbus_sensor*) ;
 long FUNC_1 (struct pmbus_data*,struct pmbus_sensor*) ;
 long FUNC_2 (struct pmbus_data*,struct pmbus_sensor*) ;


__attribute__((used)) static long FUNC_3(struct pmbus_data *VAR_0, struct pmbus_sensor *VAR_1)
{
 long VAR_2;

 if (!VAR_1->convert)
  return VAR_1->data;

 switch (VAR_0->info->format[VAR_1->class]) {
 case 130:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
 default:
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  break;
 }
 return VAR_2;
}
