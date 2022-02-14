
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor {int page; int reg; struct pmbus_sensor* next; } ;
struct pmbus_data {struct pmbus_sensor* sensors; } ;


 int VAR_0 ;
 struct pmbus_sensor* FUNC_0 (int ) ;

__attribute__((used)) static struct pmbus_sensor *FUNC_1(struct pmbus_data *VAR_1, int VAR_2,
           int VAR_3)
{
 struct pmbus_sensor *VAR_4;

 for (VAR_4 = VAR_1->sensors; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_4->page == VAR_2 && VAR_4->reg == VAR_3)
   return VAR_4;
 }

 return FUNC_0(-VAR_0);
}
