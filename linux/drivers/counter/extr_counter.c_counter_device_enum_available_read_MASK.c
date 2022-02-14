
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device_enum_ext {size_t num_items; char** items; } ;
struct counter_device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (char*,char*,char*) ;

ssize_t FUNC_1(struct counter_device *VAR_0,
        void *VAR_1, char *VAR_2)
{
 const struct counter_device_enum_ext *const VAR_3 = VAR_1;
 size_t VAR_4;
 size_t VAR_5 = 0;

 if (!VAR_3->num_items)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_items; VAR_4++)
  VAR_5 += FUNC_0(VAR_2 + VAR_5, "%s\n", VAR_3->items[VAR_4]);

 return VAR_5;
}
