
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct counter_device_attr {struct counter_action_avail_unit* component; } ;
struct counter_action_avail_unit {size_t num_actions; int* actions_list; } ;
typedef int ssize_t ;
typedef enum counter_synapse_action { ____Placeholder_counter_synapse_action } counter_synapse_action ;


 char** VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 struct counter_device_attr* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 const struct counter_device_attr *const VAR_4 = FUNC_1(VAR_2);
 const struct counter_action_avail_unit *const VAR_5 = VAR_4->component;
 size_t VAR_6;
 enum counter_synapse_action VAR_7;
 ssize_t VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_actions; VAR_6++) {
  VAR_7 = VAR_5->actions_list[VAR_6];
  VAR_8 += FUNC_0(VAR_3 + VAR_8, "%s\n",
          VAR_0[VAR_7]);
 }

 return VAR_8;
}
