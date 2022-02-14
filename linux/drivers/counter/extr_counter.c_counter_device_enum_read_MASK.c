
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device_enum_ext {int (* get ) (struct counter_device*,size_t*) ;size_t num_items; char** items; } ;
struct counter_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct counter_device*,size_t*) ;

ssize_t FUNC_2(struct counter_device *VAR_1, void *VAR_2,
     char *VAR_3)
{
 const struct counter_device_enum_ext *const VAR_4 = VAR_2;
 int VAR_5;
 size_t VAR_6;

 if (!VAR_4->get)
  return -VAR_0;

 VAR_5 = VAR_4->get(VAR_1, &VAR_6);
 if (VAR_5)
  return VAR_5;

 if (VAR_6 >= VAR_4->num_items)
  return -VAR_0;

 return FUNC_0(VAR_3, "%s\n", VAR_4->items[VAR_6]);
}
