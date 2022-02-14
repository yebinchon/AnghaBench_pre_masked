
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_synapse {size_t num_actions; int* actions_list; size_t action; } ;
struct counter_device_attr {struct counter_action_unit* component; } ;
struct counter_device {TYPE_1__* ops; } ;
struct counter_count {int dummy; } ;
struct counter_action_unit {struct counter_count* count; struct counter_synapse* synapse; } ;
typedef int ssize_t ;
typedef enum counter_synapse_action { ____Placeholder_counter_synapse_action } counter_synapse_action ;
struct TYPE_2__ {int (* action_set ) (struct counter_device* const,struct counter_count* const,struct counter_synapse* const,size_t) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 struct counter_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct counter_device* const,struct counter_count* const,struct counter_synapse* const,size_t) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 struct counter_device_attr* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 const struct counter_device_attr *const VAR_6 = FUNC_3(VAR_3);
 const struct counter_action_unit *const VAR_7 = VAR_6->component;
 struct counter_synapse *const VAR_8 = VAR_7->synapse;
 size_t VAR_9;
 const size_t VAR_10 = VAR_8->num_actions;
 enum counter_synapse_action VAR_11;
 int VAR_12;
 struct counter_device *const VAR_13 = FUNC_0(VAR_2);
 struct counter_count *const VAR_14 = VAR_7->count;


 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_11 = VAR_8->actions_list[VAR_9];
  if (FUNC_2(VAR_4, VAR_1[VAR_11]))
   break;
 }

 if (VAR_9 >= VAR_10)
  return -VAR_0;

 VAR_12 = VAR_13->ops->action_set(VAR_13, VAR_14, VAR_8, VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_8->action = VAR_9;

 return VAR_5;
}
