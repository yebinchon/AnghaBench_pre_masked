
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_device_attr {struct counter_count_unit* component; } ;
struct counter_device {TYPE_1__* ops; } ;
struct counter_count_unit {struct counter_count* count; } ;
struct counter_count {size_t function; int* functions_list; } ;
typedef int ssize_t ;
typedef enum counter_count_function { ____Placeholder_counter_count_function } counter_count_function ;
struct TYPE_2__ {int (* function_get ) (struct counter_device* const,struct counter_count* const,size_t*) ;} ;


 char** VAR_0 ;
 struct counter_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct counter_device* const,struct counter_count* const,size_t*) ;
 struct counter_device_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct counter_device *const VAR_5 = FUNC_0(VAR_1);
 const struct counter_device_attr *const VAR_6 = FUNC_3(VAR_2);
 const struct counter_count_unit *const VAR_7 = VAR_6->component;
 struct counter_count *const VAR_8 = VAR_7->count;
 size_t VAR_9;
 enum counter_count_function VAR_10;

 VAR_4 = VAR_5->ops->function_get(VAR_5, VAR_8, &VAR_9);
 if (VAR_4)
  return VAR_4;

 VAR_8->function = VAR_9;

 VAR_10 = VAR_8->functions_list[VAR_9];
 return FUNC_1(VAR_3, "%s\n", VAR_0[VAR_10]);
}
