
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_synapse {size_t action; int* actions_list; } ;
struct counter_device_attr {struct counter_action_unit* component; } ;
struct counter_device {TYPE_1__* ops; } ;
struct counter_count {int dummy; } ;
struct counter_action_unit {struct counter_synapse* synapse; struct counter_count* count; } ;
typedef int ssize_t ;
typedef enum counter_synapse_action { ____Placeholder_counter_synapse_action } counter_synapse_action ;
struct TYPE_2__ {int (* action_get ) (struct counter_device* const,struct counter_count* const,struct counter_synapse* const,size_t*) ;} ;


 char** VAR_0 ;
 struct counter_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (struct counter_device* const,struct counter_count* const,struct counter_synapse* const,size_t*) ;
 struct counter_device_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 const struct counter_device_attr *const VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 struct counter_device *const VAR_6 = FUNC_0(VAR_1);
 const struct counter_action_unit *const VAR_7 = VAR_4->component;
 struct counter_count *const VAR_8 = VAR_7->count;
 struct counter_synapse *const VAR_9 = VAR_7->synapse;
 size_t VAR_10;
 enum counter_synapse_action VAR_11;

 VAR_5 = VAR_6->ops->action_get(VAR_6, VAR_8, VAR_9, &VAR_10);
 if (VAR_5)
  return VAR_5;

 VAR_9->action = VAR_10;

 VAR_11 = VAR_9->actions_list[VAR_10];
 return FUNC_1(VAR_3, "%s\n", VAR_0[VAR_11]);
}
