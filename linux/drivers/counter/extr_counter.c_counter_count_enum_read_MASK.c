
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_device {int dummy; } ;
struct counter_count_enum_ext {int (* get ) (struct counter_device*,struct counter_count*,size_t*) ;size_t num_items; char** items; } ;
struct counter_count {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (struct counter_device*,struct counter_count*,size_t*) ;

ssize_t FUNC_2(struct counter_device *VAR_1,
    struct counter_count *VAR_2, void *VAR_3,
    char *VAR_4)
{
 const struct counter_count_enum_ext *const VAR_5 = VAR_3;
 int VAR_6;
 size_t VAR_7;

 if (!VAR_5->get)
  return -VAR_0;

 VAR_6 = VAR_5->get(VAR_1, VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 >= VAR_5->num_items)
  return -VAR_0;

 return FUNC_0(VAR_4, "%s\n", VAR_5->items[VAR_7]);
}
