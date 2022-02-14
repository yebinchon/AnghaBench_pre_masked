
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_sensor_attr {int func; scalar_t__ paged; } ;
struct pmbus_driver_info {int pages; int* func; } ;



__attribute__((used)) static bool FUNC_0(const struct pmbus_driver_info *VAR_0,
      const struct pmbus_sensor_attr *VAR_1)
{
 int VAR_2;

 if (VAR_1->paged)
  return 1;
 for (VAR_2 = 1; VAR_2 < VAR_0->pages; VAR_2++) {
  if (VAR_0->func[VAR_2] & VAR_1->func)
   return 1;
 }
 return 0;
}
