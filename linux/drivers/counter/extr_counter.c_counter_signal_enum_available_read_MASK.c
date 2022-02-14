
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_signal_enum_ext {size_t num_items; char** items; } ;
struct counter_signal {int dummy; } ;
struct counter_device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (char*,char*,char*) ;

ssize_t FUNC_1(struct counter_device *VAR_0,
        struct counter_signal *VAR_1,
        void *VAR_2, char *VAR_3)
{
 const struct counter_signal_enum_ext *const VAR_4 = VAR_2;
 size_t VAR_5;
 size_t VAR_6 = 0;

 if (!VAR_4->num_items)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_items; VAR_5++)
  VAR_6 += FUNC_0(VAR_3 + VAR_6, "%s\n", VAR_4->items[VAR_5]);

 return VAR_6;
}
