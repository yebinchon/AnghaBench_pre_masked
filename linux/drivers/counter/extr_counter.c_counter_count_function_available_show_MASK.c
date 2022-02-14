
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_func_avail_unit {int* functions_list; size_t num_functions; } ;
struct counter_device_attr {struct counter_func_avail_unit* component; } ;
typedef int ssize_t ;
typedef enum counter_count_function { ____Placeholder_counter_count_function } counter_count_function ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct counter_device_attr* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 const struct counter_device_attr *const VAR_4 = FUNC_1(VAR_2);
 const struct counter_func_avail_unit *const VAR_5 = VAR_4->component;
 const enum counter_count_function *const VAR_6 = VAR_5->functions_list;
 const size_t VAR_7 = VAR_5->num_functions;
 size_t VAR_8;
 enum counter_count_function VAR_9;
 ssize_t VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_9 = VAR_6[VAR_8];
  VAR_10 += FUNC_0(VAR_3 + VAR_10, "%s\n",
          VAR_0[VAR_9]);
 }

 return VAR_10;
}
