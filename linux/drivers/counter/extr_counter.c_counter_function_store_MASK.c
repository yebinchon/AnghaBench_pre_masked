
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
struct counter_count {size_t num_functions; int* functions_list; size_t function; } ;
typedef int ssize_t ;
typedef enum counter_count_function { ____Placeholder_counter_count_function } counter_count_function ;
struct TYPE_2__ {int (* function_set ) (struct counter_device* const,struct counter_count* const,size_t) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 struct counter_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct counter_device* const,struct counter_count* const,size_t) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 struct counter_device_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 const struct counter_device_attr *const VAR_6 = FUNC_3(VAR_3);
 const struct counter_count_unit *const VAR_7 = VAR_6->component;
 struct counter_count *const VAR_8 = VAR_7->count;
 const size_t VAR_9 = VAR_8->num_functions;
 size_t VAR_10;
 enum counter_count_function VAR_11;
 int VAR_12;
 struct counter_device *const VAR_13 = FUNC_0(VAR_2);


 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_11 = VAR_8->functions_list[VAR_10];
  if (FUNC_2(VAR_4, VAR_1[VAR_11]))
   break;
 }

 if (VAR_10 >= VAR_9)
  return -VAR_0;

 VAR_12 = VAR_13->ops->function_set(VAR_13, VAR_8, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_8->function = VAR_10;

 return VAR_5;
}
